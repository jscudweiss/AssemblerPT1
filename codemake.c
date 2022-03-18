//
// Created by jscud on 3/8/2022.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "map.h"
#include "mappings.h"
#include "IO.h"

#define MAX_LEN 200
#define MAX_LINES 32768

char *commands[MAX_LINES];
char comTypes[MAX_LINES];
int curCom = 0;
int commandNum = 0;
/***
 * Converts a Base Ten integer to an array of 15 binary digits
 * @param baseTen, the Base Ten integer input
 * @param outBin, the array of binary digits
 */
void tenToTwo(int baseTen, int outBin[16]) {
    //printf("%d\n",baseTen);
    outBin[0] = 0;
    for (int i = 15; i > 0; i--) {
        outBin[i] = baseTen % 2;
        //printf("%d\n",outBin[i]);
        baseTen = baseTen / 2;
        //printf("%d\n",baseTen);
    }
    //printf("\n");
}

/***
 * parses the L command, removing parenthesis, and adding it to the map with the line it was encountered at
 * @param string, the input string/ the L command
 * @param curLine, the current line number
 */
void parseL(char *string, int curLine) {
    char strStart[200];
    char *myStr = strStart;
    char *strPtr = myStr;
    while (*string != '\0') {
        switch (*string) {
            case '(':
                break;
            case ')':
                *myStr = '\0';
                addL(strPtr, curLine);
                break;
            default:
                *myStr = *string;
                myStr++;
        }
        string++;
    }
}
/***
 * parses the A command
 * @param string
 * @param intOut
 */
void parseA(char *string, int intOut[16]) {
    string++;//iterate past the @
    unsigned long long len = strlen(string);
    char *ptr = string + (len - 2);
    int loc;
    if (isdigit(*string)) {
        loc = (int) strtol(string, &ptr, 10);
    } else {
        loc = getVal(string);
    }
    tenToTwo(loc, intOut);
}
/***
 * parses the C command
 * @param string
 * @param intOut
 */
void parseC(char *string, int intOut[16]) {
    for (int i = 0; i < 3; i++) {
        intOut[i] = 1;
    }
    char *dest = "null";
    char *comp = string;
    char *jump = "null";
    char *ptr = string;
    int isTrue = 1;
    while (isTrue) {
        switch (*ptr) {
            case '\0':
                isTrue = 0;
                break;
            case '=':
                dest = string;
                comp = (ptr + 1);
                *ptr = '\0';
                break;
            case ';':
                jump = (ptr + 1);
                *ptr = '\0';
                break;
            default:;
        }
        ptr++;
    }
    getDest(dest,intOut);
    getComp(comp,intOut);
    getJump(jump,intOut);
    //char outString[200];
    //sprintf(outString, "\n%s = %s ; %s\n", dest,comp,jump);
    //writeLine(outString);
}

/***|
 * takes an input and does one of three things
 * -stores an A or C command in the commands array
 * -parses the value as an L command
 * -skips over empty lines
 * @param inputString
 * @param inputType
 */
void collectVar(char *inputString, char inputType) {
    switch (inputType) {
        case 'A':case 'C':
            commands[curCom] = malloc(strlen(inputString) + 1);
            strcpy(commands[curCom], inputString);
            comTypes[curCom] = inputType;
            curCom++;
            break;
        case 'L':
            parseL(inputString, curCom);
            break;
        case '\0':
            break;
        default:
            printf("Invalid commandType %c is not a command Type", inputType);
    }
}
/****
 * takes a command from the commands array, and gets the binary output
 * @param outCom, the array of binary digits for the output
 * @return an int representing whether there are any remaining commands
 */
int getCode(int outCom[16]) {
    if (commandNum < curCom) {
        char *stringCom = commands[commandNum];
        char typeCom = comTypes[commandNum];
        switch (typeCom) {
            case 'A':
                parseA(stringCom, outCom);
                break;
            case 'C':
                parseC(stringCom, outCom);
                break;
            default:
                printf("Error: invalid Type%c\n", typeCom);
                exit(3);
        }
        commandNum++;
        return 1;
    } else {
        return 0;
    }
}
/***
 * frees all values in the command array
 */
void freeVals() {
    for (int i = 0; i < curCom; i++) {
        free(commands[i]);
    }
}


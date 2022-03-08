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

char *commands[MAX_LINES][2];
int curCom = 0;
int commandNum = 0;

char *tenToTwo(int baseTen, char outBin[15]) {
    for (int i = 0; i < 15; i++) {
        outBin[i] = (char) (baseTen % 2);
        baseTen = baseTen / 2;
    }
}


void parseL(char *string) {
    char *myStr = malloc(MAX_LEN);
    while (*string != '\0') {
        switch (*string) {
            case '(':
                break;
            case ')':
                addVar(myStr);
                break;
            default:
                *myStr = *string;
                myStr++;
        }
        string++;
    }
    free(myStr);
}

void parseA(char *string, char *strOut) {
    string++;//iterate past the @
    long long len = strlen(string);
    char *ptr = string + (len - 2);
    int loc = 0;
    if (isdigit(*string)) {
        loc = (int) strtol(string, &ptr, 10);
    } else {
        char *locVal = "";
        getVal(string, locVal);
        loc = (int) strtol(locVal, &ptr, 10);
    }
    char binOut[15];
    tenToTwo(loc, binOut);
    strOut = "0";
    strcat(strOut, binOut);
}

void parseC(char *string, char *strOut) {
    strOut = "1111111111111111";
}

void collectVar(char *inputString, char *inputType) {
    switch (*inputType) {
        case 'A':
        case 'C':
            commands[curCom][0] = inputString;
            commands[curCom][1] = inputType;
            curCom++;
            break;
        case 'L':
            parseL(inputString);
            break;
        default:
            printf("Invalid commandType %s is not a command Type", inputType);
    }
}

int getCode(char *outCom) {
    if (commandNum < curCom) {
        char *stringCom = commands[commandNum][0];
        char *typeCom = commands[commandNum][1];
        switch (*typeCom) {
            case 'A':
                parseA(stringCom, outCom);
                break;
            case 'C':
                parseC(stringCom, outCom);
                break;
        }
        commandNum ++;
        return 1;
    }else{
        return 0;
    }
}



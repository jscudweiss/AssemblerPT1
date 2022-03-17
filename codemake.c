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
char *comTypes[MAX_LINES];
int curCom = 0;
int commandNum = 0;

void tenToTwo(int baseTen, int outBin[16]) {
    outBin[0] = 0;
    for (int i = 1; i<16; i++) {
        outBin[i] = baseTen%2;
        baseTen = baseTen / 2;
    }
}


void parseL(char *string) {
    char strStart[200];
    char *myStr = strStart;
    char *strPtr = myStr;
    while (*string != '\0') {
        switch (*string) {
            case '(':
                break;
            case ')':
                *myStr = '\0';
                addVar(strPtr);
                break;
            default:
                *myStr = *string;
                myStr++;
        }
        string++;
    }
}

void parseA(char *string, int intOut[]) {
    string++;//iterate past the @
    long long len = strlen(string);
    char *ptr = string + (len - 2);
    int loc;
    if (isdigit(*string)) {
        loc = (int) strtol(string, &ptr, 10);
    } else {
        int locVal = 0;
        locVal = getVal(string);
        loc = (int) strtol(locVal, &ptr, 10);
    }
    tenToTwo(loc, intOut);
    *intOut = 0;
}

void parseC(char *string, int intOut[]) {
    for (int i = 0; i < 15; i++) {
        intOut[i] = 1;
    }
}

void collectVar(char *inputString, char *inputType) {
    switch (*inputType) {
        case 'A':case 'C':
            commands[curCom] = malloc(strlen(inputString)+1);
            strcpy(commands[curCom], inputString);
            comTypes[curCom] = inputType;
            curCom++;
            break;
        case 'L':
            parseL(inputString);
            break;
        case '\0':
            break;
        default:
            printf("Invalid commandType %s is not a command Type", inputType);
    }
}

int getCode(int *outCom) {
    if (commandNum < curCom) {
        char *stringCom = commands[commandNum];
        char *typeCom = comTypes[commandNum];
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

void freeVals(){
    for(int i = 0; i<curCom; i++){
        free(commands[i]);
    }
}


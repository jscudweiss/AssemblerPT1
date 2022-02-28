//
// Created by jscud on 2/27/2022.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "assembler.h"

#define MAX_LEN 200


//read Input
FILE *IO;

void loadFile(char *filePath) {
    IO = fopen(filePath, "r");

    if (IO == NULL) {
        printf("Error: could not open file %s", filePath);
    }
}

void readLine(char *curLine) {
    char* out = fgets(curLine, MAX_LEN, IO);
    if (out == NULL){
        *curLine = '\0';
    }
}

//Clean up Line

void cleanLine(char *inputString, char *cleanedLine) {
    bool slash = true;
    while (*inputString != '\0' && slash) {
        switch (*inputString) {
            case ' ':
                break;
            case '\n':
                break;
            case '/':
                switch (*(inputString + 1)) {
                    case '/':
                        slash = false;
                        break;
                    default:
                        *cleanedLine = *inputString;
                        cleanedLine++;
                }
                break;
            default:
                *cleanedLine = *inputString;
                cleanedLine++;
        }
        inputString++;
    }
    *cleanedLine = '\0';
}


//determine command type
//type = 0 = A comm
//type = 1 = L comm
//type = 2 = C comm
char *commandType(char comm[200]) {
    char *out = malloc(9);
    switch (*comm) {
        case '\0':
            out = "";
            break;
        case '@':
            out = "A_COMMAND\n";
            break;
        case '(':
            out = "L_COMMAND\n";
            break;
        default:
            out = "C_COMMAND\n";
            break;
    }
    return out;
}


//main method
int main() {
    loadFile("C:/Users/jscud/CLionProjects/assembler/hello.txt");
    char line[200];
    char cleanedLine[200];
    char * output;
    readLine(line);
    while (*line != '\0') {
        cleanLine(line, cleanedLine);
        output = commandType(cleanedLine);
        printf("%s", output);
        readLine(line);
    }
    free(output);
    free(IO);
    return 0;
}

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

void readLine(char * curLine) {
    fgets(curLine, MAX_LEN, IO);
}

//Clean up Line

void cleanLine(char* inputString, char *cleanedLine){
    bool slash = true;
    while (*inputString != '\0' && slash){
        switch (*inputString) {
            case ' ':
                break;
            case '/':
                switch (*(inputString+1)) {
                    case '/':
                        slash=false;
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
char* commandType(char* comm){
    char *out = malloc(9);
    switch (*comm) {
        case '@':
            out = "A_COMMAND";
            break;
        case '(':
            out = "L_COMMAND";
            break;
        default:
            out = "C_COMMAND";
            break;
    }
    return out;
}


//main method
int main() {
    loadFile("C:/Users/jscud/CLionProjects/assembler/hello.txt");
    char buffer[MAX_LEN];
    readLine(buffer);
    printf("%s", buffer);
    putchar('\n');
    char mbuffer[MAX_LEN];
    cleanLine(buffer,mbuffer);
    printf("%s", mbuffer);
    putchar('\n');
    char *type;
    type = commandType(mbuffer);
    printf("%s", type);
    return 0;
}

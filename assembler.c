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


//main method
int main() {
    loadFile("C:/Users/jscud/CLionProjects/AssemblerPT1/hello.txt");
    char buffer[MAX_LEN];
    readLine(buffer);
    printf("%s", buffer);
    putchar('\n');
    char mbuffer[MAX_LEN];
    cleanLine(buffer,mbuffer);
    printf("%s", mbuffer);
    return 0;
}

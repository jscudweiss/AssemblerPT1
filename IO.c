//
// Created by jscud on 3/2/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 200


FILE *outFile;
FILE *inFile;


void initFile(char **filePaths) {
    inFile = fopen(filePaths[1], "r");
    if (inFile == NULL) {
        printf("Error: could not open inFile %s\n", filePaths[1]);
        exit(1);
    }
    outFile = fopen(filePaths[2],"w");
    if (outFile == NULL) {
        printf("Error: could not open outFile %s\n", filePaths[1]);
        exit(2);
    }
}

int readLine(char *curLine) {
    return (fgets(curLine, MAX_LEN, inFile) != NULL);
}

void writeLine(const char* line){
    fputs(line,outFile);
};

void endFile(){
    fputs("\0",outFile);
    fclose(outFile);
};
void cleanLine(char *inputString, char *cleanedLine) {
    int slash = 1;
    while (*inputString != '\0' && slash) {
        switch (*inputString) {
            case ' ': case '\t': case '\n': case '\v': case '\f': case '\r':
                break;
            case '/':
                switch (*(inputString + 1)) {
                    case '/':
                        slash = 0;
                        break;
                    default:
                        break;
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
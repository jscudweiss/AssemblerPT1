//
// Created by jscud on 3/2/2022.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>



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
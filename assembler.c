//
// Created by jscud on 2/27/2022.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "assembler.h"

#define MAX_LEN 200


//read Input
FILE *loadFile(char *filePath) {
    FILE *IO = fopen(filePath, "r");

    if (IO == NULL) {
        printf("Error: could not open file %s", filePath);
    }
    return IO;
}

char *readLine(FILE *IO) {
    char out[MAX_LEN];
    fgets(out, MAX_LEN, IO);
    return out;
}

//Clean up Line



//determine command type


//main method
int main() {
    FILE *IO = loadFile("hello.txt");
    printf("%s", readLine(IO));
    return 0;
}

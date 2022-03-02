//
// Created by jscud on 3/2/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>



#define MAX_LEN 200


FILE *outFile;
FILE *inFile;


void initFile(char **filePaths) {
    outFile = fopen(filePaths[2],"w+");
   inFile = fopen(filePaths[1], "r");
    if (inFile == NULL) {
        printf("Error: could not open file %s", filePaths[1]);
    }
}

bool readLine(char *curLine) {
    return (fgets(curLine, MAX_LEN, inFile) != NULL);
}

void writeLine(const char* line){
    fputs(line,outFile);
};

void endFile(){
    fputs("\0",outFile);
    fclose(outFile);
};
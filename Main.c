//
// Created by jscud on 2/27/2022.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "map.h"
#include "codemake.h"
#include "mappings.h"
#include "IO.h"

#define MAX_LEN 250


//main method
int main(int argc, char **argv) {
    char ** filePaths = argv;
    initFile(filePaths);
    initMaps();
    char* line = malloc(MAX_LEN);
    char *comOut;
    int outLine[16];
    //while there are still lines in the file
    char *cleanedLine = malloc(MAX_LEN);
    while (readLine(line)) {
        cleanLine(line, cleanedLine);
        comOut = commandType(cleanedLine);
        collectVar(cleanedLine,comOut);
    }
    free(line);
    free(cleanedLine);
    // iterate through remaining lines and output the final binary
    char *textStr = malloc(MAX_LEN);
    while (getCode(outLine)){
        for(int curBin=0; curBin<16; curBin++){
            sprintf(&textStr[curBin], "%d", outLine[curBin]);
        }
        writeLine(strcat(textStr,"\n"));
    }
    //wrap up open memory
    free(textStr);
    endFile();
    closeMaps();
    freeVals();
    return 0;
}

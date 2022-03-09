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

#define MAX_LEN 200


//main method
int main(int argc, char **argv) {
    char ** filePaths = argv;
    initFile(filePaths);
    initMaps();
    char line[200];
    char *comOut;
    char outStr[200];
    //while there are still lines in the file
    while (readLine(line)) {
        char *cleanedLine = malloc(200);
        cleanLine(line, cleanedLine);
        comOut = commandType(cleanedLine);
        collectVar(cleanedLine,comOut);
        free(cleanedLine);
    }
    // iterate through remaining lines and output the final binary
    while (getCode(outStr)){
        writeLine(outStr);
    }
    //wrap up open memory
    endFile();
    closeMaps();
    freeVals();
    return 0;
}

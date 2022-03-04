//
// Created by jscud on 2/27/2022.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "command.h"
#include "IO.h"

#define MAX_LEN 200


//main method
int main(int argc, char **argv) {
    char ** filePaths = argv;
    initFile(filePaths);
    char line[200];
    char cleanedLine[200];
    char *comOut;
    //while there are still lines in the file
    while (readLine(line)) {
        cleanLine(line, cleanedLine);
        comOut = commandType(cleanedLine);
        writeLine(comOut);
    }
    //wrap up open memory
    endFile();
    return 0;
}

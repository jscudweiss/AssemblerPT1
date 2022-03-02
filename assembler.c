//
// Created by jscud on 2/27/2022.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "command.h"
#include "cleaner.h"
#include "IO.h"

#define MAX_LEN 200


//main method
int main(int argc, char **argv) {
    initFile(argv);
    char line[200];
    char cleanedLine[200];
    char *comOut;
    while (readLine(line)) {
        cleanLine(line, cleanedLine);
        comOut = commandType(cleanedLine);
        writeLine(comOut);
    }
    endFile();
    free(comOut);
    return 0;
}

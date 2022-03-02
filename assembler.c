//
// Created by jscud on 2/27/2022.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "command.h"
#include "Reader.h"
#include "cleaner.h"
#include "write.h"

#define MAX_LEN 200


//read Input



//Clean up Line







//main method
int main(int argc, char** argv) {
    loadFile(argv[1]);
    writeFile(argv[2]);
    char line[200];
    char cleanedLine[200];
    char * output;
    readLine(line);
    while (*line != '\0') {
        cleanLine(line, cleanedLine);
        output = commandType(cleanedLine);
        writeLine(output);
        readLine(line);
    }
    free(output);
    return 0;
}

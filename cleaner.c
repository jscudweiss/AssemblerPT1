//
// Created by jscud on 3/2/2022.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LEN 200

void cleanLine(char *inputString, char *cleanedLine) {
    bool slash = true;
    while (*inputString != '\0' && slash) {
        switch (*inputString) {
            case ' ':
                break;
            case '\n':
                break;
            case '/':
                switch (*(inputString + 1)) {
                    case '/':
                        slash = false;
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
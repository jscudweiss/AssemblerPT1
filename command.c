//
// Created by jscud on 3/2/2022.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LEN 200

//determine command type
//type = 0 = A comm
//type = 1 = L comm
//type = 2 = C comm
char *commandType(char comm[200]) {
    char *out = malloc(9);
    switch (*comm) {
        case ' ':
            out = "";
            break;
        case '\0':
            out = "\0";
            break;
        case '@':
            out = "A_COMMAND\n";
            break;
        case '(':
            out = "L_COMMAND\n";
            break;
        default:
            out = "C_COMMAND\n";
            break;
    }
    return out;
}
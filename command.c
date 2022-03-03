//
// Created by jscud on 3/2/2022.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 200

//determine command type
//type = 0 = A comm
//type = 1 = L comm
//type = 2 = C comm
char* commandType(const char comm[200]) {
    switch (*comm) {
        case ' ':
            return "";;
        case '\0':
            return "\0";
        case '@':
            return "A_COMMAND\n";
        case '(':
            return "L_COMMAND\n";
        default:
            return "C_COMMAND\n";
    }
}
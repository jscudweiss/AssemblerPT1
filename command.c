//
// Created by jscud on 3/2/2022.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 200


/***
 *
 * @param comm, the input command, a cleaned line
 * @return the command type of the line, A, C, or L.
 */
char* commandType(const char comm[200]) {
    switch (*comm) {
        case ' ':
            //for empty lines
            return "";;
        case '\0':
            //for the documents end
            return "\0";
        case '@':
            return "A_COMMAND\n";
        case '(':
            return "L_COMMAND\n";
        default:
            return "C_COMMAND\n";
    }
}
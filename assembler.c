//
// Created by jscud on 2/27/2022.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "assembler.h"
//read Input
char readInput(char *filePath){
    FILE *IO = fopen(filePath, "r");

    if (IO == NULL){
        printf("Error: could not open file %s", filePath);
        return ' ';
    }


}

//Clean up Line


//determine command type


//main method
void main() {}

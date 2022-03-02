//
// Created by jscud on 3/2/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>



#define MAX_LEN 200
FILE *Out;
void writeFile(char* filePath){
    Out = fopen(filePath,"wb");
};

void writeLine(char* line){
    fputs(line, Out);
};
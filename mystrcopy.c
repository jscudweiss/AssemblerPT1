//
// Created by jscud on 2/23/2022.
//

#include <stdio.h>
#include <string.h>

#define MAX_LINE_LEN 200

void mystrcopy(char* out, char* in) {
    int i = 0;
    //repeat while not null
    //three different methods
    /*while (out[i] != '\0') {
        out[i] = in[i];
        i++;
    }
    out[i] = '\0';*/
    /*int inIndex = 0;
    int outIndex = 0;
    while (in[inIndex] !='\0'){
        out[inIndex] = in[inIndex];
        inIndex++;
        outIndex++;
    }
    out[outIndex] = '\0';*/
    while (*in != '\0'){
        *out = *in;
        //increment the pointers
        in++;
        out++;
    }
    *out = '\0';
}

/*int main(int argc, char **argv) {

    char inputBuffer[MAX_LINE_LEN];
    char copiedBuffer[MAX_LINE_LEN];

    mystrcopy(inputBuffer, "hello world");

    puts(inputBuffer);
}*/

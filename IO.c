//
// Created by jscud on 3/2/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 200


FILE *outFile;
FILE *inFile;

/***
 * opens all relevant files
 * @param filePaths contains the filepaths to both the read and write file
 */
void initFile(char **filePaths) {
    //load file at filePath[1] to read
    inFile = fopen(filePaths[1], "r");
    if (inFile == NULL) {
        printf("Error: could not open inFile %s\n", filePaths[1]);
        exit(1);
    }
    //load file at filePath[2] to write
    outFile = fopen(filePaths[2], "w");
    if (outFile == NULL) {
        printf("Error: could not open outFile %s\n", filePaths[2]);
        exit(2);
    }
}

/***
 * read the line and return whether or not it's null
 * @param curLine , the variable to read the line to
 * @return an int representing if the line is null
 */
int readLine(char *curLine) {
    //read the current line
    return (fgets(curLine, MAX_LEN, inFile) != NULL);
}

/***
 * writes a line into the file
 * @param line, the line to be written to outFile
 */
void writeLine(const char *line) {
    fputs(line, outFile);
};

/***
 * end the outFile with the null terminator and close both files
 */
void endFile() {
    fputs("\0", outFile);
    fclose(outFile);
    fclose(inFile);
};

/***
 * cleans the input line and loads it to the output line
 * @param inputString, the input string to be cleaned
 * @param cleanedLine, output string after cleaning
 */
void cleanLine(char *inputString, char *cleanedLine) {
    int slash = 1;
    //while loop to iterate through line and remove all unnecessary chars
    while (*inputString != '\0' && slash) {
        switch (*inputString) {
            case ' ':case '\t':case '\n':case '\v':case '\f':case '\r':
                //case representing all 6 whitespace characters, skip these
                inputString++;
                continue;
            case '/':
                //if a comment is found
                slash = 0;
                break;
            default:
                //otherwise read the old character to the new line
                *cleanedLine = *inputString;
                cleanedLine++;
        }
        inputString++;
    }
    *cleanedLine = '\0';
}
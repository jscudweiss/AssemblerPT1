//
// Created by jscud on 3/8/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "map.h"
#include "IO.h"

#define MAX_LEN 200
#define MAX_VARS 24576
#define MAX_COMMS 32768

map variableLocs;
map destMap;
map compMap;
map jumpMap;
int curVal = 0;

void addVar(char *varName) {
    char loc[5];
    sprintf(loc, "%d", curVal);
    insertKey(variableLocs, varName, loc);
    curVal++;
}

void addL(char *comName, int loc) {
    char strLoc[5];
    sprintf(strLoc, "%d", loc);
    insertKey(variableLocs, comName, strLoc);
}

void initDest() {
    insertKey(destMap, "null", "000");
    insertKey(destMap, "M", "001");
    insertKey(destMap, "D", "010");
    insertKey(destMap, "MD", "011");
    insertKey(destMap, "A", "100");
    insertKey(destMap, "AM", "101");
    insertKey(destMap, "AD", "110");
    insertKey(destMap, "AMD", "111");
}

void initComp() {
    insertKey(compMap, "0",     "0101010");
    insertKey(compMap, "1",     "0111111");
    insertKey(compMap, "-1",    "0111010");
    insertKey(compMap, "D",     "0001100");
    insertKey(compMap, "A",     "0110000");
    insertKey(compMap, "!D",    "0001101");
    insertKey(compMap, "!A",    "0110001");
    insertKey(compMap, "-D",    "0001111");
    insertKey(compMap, "-A",    "0110011");
    insertKey(compMap, "D+1",   "0011111");
    insertKey(compMap, "A+1",   "0110111");
    insertKey(compMap, "D-1",   "0001110");
    insertKey(compMap, "A-1",   "0110010");
    insertKey(compMap, "D+A",   "0000010");
    insertKey(compMap, "D-A",   "0010011");
    insertKey(compMap, "A-D",   "0000111");
    insertKey(compMap, "D&A",   "0000000");
    insertKey(compMap, "D|A",   "0010101");

    insertKey(compMap, "M",     "1110000");
    insertKey(compMap, "!M",    "1110001");
    insertKey(compMap, "-M",    "1110011");
    insertKey(compMap, "M+1",   "1110111");
    insertKey(compMap, "M-1",   "1110010");
    insertKey(compMap, "D+M",   "1000010");
    insertKey(compMap, "D-M",   "1010011");
    insertKey(compMap, "M-D",   "1000111");
    insertKey(compMap, "D&M",   "1000000");
    insertKey(compMap, "D|M",   "1010101");
}

void initJump() {
    insertKey(jumpMap, "null", "000");
    insertKey(jumpMap, "JGT", "001");
    insertKey(jumpMap, "JEQ", "010");
    insertKey(jumpMap, "JGE", "011");
    insertKey(jumpMap, "JLT", "100");
    insertKey(jumpMap, "JNE", "101");
    insertKey(jumpMap, "JLE", "110");
    insertKey(jumpMap, "JMP", "111");
}
/***
 *
 */
void initMaps() {
    variableLocs = createMap(MAX_COMMS);
    while (curVal < 16) {
        char strName[3];
        sprintf(strName, "R%d", curVal);
        addVar(strName);
    }
    addL("SP", 0);
    addL("LCL", 1);
    addL("ARG", 2);
    addL("THIS", 3);
    addL("THAT", 4);
    addL("SCREEN", 16384);
    addL("KBD", 24576);

    destMap = createMap(8);
    initDest();
    compMap = createMap(28);
    initComp();
    jumpMap = createMap(8);
    initJump();
}

int getVal(char *key) {
    if (!containsKey(variableLocs,key)){
        addVar(key);
    }
    char *outKey = lookupKey(variableLocs, key);
    unsigned long long len = strlen(outKey);
    char *ptr = outKey + (len - 2);
    return (int) strtol(outKey, &ptr, 10);
}

void closeMaps() {
    freeMap(variableLocs);
    freeMap(destMap);
    freeMap(compMap);
    freeMap(jumpMap);
}

void getDest(char* key, int intArr[16]){
    char* outVal = lookupKey(destMap,key);
    for (int i=10; i<13; i++){
        intArr[i] = *outVal - '0';
        outVal++;
    }
}
void getComp(char* key, int intArr[16]){
    char* outVal = lookupKey(compMap,key);
    for (int i=3; i<10; i++){
        intArr[i] = *outVal - '0';
        outVal++;
    }
}
void getJump(char* key, int intArr[16]){
    char* outVal = lookupKey(jumpMap,key);
    for (int i=13; i<16; i++){
        intArr[i] = *outVal - '0';
        outVal++;
    }
}
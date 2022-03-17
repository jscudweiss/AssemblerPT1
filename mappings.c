//
// Created by jscud on 3/8/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "map.h"
#include "IO.h"

#define MAX_LEN 200

map variableLocs;
int curVal = 0;

void addVar(char* varName){
    char loc[5];
    sprintf(loc,"%d", curVal);
    insertKey(variableLocs, varName, loc);
    curVal ++;
}

void initMaps(){
    variableLocs = createMap(2000);
    while (curVal < 16){
        char strName[3];
        sprintf(strName,"R%d", curVal);
        addVar(strName);
    }
}

int getVal(char * key){
    return atoi(lookupKey(variableLocs, key));
}

void closeMaps(){
    freeMap(variableLocs);
}


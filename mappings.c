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
    char* loc = "";
    sprintf(loc,"%d", curVal);
    insertKey(variableLocs, varName, loc);
    curVal ++;
}

void initMaps(){
    variableLocs = createMap(MAX_LEN);
    while (curVal < 16){
        char * Name = "R";
        sprintf(Name,"%d", curVal);
        addVar(Name);
    }

}

void getVal(char * key, char* ValueIndex){
    ValueIndex = lookupKey(variableLocs, key);
}

void closeMaps(){
    freeMap(variableLocs);
}


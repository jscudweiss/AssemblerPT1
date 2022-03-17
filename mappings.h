//
// Created by jscud on 3/8/2022.
//

#ifndef ASSEMBLER_MAPPINGS_H
#define ASSEMBLER_MAPPINGS_H

#endif //ASSEMBLER_MAPPINGS_H

void addVar(char* varName);
void addL(char *comName, int loc);
void initMaps();
void closeMaps();
int getVal(char * key);
void getDest(char* key, int intArr[16]);
void getComp(char* key, int intArr[16]);
void getJump(char* key, int intArr[16]);
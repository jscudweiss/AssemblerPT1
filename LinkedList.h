//
// Created by jscud on 3/18/2022.
//

#ifndef ASSEMBLER_NODE_H
#define ASSEMBLER_NODE_H

#endif //ASSEMBLER_NODE_H
typedef struct node {
    char *Text;
    char Character;
    struct node *Next;
} nodeStruct;

typedef struct linkedList {
    struct node *Head;
    struct node *Tail;
    nodeStruct* nodes;
} listStruct;

typedef listStruct *list;
typedef nodeStruct *Node;

list createList(int MAXSIZE);

void listPush(char *Text, char thisChar, list activeList);

void pushText(char *thisText, list activeList);

void pushChar(char thisChar, list activeList);

char listPull(char *outText, list activeList);

int listDel(list activeList);

int hasNext(list activeList);

void freeList(list activeList);
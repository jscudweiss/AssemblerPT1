//
// Created by jscud on 3/18/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "LinkedList.h"

#define MAX_LEN 250


list createList(int MAXSIZE) {
    list newList = (list) malloc(sizeof(listStruct));
    newList->Head = NULL;
    newList->Tail = NULL;
    //newList->nodes = (nodeStruct*) malloc(MAXSIZE*sizeof(nodeStruct));
    return newList;
}

void listPush(char *thisText, char thisChar, list activeList) {
    Node curNode = (Node) malloc(sizeof(nodeStruct));
    curNode->Character = thisChar;
    curNode->Text = malloc(strlen(thisText));
    strcpy(curNode->Text, thisText);
    if (activeList->Head == NULL) {
        activeList->Head = curNode;
        activeList->Tail = curNode;
        return;
    }
    activeList->Tail->Next = curNode;
    activeList->Tail = curNode;
    activeList->Tail->Next = NULL;
}

void pushText(char *thisText, list activeList) {
    Node curNode = (Node) malloc(sizeof(nodeStruct));
    curNode->Text = malloc(strlen(thisText));
    strcpy(curNode->Text, thisText);
    if (activeList->Head == NULL) {
        activeList->Head = curNode;
        activeList->Tail = curNode;
        return;
    }
    activeList->Tail->Next = curNode;
    activeList->Tail = curNode;
    activeList->Tail->Next = NULL;
}
void pushChar(char thisChar, list activeList) {
    Node curNode = (Node) malloc(sizeof(nodeStruct));
    curNode->Character = thisChar;
    if (activeList->Head == NULL) {
        activeList->Head = curNode;
        activeList->Tail = curNode;
        return;
    }
    activeList->Tail->Next = curNode;
    activeList->Tail = curNode;
    activeList->Tail->Next = NULL;
}

char listPull(char *outText, list activeList) {
    Node curNode = activeList->Head;
    if (activeList->Head == NULL) {
        return '\0';
    }
    activeList->Head = activeList->Head->Next;
    strcpy(outText, curNode->Text);
    char outChar = curNode->Character;
    free(curNode->Text);
    free(curNode);
    return outChar;
}

int pullText(char *outText, list activeList) {
    Node curNode = activeList->Head;
    if (activeList->Head == NULL) {
        return 0;
    }
    activeList->Head = activeList->Head->Next;
    strcpy(outText, curNode->Text);
    free(curNode->Text);
    free(curNode);
    return 1;
}

int pullChar(char outChar, list activeList) {
    Node curNode = activeList->Head;
    if (activeList->Head == NULL) {
        return 0;
    }
    activeList->Head = activeList->Head->Next;
    outChar = curNode->Character;
    free(curNode->Text);
    free(curNode);
    return 1;
}

int listDel(list activeList){
    Node curNode = activeList->Head;
    if (activeList->Head == NULL) {
        return 0;
    }
    activeList->Head = activeList->Head->Next;
    free(curNode->Text);
    free(curNode);
    return 1;
}

int hasNext (list activeList){
    return activeList->Head == NULL;
}

void freeList(list activeList){
    while (listDel(activeList)){}
    //free(activeList->nodes);
    free(activeList);
}




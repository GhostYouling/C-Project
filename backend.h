//
// Created by Swung 0x48 on 2019/12/16.
//

#ifndef BACKEND_H
#define BACKEND_H

#include <stdio.h>

int isISBNCorrect(char ISBN[20], int WillCorrect);
//void InputBookInfo(FILE * fileR, struct Book * cur);
void OutputList(FILE * fileW, struct Book * head);
struct Book * CreateList(FILE * fileR);
struct Book * DeleteItem(struct Book * cur);
struct Book * DeleteList(struct Book * cur);
void OutputItem(FILE * fileW, struct Book * cur);
int QueryByNo(FILE * fileR, struct Book * head, int No);
void BubbleSortByNo(struct Book * head, char op);
struct Book * AddBooks(FILE * fileR, struct Book * head);
struct Book * DeleteBooksByNo(struct Book * head, int No);


#endif //BACKEND_H

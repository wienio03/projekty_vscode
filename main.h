#include <iostream>
#include <cstdarg>
typedef int OBJECT_TYPE;
struct NODE{
NODE* prev;
OBJECT_TYPE info;
NODE* next;
};
void Insert(NODE**, OBJECT_TYPE*);
void Insert(OBJECT_TYPE*, NODE**);
void Insert(NODE**, NODE*, OBJECT_TYPE*);
void Insert(NODE*, OBJECT_TYPE*);
void Display(NODE*);
void CreateList(NODE*, int argCount, ...);


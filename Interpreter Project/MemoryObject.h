#ifndef MEMORYOBJECT_H
#define MEMORYOBJECT_H
#include<iostream>
#include<stack>
#include<vector>
#include "StackValues.h"
using namespace std;

class MemoryObject {
public:
	MemoryObject();
	virtual ~MemoryObject();

	// char* memory;
	// static stack <int> fpstack;

	bool error;
	char type;
	char c;
	short s;
	int i;
	float f;

	// static int sp = -1;
	// static int fpsp = -1;
	// static vector<Value>rstack;
	// static stack<int>fpstack;

	virtual int execute(vector<StackValues*>, stack<int>, int, int) = 0;
	virtual char getChar() = 0;
	virtual short getShort() = 0;
	virtual int getInt() = 0;
	virtual float getFloat() = 0;

};
#endif

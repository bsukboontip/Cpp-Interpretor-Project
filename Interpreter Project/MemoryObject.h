#ifndef MEMORYOBJECT_H
#define MEMORYOBJECT_H
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class MemoryObject {
public:
	MemoryObject();
	virtual ~MemoryObject();

	char* memory;
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

	virtual int execute();
	virtual char getChar();
	virtual short getShort();
	virtual int getInt();
	virtual float getFloat();

};
#endif

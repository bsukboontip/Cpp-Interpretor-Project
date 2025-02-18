#ifndef BYTECODE_H
#define BYTECODE_H
#include<iostream>
#include<string>
#include "MemoryObject.h"

class ByteCode : public MemoryObject{
public:
	ByteCode();
	virtual ~ByteCode();
	virtual char getChar();
	virtual short getShort();
	virtual int getInt();
	virtual float getFloat();
	virtual int execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc, int &flag);
};
#endif
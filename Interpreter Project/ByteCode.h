#ifndef BYTECODE_H
#define BYTECODE_H
#include<iostream>
#include<string>
#include "MemoryObject.h"

class ByteCode : public MemoryObject{
public:
	ByteCode();
	virtual ~ByteCode();
	char getChar();
	short getShort();
	int getInt();
	float getFloat();
	int execute();
};
#endif
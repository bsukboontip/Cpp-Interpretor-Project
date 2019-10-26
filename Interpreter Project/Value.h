#include<iostream>
#include<string>
#include "MemoryObject.h"

class Value : public MemoryObject{
public:
	Value();
	virtual ~Value();

	char c;
	short s;
	int i;
	float f;

	char getChar();
	short getShort();
	int getInt();
	float getFloat();

};

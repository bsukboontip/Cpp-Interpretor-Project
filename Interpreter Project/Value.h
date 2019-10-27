#ifndef VALUE_H
#define VALUE_H
#include<iostream>
#include<string>
#include "MemoryObject.h"

class Value : public MemoryObject{
public:
	Value();
	virtual ~Value();

	Value(bool);
	char type;

	virtual char getChar();
	virtual short getShort();
	virtual int getInt();
	virtual float getFloat();
	virtual int execute();

};
#endif
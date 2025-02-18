#ifndef VALUE_H
#define VALUE_H
#include<iostream>
#include<string>
#include<vector>
#include "MemoryObject.h"

class Value : public MemoryObject{
public:
	Value();
	virtual ~Value();

	Value(bool);

	virtual char getChar();
	virtual short getShort();
	virtual int getInt();
	virtual float getFloat();
	virtual int execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc, int &flag);

};
#endif
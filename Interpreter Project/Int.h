#ifndef INT_H
#define INT_H
#include<iostream>
#include<string>
#include "Value.h"

class Int : public Value{
public:
	Int();
	virtual ~Int();

	Int(bool);

	char getChar();
	short getShort();
	int getInt();
	float getFloat();
	int execute(vector<StackValues*>, vector<int>, int, int, int);

};
#endif
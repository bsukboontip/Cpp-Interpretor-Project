#ifndef STACKVALUES_H
#define STACKVALUES_H
#include<iostream>
#include<string>
#include<vector>

class StackValues {
public:
	StackValues();
	virtual ~StackValues();

	char c;
	short s;
	int i;
	float f;
	char type;

	virtual char getChar();
	virtual short getShort();
	virtual int getInt();
	virtual float getFloat();
	virtual char getType();

};
#endif
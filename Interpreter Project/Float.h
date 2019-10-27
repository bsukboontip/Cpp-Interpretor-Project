#ifndef FLOAT_H
#define FLOAT_H
#include<iostream>
#include<string>
#include "Value.h"

class Float : public Value{
public:
	Float();
	virtual ~Float();

	Float(bool);
	
	char getChar();
	short getShort();
	int getInt();
	float getFloat();
	int execute();

};
#endif
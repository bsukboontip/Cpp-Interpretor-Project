#ifndef CHAR_H
#define CHAR_H
#include<iostream>
#include<string>
#include "Value.h"

class Char : public Value{
public:
	Char();
	virtual ~Char();

	Char(bool);

	char getChar();
	short getShort();
	int getInt();
	float getFloat();
	int execute(vector<StackValues*>, stack<int>, int, int);

};
#endif
#ifndef SHORT_H
#define SHORT_H
#include<iostream>
#include<string>
#include "Value.h"

class Short : public Value{
public:
	Short();
	virtual ~Short();

	Short(bool);

	char getChar();
	short getShort();
	int getInt();
	float getFloat();
	int execute(vector<StackValues*>, stack<int>, int, int, int);

};
#endif
#include<iostream>
#include<string>

class Value : public MemoryObject{
public:
	Value();
	virtual ~Value();

	char getChar();
	short getShort();
	int getInt();
	float getFloat();

};

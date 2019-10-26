#ifndef MEMORYOBJECT_H
#define MEMORYOBJECT_H
#include<iostream>
#include<string>
using namespace std;

class MemoryObject {
public:
	MemoryObject();
	virtual ~MemoryObject();
	// MemoryObject(char*, int);

	char* memory;
	// MemoryObject** memO;
	bool error;

	virtual int execute();
	virtual char getChar();
	virtual short getShort();
	virtual int getInt();
	virtual float getFloat();

	// virtual ByteCode* getMemory(int pc);

//	virtual ByteCode getByteCode(int);

};
#endif

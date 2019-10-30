#ifndef PRINTI_H
#define PRINTI_H
#include "ByteCode.h"

class Printi : public ByteCode {
public:
	Printi();
	virtual ~Printi();
	int execute(vector<StackValues*>, stack<int>, int, int, int);
};
#endif
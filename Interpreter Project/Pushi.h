#ifndef PUSHI_H
#define PUSHI_H
#include "ByteCode.h"

class Pushi : public ByteCode {
public:
	Pushi();
	virtual ~Pushi();
	int execute(vector<StackValues*>, stack<int>, int, int);
};
#endif
#ifndef MUL_H
#define MUL_H
#include "ByteCode.h"

class Mul : public ByteCode {
public:
	Mul();
	virtual ~Mul();
	int execute(vector<StackValues*>, stack<int>, int, int);
};
#endif
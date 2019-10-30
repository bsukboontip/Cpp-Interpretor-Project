#ifndef PEEKF_H
#define PEEKF_H
#include "ByteCode.h"

class Peekf : public ByteCode {
public:
	Peekf();
	virtual ~Peekf();
	int execute(vector<StackValues*>, stack<int>, int, int, int);
};
#endif
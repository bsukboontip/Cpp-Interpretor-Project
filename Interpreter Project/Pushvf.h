#ifndef PUSHVF_H
#define PUSHVF_H
#include "ByteCode.h"

class Pushvf : public ByteCode {
public:
	Pushvf();
	virtual ~Pushvf();
	int execute(vector<StackValues*>, stack<int>, int, int, int);
};
#endif
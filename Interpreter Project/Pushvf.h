#ifndef PUSHVF_H
#define PUSHVF_H
#include "ByteCode.h"

class Pushvf : public ByteCode {
public:
	Pushvf();
	virtual ~Pushvf();
	int execute(vector<StackValues*>, vector<int>, int, int, int);
};
#endif
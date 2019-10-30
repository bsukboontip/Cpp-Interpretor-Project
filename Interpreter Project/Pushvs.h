#ifndef PUSHVS_H
#define PUSHVS_H
#include "ByteCode.h"

class Pushvs : public ByteCode {
public:
	Pushvs();
	virtual ~Pushvs();
	int execute(vector<StackValues*>, stack<int>, int, int, int);
};
#endif
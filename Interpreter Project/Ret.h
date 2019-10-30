#ifndef RET_H
#define RET_H
#include "ByteCode.h"

class Ret : public ByteCode {
public:
	Ret();
	virtual ~Ret();
	int execute(vector<StackValues*>, vector<int>, int, int, int);
};
#endif
#ifndef PUSHC_H
#define PUSHC_H
#include "ByteCode.h"

class Pushc : public ByteCode {
public:
	Pushc();
	virtual ~Pushc();
	int execute(vector<StackValues*>, vector<int>, int, int, int);
};
#endif
#ifndef PEEKC_H
#define PEEKC_H
#include "ByteCode.h"

class Peekc : public ByteCode {
public:
	Peekc();
	virtual ~Peekc();
	int execute(vector<StackValues*>, stack<int>, int, int);
};
#endif
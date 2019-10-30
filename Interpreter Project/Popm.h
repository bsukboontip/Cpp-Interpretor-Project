#ifndef POPM_H
#define POPM_H
#include "ByteCode.h"

class Popm : public ByteCode {
public:
	Popm();
	virtual ~Popm();
	int execute(vector<StackValues*>, stack<int>, int, int, int);
};
#endif
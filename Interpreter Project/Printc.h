#ifndef PRINTC_H
#define PRINTC_H
#include "ByteCode.h"

class Printc : public ByteCode {
public:
	Printc();
	virtual ~Printc();
	int execute(vector<StackValues*>, stack<int>, int, int);
};
#endif
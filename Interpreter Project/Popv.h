#ifndef POPV_H
#define POPV_H
#include "ByteCode.h"

class Popv : public ByteCode {
public:
	Popv();
	virtual ~Popv();
	int execute(vector<StackValues*>, vector<int>, int, int, int);
};
#endif
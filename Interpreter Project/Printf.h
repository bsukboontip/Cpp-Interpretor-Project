#ifndef PRINTF_H
#define PRINTF_H
#include "ByteCode.h"

class Printf : public ByteCode {
public:
	Printf();
	virtual ~Printf();
	int execute(vector<StackValues*>, vector<int>, int, int, int);
};
#endif
#ifndef JMPC_H
#define JMPC_H
#include "ByteCode.h"

class Jmpc : public ByteCode {
public:
	Jmpc();
	virtual ~Jmpc();
	int execute(vector<StackValues*>, vector<int>, int, int, int);
};
#endif
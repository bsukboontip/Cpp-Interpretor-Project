#ifndef PEEKS_H
#define PEEKs_H
#include "ByteCode.h"

class Peeks : public ByteCode {
public:
	Peeks();
	virtual ~Peeks();
	int execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc, int &flag);
};
#endif
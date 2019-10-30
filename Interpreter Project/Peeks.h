#ifndef PEEKS_H
#define PEEKs_H
#include "ByteCode.h"

class Peeks : public ByteCode {
public:
	Peeks();
	virtual ~Peeks();
	int execute(vector<StackValues*>, vector<int>, int, int, int);
};
#endif
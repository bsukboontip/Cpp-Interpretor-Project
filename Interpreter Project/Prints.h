#ifndef PRINTS_H
#define PRINTS_H
#include "ByteCode.h"

class Prints : public ByteCode {
public:
	Prints();
	virtual ~Prints();
	int execute(vector<StackValues*>, vector<int>, int, int, int);
};
#endif
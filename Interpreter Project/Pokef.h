#ifndef POKEF_H
#define POKEF_H
#include "ByteCode.h"

class Pokef : public ByteCode {
public:
	Pokef();
	virtual ~Pokef();
	int execute(vector<StackValues*>, stack<int>, int, int);
};
#endif
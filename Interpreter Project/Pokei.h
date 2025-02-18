#ifndef POKEI_H
#define POKEI_H
#include "ByteCode.h"

class Pokei : public ByteCode {
public:
	Pokei();
	virtual ~Pokei();
	int execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc, int &flag);
};
#endif
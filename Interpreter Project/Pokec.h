#ifndef POKEC_H
#define POKEC_H
#include "ByteCode.h"

class Pokec : public ByteCode {
public:
	Pokec();
	virtual ~Pokec();
	int execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc);
};
#endif
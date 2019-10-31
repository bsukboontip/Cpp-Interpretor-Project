#ifndef SWP_H
#define SWP_H
#include "ByteCode.h"

class Swp : public ByteCode {
public:
	Swp();
	virtual ~Swp();
	int execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc, int &flag);
};
#endif
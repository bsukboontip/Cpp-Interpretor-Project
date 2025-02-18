#ifndef JMP_H
#define JMP_H
#include "ByteCode.h"

class Jmp : public ByteCode {
public:
	Jmp();
	virtual ~Jmp();
	int execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc, int &flag);
};
#endif
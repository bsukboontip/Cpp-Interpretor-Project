#ifndef JMP_H
#define JMP_H
#include "ByteCode.h"

class Jmp : public ByteCode {
public:
	Jmp();
	virtual ~Jmp();
	int execute();
};
#endif
#ifndef HALT_H
#define HALT_H
#include "ByteCode.h"

class Halt : public ByteCode {
public:
	Halt();
	virtual ~Halt();
	int execute();
}
#endif
#ifndef PUSHVI_H
#define PUSHVI_H
#include "ByteCode.h"

class Pushvi : public ByteCode {
public:
	Pushvi();
	virtual ~Pushvi();
	int execute();
};
#endif
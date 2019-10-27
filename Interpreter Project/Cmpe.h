#ifndef CMPE_H
#define CMPE_H
#include "ByteCode.h"

class Cmpe : public ByteCode {
public:
	Cmpe();
	virtual ~Cmpe();
	int execute();
}
#endif
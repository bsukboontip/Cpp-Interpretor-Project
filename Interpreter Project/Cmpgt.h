#ifndef CMPGT_H
#define CMPGT_H
#include "ByteCode.h"

class Cmpgt : public ByteCode {
public:
	Cmpgt();
	virtual ~Cmpgt();
	int execute();
}
#endif
#ifndef PUSHS_H
#define PUSHS_H
#include "ByteCode.h"

class Pushs : public ByteCode {
public:
	Pushs();
	virtual ~Pushs();
	int execute();
};
#endif
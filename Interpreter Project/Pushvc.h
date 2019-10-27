#ifndef PUSHVC_H
#define PUSHVC_H
#include "ByteCode.h"

class Pushvc : public ByteCode {
public:
	Pushvc();
	virtual ~Pushvc();
	int execute();
};
#endif
#include "ByteCode.h"

ByteCode::ByteCode() {}
ByteCode::~ByteCode() {}

char ByteCode::getChar() {
	error = true;
	return 0;
}

short ByteCode::getShort() {
	error = true;
	return 0;
}

int ByteCode::getInt() {
	error = true;
	return 0;
}

float ByteCode::getFloat() {
	error = true;
	return 0;
}

int ByteCode::execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc, int &flag) {
	return pc;
}

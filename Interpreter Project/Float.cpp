#include "Float.h"

Float::Float() {
	error = false;
	type = 'f';
}

Float::Float(bool x) {
	error = x;
}

Float::~Float() {}

char Float::getChar() {
	error = true;
	return 0;
}

short Float::getShort() {
	error = true;
	return 0;
}

int Float::getInt() {
	error = true;
	return 0;
}

float Float::getFloat() {
	return f;
}

int Float::execute(vector<StackValues*>, stack<int>, int, int, int) {
	error = true;
	return 0;
}
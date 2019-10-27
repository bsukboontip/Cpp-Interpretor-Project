#include "Float.h"

Float::Float() {
	error = false;
}

Float::Float(bool x) {
	error = x;
}

Float::~Float() {}

char Float::getChar() {
	error = true;
	return NULL;
}

short Float::getShort() {
	error = true;
	return NULL;
}

int Float::getInt() {
	error = true;
	return NULL;
}

float Float::getFloat() {
	return f;
}

int Float::execute() {
	error = true;
	return NULL;
}
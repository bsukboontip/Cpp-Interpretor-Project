#include "Char.h"

Char::Char() {
	error = false;
	type = 'c';
}

Char::Char(bool x) {
	error = x;
}

Char::~Char() {}

char Char::getChar() {
	return c;
}

short Char::getShort() {
	error = true;
	return NULL;
}

int Char::getInt() {
	error = true;
	return NULL;
}

float Char::getFloat() {
	error = true;
	return NULL;
}

int Char::execute() {
	error = true;
	return NULL;
}
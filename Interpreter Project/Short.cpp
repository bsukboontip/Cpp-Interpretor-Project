#include "Short.h"

Short::Short() {
	error = false;
}

Short::Short(bool x) {
	error = x;
}

Short::~Short() {}

char Short::getChar() {
	return c;
}

short Short::getShort() {
	return s;
}

int Short::getInt() {
	return i;
}

float Short::getFloat() {
	return f;
}

int Short::execute() {
	error = true;
	return NULL;
}
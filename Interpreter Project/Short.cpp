#include "Short.h"

Short::Short() {
	error = false;
	type = 's';
}

Short::Short(bool x) {
	error = x;
}

Short::~Short() {}

char Short::getChar() {
	error = true;
	return 0;
}

short Short::getShort() {
	return s;
}

int Short::getInt() {
	error = true;
	return 0;
}

float Short::getFloat() {
	error = true;
	return 0;
}

int Short::execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc, int &flag) {
	error = true;
	return 0;
}
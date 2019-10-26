#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <stack>
#include "MemoryObject.h"
using namespace std;

int main(void) {

	int i;
	FILE *inputF = fopen("interpreter_input.smp", "rb");
	fseek(inputF, 0, SEEK_END);
	long inputSize = ftell(inputF);
	rewind(inputF);

	char* memory = (char*) malloc(sizeof(char) * inputSize);
	if (memory == NULL) {
		fputs("memory error", stderr);
		exit(1);
	}

	long result = fread(memory, 1, inputSize, inputF);
	if (result != inputSize) {
		fputs("reading error", stderr);
		exit(2);
	}

	// cout << result << endl;
	// for (i = 0; i < inputSize; i++){
	// 	cout << memory[i] << endl;
	// }

	int pc = 0;
	int sp = -1;
	int fpsp = -1;
	stack <int> rstack;
	stack <int> fpstack;

	// MemoryObject* memO[inputSize];
	// for(i = 0; i < inputSize; i++) {
	// 	memO[i] = new MemoryObject();
	// }

	MemoryObject* memO[inputSize];
	for(i = 0; i < inputSize; i++) {
		memO[i] = new ByteCode();
		if (memO[i] == NULL)
			memo[i] = newValue();
	}

	// bool continue = true;
	// while (continue) {
	// 	pc = memory.getBytecode(pc).execute(pc);
	// }

	fclose(inputF);
	free(memory);

	return 0;
}

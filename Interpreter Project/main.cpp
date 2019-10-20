#include <iostream>
#include <fstream>
#include <stdio.h>
#include<stdlib.h>
using namespace std;

int main(void) {
	

	FILE *inputF = fopen("interpreter_input.smp", "rb");
	fseek(inputF, 0, SEEK_END);
	long inputSize = ftell(inputF);
	rewind(inputF);

	char* buffer = (char*) malloc(sizeof(char) * inputSize);
	if (buffer == NULL) {
		fputs("memory error", stderr);
		exit(1);
	}

	long result = fread(buffer, 1, inputSize, inputF);
	if (result != inputSize) {
		fputs("reading error", stderr);
		exit(2);
	}

	cout << result << endl;
	for (int i = 0; i < inputSize; i++){
		cout << buffer[i] << endl;
	}

	fclose(inputF);
	free(buffer);

	return 0;
}

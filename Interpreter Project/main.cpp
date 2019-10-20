#include <iostream>
#include <fstream>
using namespace std;

int main(void) {

	char * memblock;

	streampos size;
	ifstream fpin("interpreter_input.smp", ios::in | ios::binary);
//	fpin.open("interpreter_intput.smp", ios::in | ios::binary);


	if (fpin.is_open()) {
		size = fpin.tellg();
		cout << fpin.tellg <<endl;
		memblock = new char [size];
		fpin.seekg(0, ios::beg);
		fpin.read(memblock, size);
		fpin.close();
		cout << "the entire file content is in the memory" << endl;



		delete[] memblock;
	}
	else cout << "Unable to open file";

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	cout << "John" << endl; // prints !!!Hello World!!!

	return 0;
}

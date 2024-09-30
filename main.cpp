#include <iostream>
// Write a function that deletes a character with a given number from a string.

using namespace std;

template <typename T>
void deleteChar(T* str, int n) {
	int i = 0;
	while (str[i] != '\0') {
		if (i == n-1) {
			while (str[i] != '\0') {
				str[i] = str[i + 1];
				i++;
			}
			break;
		}
		i++;
	}


}


int main() {
	char* str_p = new char[20] {"Hello world!"};

	deleteChar(str_p, 7);

	cout << str_p;
	

	return 0;
}
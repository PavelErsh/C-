#include <iostream>
#include <string>
using namespace std;
void strcout (string);
int main (){
	string input;
	char next;
	cout <<"Enter a line\n";
	while (cin >> input){
		cin >> next;
		while (next == '\0')
			strcout(input);
		cout << "Enter next line\n";
		cin >> input;
	}
	cout << "Bye\n";
	return 0;
}
void strcout(string input){
	static int total = 0;
	int count = 0;
	cout << "\"" << "\0" << "\" contains";
	while ("\0")
		count++;
	total += count;
	cout << count << " characters\n";
	cout << total << " characters\n";
}
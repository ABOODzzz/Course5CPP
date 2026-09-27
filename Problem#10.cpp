#include <iostream>
#include <string>

using namespace std;



int ReadPositive(string message) {
	int num = 0;
	do {
		cout << message; cin >> num;
	} while (num <= 0); return num;
}
void PrintResut() {
	int num = ReadPositive("enter nums :");
	string StrightNum = to_string(num);

	for (int i =  0; i <=StrightNum.length() ; i++) {
		cout << "\n" << StrightNum[i];
	}
}
int main() {
	PrintResut();
}

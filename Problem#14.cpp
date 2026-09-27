#include<iostream>

using namespace std;

int ReadPosNum(string message) {
	int num = 0;
	do {
		cout << "\n enter Num: "; cin >> num; cout << endl;
	} while (num <= 0);
	return num;
}

void PrintResult() {
	int num = ReadPosNum("\n enter num :");
	for (int i = num;i>0;i--) {
		char index = 64 + i;
		for (int j = i; j>0; j--) {
			cout << index;
		}cout << endl;
	}
}


int main() {
	
	PrintResult();


}

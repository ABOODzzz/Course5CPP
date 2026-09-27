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
	for (char i='A'; i <='Z';i++) {
		for (char j = 'A'; j <= 'Z'; j++) {
			for (char k = 'A'; k <= 'Z'; k++) {
				cout << i << " " << j << " " << k << endl;
			}
		}
		
	}cout << endl;
	
}


int main() {
	
	PrintResult();


}

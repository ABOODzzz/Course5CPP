#include<iostream>

using namespace std;

int ReadPosNum(string message) {
	int num = 0;
	do {
		cout << "\n enter Num: "; cin >> num; cout << endl;
	} while (num <= 0);
	return num;
}
bool IsPalindromeNum(int reverseNum,int num) {
	return reverseNum == num;
}
int ReverseNum(int num) {
	int reminder = 0, num2 = 0;
	while (num > 0) {
		reminder = num % 10;
		num2 = num2 * 10 + reminder;
		num = num / 10;
	}
	return num2;
}

void PrintResult() {
	int num = ReadPosNum("enter num to check if it's palindrome num: ");
	int reverseNum = ReverseNum(num);
	if (IsPalindromeNum(reverseNum,num))cout << "the num is palindrome " << endl;
	else cout << "the num isn't palindrome " << endl;

	
}




int main() {
	PrintResult(); 


}

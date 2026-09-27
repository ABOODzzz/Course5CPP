#include <iostream>
#include <string>
using namespace std;
int ReadPosNum(string message) {
	int num =0;
	do {
		cout << message; cin >> num;
	} while (num <= 0);
	return num;
}

void PrintResult() {
	int num = ReadPosNum("enter num: ");
	int target = ReadPosNum("\nenter the number that u want to calculate how many times  appers: ");
	int reminder = 0, num2 = num,counter=0;
	
	while (num > 0) {
		reminder = num % 10;
		if (reminder == target)counter++;
		num = num / 10;

	}
	cout << "the number " << target << " has appered for :" << counter;


}

int main() {
	PrintResult	();
}

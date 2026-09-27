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
int CountDigitFrequency(short DigitToCheck,int Number) {
	int FreeqCount = 0, Reminder = 0;

	while (Number>0) {
		Reminder = Number % 10;
		Number = Number / 10;
		if (DigitToCheck == Reminder)FreeqCount++;
	}
	return FreeqCount;
}
void PrintResult(int target,int counter) {
	
	cout << "digit " << target << " frequency is " << counter;
}
void TotalCountDigitFrequency(int array[]) {
	int Num = ReadPosNum("enter num: ");
	for (int i = 0;i<sizeof(array);i++) {
		int counter = CountDigitFrequency(array[i],Num);
		if (counter > 0) {
			PrintResult(array[i], counter); cout << endl;
		}
	}
}

int main() {
	int array[] = {0,1,2,3,4,5,6,7,8,9};

	TotalCountDigitFrequency(array);


}

#include<iostream>
#include<cstdlib>

using namespace std;
enum enPrimeNotPrime{Prime=1,NotPrime=2};

enPrimeNotPrime CheckPrime(int Num) {
	int M = round(Num / 2);
	for (int Counter = 2; Counter <= M;Counter++) {
		if (Num % Counter == 0)return enPrimeNotPrime::NotPrime;
	}
	return enPrimeNotPrime::Prime;
}
int ReadPosNum(string message) {
	int num=0;
	do {
		cout << message; cin >> num; cout << endl;
	} while (num <= 0);
	return num;
}

int RandomNum(int from,int to) {
	int random = rand() % (to - from - 1) + from;
	return random;
}
void ShiftingArray(int array[],int length) {
	int rand2 = RandomNum(1, length), rand1 = RandomNum(1,length);
	for (int i = 0;i<length;i++) {
		if (i < length - 1) {
			int temp = 0;
			temp = array[rand1];
			array[rand1] = array[ rand2];
			array[rand2] = temp;
		}

	}
}

void FillArray(int arr[100],int &arrLength) {
	cout << "\nEnter number of elements :\n";
	cin >> arrLength;
	for (int i = 0; i < arrLength; i++) {
		arr[i] = RandomNum(1,10);
	}
}


void PrintArray(int array[], int length) {
	for (int i = 0;i<length;i++) {
		cout << " " << array[i];
	}
}

int main() {
	srand((unsigned)time(NULL));
	int array1[100]={0},arrayLength=0;
	FillArray(array1, arrayLength);
	cout << "\nbefore shifting :\n";
	PrintArray(array1, arrayLength);
	ShiftingArray(array1,arrayLength);
	cout << "\nafter shifting :\n";
	PrintArray(array1, arrayLength);


}

#include<iostream>
#include<cstdlib>

using namespace std;


int ReadPosNum(string message) {
	int num=0;

	do {
		cout << message; cin >> num; cout << endl;
	} while (num <= 0); return num;
}
int RandomNum(int from,int to) {
	int random = rand() % (to - from + 1) + from;
	return random;
}


void ReadArray(int array[],int length) {
	for (int i = 0;i<length;i++) {
		array[i]= RandomNum(10,50);
	}
	
 }



int Freequency(int array[],int target,int length) {
	int counter = 0;
	for (int i = 0;i<length;i++) {
		if (target == array[i])counter++;
	}
	return counter;
}
void PrintArray(int array[],int length) {
	cout << "\nOriginal array is :[";
		for (int i = 0; i < length; i++) {
			cout << " " << array[i];
		}cout << "]" << endl;
}
int MaxNumInArray(int array[],int Arraylength) {
	int max = 0;

	for (int i = 0; i < Arraylength; i++) {
		if (array[i] > max)max = array[i];
	}
	return max;

}
int MinNumInArray(int array[], int Arraylength) {
	int min = array[0];

	for (int i = 0; i < Arraylength; i++) {
		if (array[i] < min)min = array[i];
	}
	return min;

}
int SumOfArrayRandom(int array[],int length) {
	int sum = 0;
	for (int i = 0; i < length; i++) {
		sum += array[i];
	}return sum;
}
float AvgOfArrayRandom(int array[], int length) {
	int sum = SumOfArrayRandom(array,length);
	return (float)sum / length;
}
void CopyArray(int array[],int length,int array2[]) {
	
	for (int i = 0;i<length;i++) {
		array2[i] = array[i];
	}
	
}

bool IsPrimeNum(int num) {

		if (num <= 1) return false;

		if (num == 2) return true;

		if (num % 2 == 0) return false;

		for (int i = 3; i * i <= num; i += 2) {
			if (num % i == 0) {
				return false; 
			}
		}
		return true;
}
void PrintPrime(int array[],int length ) {
	cout << "the prime nums are :[";
	for (int i = 0; i <= length; i++) {
		if (IsPrimeNum(array[i]))cout << " " << array[i];
	}
cout << " ]";
}




int main() {
	srand((unsigned)time(NULL));
	int array[10000] = {}, array2[10000] = {};
	int numberOfElments = ReadPosNum("\nhow many items u wanna enter : ");
	ReadArray(array,numberOfElments);
	cout << "\narray 1 is :\n";
	PrintArray(array,numberOfElments);
	
	cout << "\nprime nums are  : "; PrintPrime(array,numberOfElments);
	
	
	
}

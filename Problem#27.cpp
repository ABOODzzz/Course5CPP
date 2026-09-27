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
	cout << "\n Original array is :[";
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


int main() {
	srand((unsigned)time(NULL));
	int array[10000] = {};
	int numberOfElments = ReadPosNum("\nhow many items u wanna enter : ");
	ReadArray(array,numberOfElments);
	PrintArray(array,numberOfElments);
	cout << "\nthe Avg of the array is : " << AvgOfArrayRandom(array, numberOfElments) << endl;
}

//in this problem ive created a matrix filled by ordered nums its eassy 
#include<iostream>
#include <iomanip>
const int row = 3,colm=3;
using namespace std;


void FillArrayWithOrderedNums(int array[3][3]) {
	int counter = 1;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colm; j++) {
			array[i][j] = counter;
			counter++;
		}
	}
}
void PrintMatrix(int array[3][3]) {
	cout << "\n\nthe following is a 3*3 ordered matrix:" << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colm; j++) {
			cout << setw(4) << array[i][j] << "     ";
		}cout << endl;
	}
}





int main() {
	srand((unsigned)time(NULL));
	
	int array[3][3];
	FillArrayWithOrderedNums(array);
	PrintMatrix(array);
	system("pause>0");
	

}

//in this code ive createrd a function to make a transpose matrix then print it and ive edited the print function to print message deending on the situation 
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
void PrintMatrix(int array[3][3],string message) {
	cout <<message << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colm; j++) {
			cout << setw(4) << array[i][j] << "     ";
		}cout << endl;
	}
}

void TransposeMatrix(int array[3][3],int transposedArray[row][colm]) {
	
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colm; j++) {
			transposedArray[i][j] = array[j][i];
			
		}
	}
}





int main() {
	srand((unsigned)time(NULL));
	
	int array[row][colm],transposedArray[row][colm];
	FillArrayWithOrderedNums(array);
	PrintMatrix(array,"\n\nthe following is 3X3 matrix : \n");
	TransposeMatrix(array,transposedArray);
	PrintMatrix(transposedArray,"\n\nthe following is 3X3 transposed matrix : \n");
	
	
system("pause>0");
}

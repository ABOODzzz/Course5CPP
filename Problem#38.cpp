#include<iostream>
#include<cstdlib>

using namespace std;

enum enOddOrEven{even=1,odd=2};

int RandomNum(int from, int to) {
    int random = rand() % (to - from + 1) + from;
    return random;
}
 
int ReadPosNum(string message) {
    int num = 0;
    do {
        cout << message; cin >> num; cout << endl;
    } while (num <= 0); cout << "\n\n"; return num;
}

void FillArray(int array1[], int& lengthOfArray) {
    lengthOfArray = ReadPosNum("enter the length of array : ");
    for (int i = 0; i < lengthOfArray; i++) {
        array1[i] = RandomNum(1, 100);
    }
}

enOddOrEven IsOddNum(int num) {
    if (num % 2 == 0)return enOddOrEven::even;
    else return enOddOrEven::odd;
}

void CopyOddNums(int array1[],int array2[], int lengthOfArray1, int &lengthOfArray2) {
    for (int i = 0;i<lengthOfArray1;i++) {
        if (IsOddNum(array1[i]) == enOddOrEven::odd) { array2[lengthOfArray2] = array1[i]; lengthOfArray2++; }
    }
}




void PrintArray(int array1[], int lengthOfArray) {
    cout << "\n [";
    for (int i = 0; i < lengthOfArray; i++) {
        cout << " " << array1[i];
    }cout << " ]" << endl;
}

int main() {
    srand((unsigned)time(NULL));
    int array1[1000] = { 0 }, array2[1000]={0}, lengthOfArray1 = 0, lengthOfArray2 = 0;
    FillArray(array1, lengthOfArray1);
    cout << "array 1 elements :";
    PrintArray(array1, lengthOfArray1);
    CopyOddNums(array1,array2,lengthOfArray1,lengthOfArray2);
    cout << "the odd nums are : ";
    PrintArray(array2, lengthOfArray2);
   
}

#include<iostream>
#include<cstdlib>

using namespace std;

enum enOddOrEven{even=1,odd=2};
void FillArrayHardCode(int array[], int& length) {
    length = 5;
    array[0] = 1;
    array[1] = 3;
    array[2] = 2;
    array[3] = 3;
    array[4] = 1;
}
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

bool IsDistinctNum(int num,int array2[],int lengthArray2) {
    for (int i = 0;i<=lengthArray2;i++) {
        if (num == array2[i])return false;
    }
    return true;
}



void CopyArray(int array1[],int array2[], int lengthOfArray1, int &lengthOfArray2) {
    for (int i = 0;i<lengthOfArray1;i++) {
        array2[lengthOfArray2] = array1[i]; lengthOfArray2++; 
    }
}

bool IsArrayPalindrome(int array1[],int length) {
    int index = length;
    for (int i = 0;i<length;i++) {
        if (array1[index-1] != array1[i])return false; index--;
    }
    return true;
}
void PrintPalinderome(int array1[],int length) {
    if (IsArrayPalindrome(array1, length))cout << "\n\n yes,its palndrome\n\n";
    else cout << "\n\nNo,itsn't palandrome\n\n";
 }



void PrintArray(int array1[], int &lengthOfArray) {
    cout << "\n [";
    for (int i = 0; i < lengthOfArray; i++) {
        cout << " " << array1[i];
        
    }cout << " ]" << endl;
}

int main() {
    srand((unsigned)time(NULL));
    int array1[1000] = {0}, array2[100]={0}, lengthOfArray1 = 0, lengthOfArray2 = 0;
    FillArrayHardCode(array1, lengthOfArray1);
    cout << "\n orginal array is : "; PrintArray(array1, lengthOfArray1); cout << endl;
    PrintPalinderome(array1,lengthOfArray1);
   
}

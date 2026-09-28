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

short HowManyOddNums(int array1[],int length) {
    int count = 0;
    for (int i = 0;i<length;i++) {
        if (IsOddNum(array1[i]) == enOddOrEven::odd) count++;
    }
    return count;
}

void PrintArray(int array1[], int &lengthOfArray) {
    cout << "\n [";
    for (int i = 0; i < lengthOfArray; i++) {
        cout << " " << array1[i];
        
    }cout << " ]" << endl;
}

int main() {
    srand((unsigned)time(NULL));
    int array1[1000] = {0} ,lengthOfArray1 = 0;
    FillArray(array1,lengthOfArray1);
    PrintArray(array1, lengthOfArray1);
    cout << "\nodd nums count are :" << HowManyOddNums(array1, lengthOfArray1) << endl;;
   
}

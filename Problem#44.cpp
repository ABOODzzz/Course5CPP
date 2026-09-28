#include<iostream>
#include<cstdlib>

using namespace std;

enum enPositiveNegative{Positive=1,Negative=2};

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
        array1[i] = RandomNum(-100, 100);
    }
}

enPositiveNegative IsOddNum(int num) {
    if (num  >0)return enPositiveNegative::Positive;
    else return enPositiveNegative::Negative;
}

short HowManyPositiveNums(int array1[],int length) {
    int count = 0;
    for (int i = 0;i<length;i++) {
        if (IsOddNum(array1[i]) == enPositiveNegative::Positive) count++;
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
    cout << "\nPositive  nums count are :" << HowManyPositiveNums(array1, lengthOfArray1) << endl;;
   
}

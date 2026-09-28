#include<iostream>
#include<cstdlib>

using namespace std;





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

bool IncreaseArraySize(string message) {
    bool result;
    cout << message;
    cin >> result;
    return result;
}




void DynamicArray(int array1[],int &length) {
    do {
        array1[length]=ReadPosNum("enter num :");
        length++;
    } while (IncreaseArraySize("\ndo u want to add more numbers : put [1] yes no [0]"));
}





void PrintArray(int array1[], int lengthOfArray) {
    cout << "\norginal array :[";
    for (int i = 0; i < lengthOfArray; i++) {
        cout << " " << array1[i];
    }cout << " ]" << endl;
}

int main() {
    srand((unsigned)time(NULL));
    int array1[1000] = { 0 }, lengthOfArray = 0, target = 0;
    DynamicArray(array1, lengthOfArray);
    cout << "array length is : " << lengthOfArray<<endl;
    PrintArray(array1, lengthOfArray);

}

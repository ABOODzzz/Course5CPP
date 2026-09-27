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

bool IsTheSame(int num, int target) {
    return num == target;
}

void PrintSearchResult(int array1[], int lengthOfArray, int& target) {
    target = ReadPosNum("\nenter num that u want to search :");
    int counter = 0;
    for (int i = 0; i < lengthOfArray; i++) {
        if (IsTheSame(array1[i], target)) {
            cout << "\nthe number founded in position " << i << "\nthe number founded in order " << i + 1 << endl;
            counter++;
        }
    }if (counter == 0)cout << "\nthe nums has not founded \n";
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
    FillArray(array1, lengthOfArray);
    PrintArray(array1, lengthOfArray);
    PrintSearchResult(array1, lengthOfArray, target);



}

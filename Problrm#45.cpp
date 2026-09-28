#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;

enum enPositiveNegative{Positive=1,Negative=2};

float ReadNum(string message ) {
    float num = 0;
    cout << message; cin >> num; cout << endl;
    return num;
}


enPositiveNegative IsPositiveNum(int num) {
    if (num < 0)return enPositiveNegative::Negative;
    else return enPositiveNegative::Positive;
}

float ReverseSignal(float num) {
    if (enPositiveNegative::Positive == IsPositiveNum(num))return num;
    else return num * (-1);

}


int main() {
    float num = ReadNum("enter num :");
    cout << "\nMyABS is : " << ReverseSignal(num);
    cout << "\nC++ abs : " << abs(num) << endl;
}

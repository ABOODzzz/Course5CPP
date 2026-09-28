#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;


float ReadNum(string message) {
    float num = 0;
    cout << message; cin >> num; cout << endl;

    return num;
}
int MyRound(float num) {
    if (num > 0) return int(num);
    else return int(num - 1);
    }
   






int main() {
    float num = ReadNum("enter num :");
    cout << "MyRound " << MyRound(num)<<endl;
    cout << "c++ round is : " << floor(num);
   

}

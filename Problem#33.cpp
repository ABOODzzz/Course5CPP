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
    } while (num <= 0); return num;
}
enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpicialChar = 3, Digit = 4 };

char GetRandomCharacter(enCharType CharType)
{

    switch (CharType)
    {
    case enCharType::SmallLetter:
    {

        return char(RandomNum(97, 122));
        break;
    }
    case enCharType::CapitalLetter:
    {

        return char(RandomNum(65, 90));
        break;
    }
    case enCharType::SpicialChar:
    {

        return char(RandomNum(33, 47));
        break;
    }
    case enCharType::Digit:
    {

        return char(RandomNum(48, 57));
        break;
    }
    }


}


string GenerateWord(short length, enCharType charType) {
    string word = "";
    for (int i = 1; i <= length; i++) {
        word += GetRandomCharacter(enCharType::CapitalLetter);
    }
    return word;
}



string GetKey(int length) {
    string Key = "";
    Key = Key + GenerateWord(length, enCharType::CapitalLetter) + "-";
    Key = Key + GenerateWord(length, enCharType::CapitalLetter) + "-";
    Key = Key + GenerateWord(length, enCharType::CapitalLetter) + "-";
    Key = Key + GenerateWord(length, enCharType::CapitalLetter);
    return Key;
}
void GetKeysInArray(string array[],int length ,int numOfKeys) {
    
    for (int i = 0;i<numOfKeys;i++) {
       array[i]= GetKey(length);
    }

}
void PrintKeys(int length, int NumberOfKeys) {
    for (int i = 1; i <= NumberOfKeys; i++) {
        cout << "the key number[" << i << "] :" << GetKey(length) << endl;
    }
}

void PrintStringArray(string arrayOfKeys[], int length) {
    for (int i = 0;i<length;i++) {
        cout << "\nArray[" << i<<"] :" << arrayOfKeys[i];
    }
    cout << endl;
}


int main() {
    srand((unsigned)time(NULL));
    string arrayOfKeys[100] = {""};
    int length = ReadPosNum("how many char in one word like pres 3 (AAA_AAA) pres 4 (AAAA_AAAA) etc :");
    int numOfKeys = ReadPosNum("enter how many keys u want : ");
       
    GetKeysInArray(arrayOfKeys, length, numOfKeys);
    PrintStringArray(arrayOfKeys,numOfKeys);

}

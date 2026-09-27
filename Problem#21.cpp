//code 1:
#include<iostream>
#include<cstdlib>

using namespace std;

int RandomNum(int from, int to) {
    int random = rand() % (to - from + 1) + from;
    return random;
}
int ReadHowManyKeys() {
    int num=0;
    do {
        cout << "how many keys u want : "; cin >> num; cout << endl;
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
string GetKey() {
    string Key = "";
    for (int i = 0; i < 4; i++) {
        Key += GetRandomCharacter(enCharType::CapitalLetter);
        Key += GetRandomCharacter(enCharType::CapitalLetter);
        Key += GetRandomCharacter(enCharType::CapitalLetter);
        Key += GetRandomCharacter(enCharType::CapitalLetter);
        if(i<3)Key += "-";
    }
    return Key;
}

void PrintKeys(int NumberOfKeys) {
    for (int i = 1;i<=NumberOfKeys;i++) {
        cout << "the key number[" << i << "] :" << GetKey()<<endl;
    }
}



int main() {
    srand((unsigned)time(NULL));
    
    PrintKeys(ReadHowManyKeys());

}
//code 2 after video:
#include<iostream>
#include<cstdlib>

using namespace std;

int RandomNum(int from, int to) {
    int random = rand() % (to - from + 1) + from;
    return random;
}
int ReadPosNum(string message) {
    int num=0;
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



string GenerateWord(short length,enCharType charType) {
    string word = "";
    for (int i = 1; i <= length; i++) {
        word+=GetRandomCharacter(enCharType::CapitalLetter);
    }
        return word;
    }



string GetKey(short length) {
    string Key = "";
    Key = Key + GenerateWord(length, enCharType::CapitalLetter) +"-";
    Key = Key + GenerateWord(length, enCharType::CapitalLetter) + "-";
    Key = Key + GenerateWord(length, enCharType::CapitalLetter) + "-";
    Key = Key + GenerateWord(length, enCharType::CapitalLetter);
    return Key;
}

void PrintKeys(int length,int NumberOfKeys) {
    for (int i = 1;i<=NumberOfKeys;i++) {
        cout << "the key number[" << i << "] :" << GetKey(length)<<endl;
    }
}



int main() {
    srand((unsigned)time(NULL));
    
    PrintKeys(ReadPosNum("how many chars u want in each like :(AAA-AAA) enter 3_(ASCS-ASDA)enter 4 etc: "), ReadPosNum("enter how many keys u want: "));

}

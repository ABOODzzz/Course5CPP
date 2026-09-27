#include<iostream>

using namespace std;


string ReadPosNum(string message) {
	string password = "";
	
		cout << message; cin >> password; cout << endl;
	
	return password;
}
bool checkRealPassword(string password,string word) {
	return password == word;
}
void PrintResult(string password) {
	string word = ""; int count = 0;
	for (char i='A'; i <= 'Z'; i++) {
		
		for (char j = 'A'; j <= 'Z'; j++) {
			for (char k = 'A'; k <= 'Z'; k++) {
				count++;word = "";
				word = word + i;
				word += j;
				word += k;
				cout << "trial " << count << " :" << word << endl; 
				if (checkRealPassword(password, word)) {
					cout << "\npassword is " << password << endl;
					cout << "founded after " << count;
					break;
				}if (checkRealPassword(password, word))return;
				
				
			}if (checkRealPassword(password, word))return;
		}if (checkRealPassword(password, word))return;
		
	}if (checkRealPassword(password, word))return;
	
}


int main() {
	
	PrintResult(ReadPosNum("\n enter password: "));


}

#include<iostream>

using namespace std;


string ReadString(string message) {
	string password = "";
	
		cout << message; cin >> password; cout << endl;
	
	return password;
}

string EncryptionName(string Name) {
	string encryptionName = "";
	for (int i = 1; i < Name.length(); i++) {
		Name[i] += 5;
	}
	return Name;
}
string decryptionName(string Name) {
	string decryptionName = "";
	for (int i = 1; i < Name.length(); i++) {
		Name[i] -= 5;
	}
	return Name;

}
void PrintResult() {
	string name = ReadString("enter name: ");
	cout << "the name before encryption is : " << name << endl;
	cout << "the name after encryption is : " << EncryptionName(name) << endl;
	cout << "the name after decryption is : " << decryptionName(EncryptionName(name)) << endl;
}

int main() {
	
	PrintResult();


}

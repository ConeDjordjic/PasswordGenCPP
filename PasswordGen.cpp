#include <iostream>
#include <vector>

using namespace std;

int main(){

	vector<string> encrypted;
	vector<string> decrypted;
	vector<char> cone = {'C','O','N','E'};

	for (char c : cone){

		if (c == 'C'){
			encrypted.push_back("A123");
		}
		if (c == 'O'){
	                encrypted.push_back("B123");
		}	
		if (c == 'N'){
                        encrypted.push_back("C123");
                }
                if (c == 'E'){
	 		encrypted.push_back("D123");					                 
		}
	}

	cout << "Encrypted:\n";
	for (string s : encrypted){
		cout << s << "\n";
	}
	cout << "\n";
	cout << "Decrypted:\n";

	for (char c : cone){
		cout << c;

	}
	
	cout << "\n";
}

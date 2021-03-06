#include <iostream>
#include <random>

using namespace std;

string generateRandomId(size_t length)
{
    static const string allowed_chars {"123456789BCDFGHJKLMNPQRSTVWXZbcdfghjklmnpqrstvwxz~`!@#$%^&*()_-+=[]{};:,<.>/?"};
    static thread_local default_random_engine randomEngine(random_device{}());
    static thread_local uniform_int_distribution<int> randomDistribution(0, allowed_chars.size() - 1);

    string id(length ? length : 32, '\0');

    for (string::value_type& c : id) {
        c = allowed_chars[randomDistribution(randomEngine)];
    }
    return id;
}


int main(){
	size_t len,times;
	cout << "Welcome to Random Password Generator by Cone!\n";
	
	cout << "Enter the length of the password(s): ";
	cin >> len;

	cout << "How many passwords? ";
	cin >> times;

	for (int i = 0; i < times; i++){
		cout << generateRandomId(len) << "\n";	
	}
}

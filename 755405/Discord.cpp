#include <iostream>
using namespace std;
int main() {
    string users[3], messages[2];
	users[0] = "goodjack";
	users[1] = "goodjack1234";
	users[2] = "goodjack";
	messages[0] = "Welcome";
	messages[1] = "Wrong";
	string account, password;
	cout << "帳號 : ";
	cin >> account;
	cout << "密碼 : ";
	cin >> password;
	if (users[0] == account) {
		if (password == users[1]) {
			cout << messages[0] << "," << users[0];
		}
		else {
			cout << messages[1];
		}
	}
	else {
		cout << messages[1];
	}
}

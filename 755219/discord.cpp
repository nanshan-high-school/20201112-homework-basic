#include <iostream>
#include <ctime>
using namespace std;

int main() {
    string user[3][3] = {{"happy", "123", "Happy"}, {"sad", "456", "Sad"}, {"angry", "789", "Angry"}};
    string welcome[3] = {"Hello! ", "Hi! ", "Hey! "};
    srand(time(0));
    int num = rand() % 3;
    string account, password, name;
    cout << "請輸入帳號：" << endl;
    cin >> account;
    cout << "請輸入密碼：" << endl;
    cin >> password;
    for (int i = 0; i <= 2; i++) {
        if (user[i][0] == account) {
            if (user[i][1] == password) {
                cout << welcome[num] << user[i][2] << endl;
                return 0;
            }
        }
    }
    cout << "帳號或密碼錯誤！" << endl;
    return 0;
}

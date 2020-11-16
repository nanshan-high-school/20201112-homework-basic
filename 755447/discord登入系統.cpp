#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    string account_array[2][2] = {
        {"justin@gmail.com","12345"},
        {"yap@gmail.com","67890"},
    };

    int x = -1;
    string hello;
    string account;
    string password;
    string name;

    cout << "帳號:";
    cin >> account;
    cout << "密碼:";
    cin >> password;
    cout << "名字:";
    cin >> name;

    srand(time(0));
    int a = rand() % 3;
    if (a == 1) {
        hello = name + "歡迎您";
    } else if (a == 2) {
        hello = name + "剛剛滑進了伺服器";
    } else {
        hello = name + "登入成功了!";
    }

    for (int i = 0; i < 5; i++) {
        if (account_array[i][0] == account) {
            if (account_array[i][1] == password) {
                x = 1;
            } else {
                x = 0;
            }
        }
    }

    if (x == 1) {
        cout << hello;
    } else {
        cout << "是不是打錯了呢?\n";
        return main();
    }
}

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    string user[5][2] = {
        {"goodjack","Goodjack-Is-Not-Handsome"},
        {"Andy","87"},
        {"go","wtf"},
        {"zero","0"},
        {"帳號","密碼"},
    };

    int TrueOrFalse = 1, hello;
    string account, password;

    cout << "帳號: ";
    cin >> account;
    cout << "\n" << "密碼: ";
    cin >> password;
    
    for (int i = 0; i < 5; i++) {
        //cout << user[i][0] << user[i][1] << "\n";
        if (account == user[i][0] && password == user [i][1]) {
            TrueOrFalse = 0;
            break;
        } else {
            TrueOrFalse = 1;
        }
    }

    srand(time(NULL));
    hello = rand() % 4;
    if (TrueOrFalse == 0) {
        if (hello == 0) {
            cout << "嗨嗨" << account;
        }
        if (hello == 1) {
            cout << account << "進來囉";
        }
        if (hello == 2) {
            cout << account << "剛剛滑入了伺服器中";
        }
        if (hello == 3) {
            cout << account << "居然來了";
        }
    } else {
        cout << account << " 你的密碼或帳號打錯了喔!";
    }


}

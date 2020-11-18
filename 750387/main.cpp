#include <iostream>
#include <string>
using namespace std;

int main() {
    string user[3][2] = {
        {"fish-0201", "8787"},
        {"mira-123","1234"},
        {"peter-456","111"}
    };
    string AccountNumber, Password; //輸入帳號密碼
    bool bYes;

    cout << "帳號：";
    cin >> AccountNumber;
    cout << "密碼：";
    cin >> Password;

    int i = 0;
    bYes = false;
    for (i = 0; i < 3; i++) {
        if (AccountNumber == user[i][0] && Password == user[i][1]) {
            bYes = true;
            break;
        }
    }

    if (bYes) {
        cout << user[i][0] << " 歡迎光臨";
    } else {
        cout << " 帳號密碼錯誤，請重新輸入。";
    }
}

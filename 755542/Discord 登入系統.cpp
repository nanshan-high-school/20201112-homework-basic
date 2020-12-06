#include <iostream>
#include <ctime>
using namespace std;
int main() {
    int num = 0, ckeck = 0, i = 0;
    string account, password;
    string users[3][3] = {
        {"goodjack", "Goodjack-Is-Handsome!", "小克"},
        {"jack", "Jack-Is-Handsome!", "傑克"},
        {"joker", "Joker-Is-Handsome!", "喬克"}
    };
    string messages[5] = {
        "剛剛滑入了伺服器中。", "剛剛著陸下來。", "跳進了伺服器。", "已加入隊伍。", "剛剛出現了!"
    };
    
    do {
        if (account != "") {
            cout << "帳號密碼錯誤，請重新輸入。" << "\n";
        }
        cout << "帳號:";
        cin >> account;
        cout << "密碼:";
        cin >> password;
        for (i = 0; i < 3; i ++) {
            if (users[i][0] == account && users[i][1] == password) {
                ckeck++;
                break;
            }
        }
    } while (ckeck == 0);

    srand (time(0));
    num = rand() % 5;
    cout << users[i][2] << " " << messages[num];
}

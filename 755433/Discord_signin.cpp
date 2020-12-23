#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    string users[3][3] = {
        {"hankouyu_0617","mayor0606","韓市長"},
        {"caiyingwen_0831","president0520","蔡總統"},
        {"laichingte_1006","vice_president0520","賴副總統"}
    };

    string messages[4] = {
        "霸氣上線啦!",
        "終於回來了-.-",
        "主人,您總算回歸了...",
        "歡迎回到糞G"
    };

    string accout = "", password = "";
    bool x = false;
    int i;
    do {
        if (accout != "") {
            cout << "查無此帳密,請再輸入一次\n";
        }
        cout << "帳號：";
        cin >> accout;
        cout << "密碼：";
        cin >> password;
        for (i = 0; i < 3; i++) {
            if (accout == users[i][0] && password == users[i][1]) {
                x = true;
                break;
            }
        }
    } while (x == false);

    int a;
    srand(time(0));
    a = rand() % 4;

    cout << users[i][2] << messages[a];
}

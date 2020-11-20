#include <iostream>
#include <ctime>
using namespace std;
int main() {
    string user[4][3] = {
        {"fengyu1231", "941231", "大丰"},
        {"venuswang0331", "980605", "小美"},
        {"gump123465", "987654321", "阿甘"},
        {"uncleroger", "haiyaa", "嗨呀"}
    };
int i = 0;
    
int x = -1;
    string hi;
    string account;
    string password;
    string name;

    cout << "帳號:";
    cin >> account;
    cout << "密碼:";
    cin >> password;

    srand(time(0));
    int a = rand() % 3;
    if (a == 1) {
        hi = user[i][2] + "剛剛滑入了伺服器中~~~";
    } else if (a == 2) {
        hi = user[i][2] + "我們希望你帶了MSG來!";
    } else {
        hi = user[i][2] + "來打個招呼吧!";
    }

    for (int i = 0; i < 5; i++) {
        if (user[i][0] == account) {
            if (user[i][1] == password) {
                x = 1;
            } else {
                x = 0;
            }
        }
    }

    if (x == 1) {
        cout << hi;
    } else {
        cout << "李組長眉頭一皺 發現案情並不單純\n";
        return main();
    }
}

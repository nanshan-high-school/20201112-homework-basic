#include <iostream>
#include <ctime>
using namespace std;

int main() {
    string account[2][3] = {
        {"Allison2005", "123456789", "Allison"},
        {"Yuli2005", "987654321", "Yuli"}
    };

    string messages[5] {
        {" 滑進了聊天室。"},
        {" 剛剛出現了！"},
        {" 剛剛著陸下來。"},
        {" 已加入隊伍。"},
        {" 很高興見到您!"}
    };

    string user, code;
    cout << "帳號：";
    cin >> user;
    cout << "密碼：";
    cin >> code;

    int k;
    srand(time(NULL));
    k = rand() % 5;

    for (int i = 0; i < 3; i++) {
        if (user == account[i][0] && code == account[i][1]) {
            cout << account[i][2] << messages[k];
            break;
        } else {
            cout << "帳號密碼錯誤，請重新輸入。"; 
            break;
        }
    }

}

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    string user[5][3] = {
        {"dongdaemun638575", "Oshio878", "小紅"},
        {"sindang_38451", "sweet969", "阿橙"},
        {"wang_4mu1", "You2Right", "俸黃"},
        {"hanyangdae123", "Guud13579", "綠師"},
        {"ttukseom35", "Aokawa51", "嘻藍"}
    };
    string messages[6] = {
        " 剛剛滑入了伺服器中。",
        " 你再度歸~來了 -w-",
        " 嘿! 安安阿~。",
        " 歡迎你回來。",
        " 從離線中出現了!!",
        " 你要進來了~ OAO"
    };

    string now_account = "";
    string now_password = "";
    bool is_correct = false;
    int i;

    do {
        if (now_account != "") {
            cout << "\n帳號密碼錯誤，請重新輸入。\n";
        }
        cout << "帳號：";
        cin >> now_account;
        cout << "密碼：";
        cin >> now_password;
        for (i = 0; i < 5; i++) {
            if ((user[i][0] == now_account)\
             && (user[i][1] == now_password)) {
                is_correct = true;
                break;
            }
        }
    } while (is_correct == false);

    int num;
    srand(time(0));
    num = rand() % 6;

    cout << "\n" << user[i][2] << messages[num];
}

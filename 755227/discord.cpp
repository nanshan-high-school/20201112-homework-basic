#include <iostream>
#include <ctime>
using namespace std;

int main() {
    string message[5] = {
                            {"剛剛滑入了伺服器中"}, {"歡迎加入"}, {"您好"}, {"掉進此伺服器了"}, {"進入了伺服器"}
                        };

    srand(time(NULL));
    int k = rand() % 5;

    string set_up[3][3] = {
                            {"jason", "j0988", "jason"}, {"a755", "132", "劉宜豪"}, {"jifong", "jason", "jifong"}
                        };

    string user_ac, user_pa;
    int true_false;

    do {
        true_false = 0;

        cout << "帳號: ";
        cin >> user_ac;
        cout << "密碼: ";
        cin >> user_pa;
        cout << "\n";

        if (user_ac == set_up[0][0]) {
            if (user_pa == set_up[0][1]) {
                cout << set_up[0][2] << message[k];
            } else {
                cout << "帳號密碼錯誤，請重新輸入\n";
                true_false++;
            }
        } else if (user_ac == set_up[1][0]) {
            if (user_pa == set_up[1][1]) {
                cout << set_up[1][2] << message[k];
            } else {
                cout << "帳號密碼錯誤，請重新輸入\n";
                true_false++;
            }
        } else if (user_ac == set_up[2][0]) {
            if (user_pa == set_up[2][1]) {
                cout << set_up[2][2] << message[k];
            } else {
                cout << "帳號密碼錯誤，請重新輸入\n";
                true_false++;
            }
        } else {
            cout << "帳號密碼錯誤，請重新輸入\n";
            true_false++;
        }
    } while (true_false != 0);
}

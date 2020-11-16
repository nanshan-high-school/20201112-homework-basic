#include <iostream>
using namespace std;
int main() {
    string set_up[3][2] = {
                            {"a_ac", "a_pa"},
                            {"b_ac", "b_pa"},
                            {"c_ac", "c_pa"}
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
                cout << user_ac << "剛剛滑入了伺服器中";
            } else {
                cout << "帳號密碼錯誤，請重新輸入\n";
                true_false++;
            }
        } else if (user_ac == set_up[1][0]) {
            if (user_pa == set_up[1][1]) {
                cout << user_ac << "歡迎加入";
            } else {
                cout << "帳號密碼錯誤，請重新輸入\n";
                true_false++;
            }
        } else if (user_ac == set_up[2][0]) {
            if (user_pa == set_up[2][1]) {
                cout << "您好，" << user_ac;
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

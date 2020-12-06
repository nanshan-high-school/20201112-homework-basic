#include <iostream>
#include <ctime>
using namespace std;
int main() {
    string account[2][2] = {
        {"goodjack", "Goodjack-Is-Handsome!"},
        {"Jimmy", "Beatboxer"},
    };

    int num = -1;
    string ina, inp, name;
    cin >> ina >> inp >> name;
    
    for (int i = 0; i < 2; i++){
        if (ina == account[i][0] && inp == account[i][1]) {
            num = 0;
            break;
        } else {
            num = 1;
        }
    }

    srand(time(0));
    int greeting = rand() % 3 + 1;
    if (num == 0) {
        if (greeting == 1) {
            cout << name << "剛剛滑入了伺服器中";
        }
        if (greeting == 2) {
            cout << name <<  "剛剛出現了";
        }
        if (greeting == 3) {
            cout << name <<  "很高興你來了";
        }
    } else {
        cout << "帳號密碼錯誤，請重新輸入\n";
        return main();
    }
}

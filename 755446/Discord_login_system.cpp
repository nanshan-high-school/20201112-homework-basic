#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string account_array[5][2] = {{"wayne@gmail.com","123456"},
                                  {"jack@gmail.com","654321"},
                                  {"good@yahoo.com.tw","987654"},
                                  {"happy@yahoo.com.tw","456789"},
                                  {"sad@github.com","123789"}}; 
    
    int num;
    bool status = false;
    string account;
    string password;
    string name;

    cout << "歡迎來到repl.it" << "\n";

    cout << "帳號: "; 
    cin >> account;
    cout << "密碼: ";
    cin >> password;
    cout << "名子: ";
    cin >> name;

    srand(time(0));
    num = rand() % 10;

    string welcome[10] = {name +" 剛剛出現了！",
                          "歡迎，" + name + "。我們希望您帶個披薩來！",
                          name + " 剛剛滑入了伺服器中。",
                          "野生的 " + name + " 出現。",
                          name + " 跳進了伺服器。",
                          name + " 剛剛滑入了伺服器中。",
                          name + " 剛剛著陸。",
                          "歡迎 " + name + "。打聲招呼吧。",
                          "很高興見到" + name,
                          "耶，" + name + "。成功了!"};


    for (int i = 0; i < 5; i++) {
        if (account_array[i][0] == account) {
            if (account_array[i][1] == password) {
                status = true;
            } else {
                status = false;
            }

        }
    }
    
    if (status == true) {
        cout << welcome[num];
    } else {
        cout << "你 是駭客嗎?(帳號或密碼錯誤!)" << "\n";
        return main();
    }
}

/*
[] 剛剛出現了！
歡迎，[]。我們希望您帶個披薩來
[] 剛剛滑入了伺服器中。
[] 剛剛著陸下來
野生的 [] 出現。
歡迎 []。打聲招呼吧
很高興見到你 []
[] 在這裡。
[] 跳進了伺服器。
大家憶起歡迎 []
耶，[]。成功了!
*/



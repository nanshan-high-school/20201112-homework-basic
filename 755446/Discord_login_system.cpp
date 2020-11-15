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
    string wellcome;
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
    num = rand() %100;

    if (num > 91) {
        wellcome =  name +" 剛剛出現了！";
    } else if (num > 82) {
        wellcome = "歡迎，" + name + "。我們希望您帶個披薩來！";
    } else if (num > 73) {
        wellcome =  name +" 剛剛滑入了伺服器中。";
    } else if (num > 64) {
        wellcome =  name +" 剛剛著陸。"; 
    } else if (num > 55) {
        wellcome = "野生的 " + name + " 出現。";
    } else if (num > 46) {
        wellcome = "歡迎 " + name + "。打聲招呼吧。";
    } else if (num > 37) {
        wellcome = "很高興見到" + name;
    } else if (num > 28) {
        wellcome = name + " 在這裡。";
    } else if (num > 19) {
        wellcome = name + " 跳進了伺服器。";
    } else if (num > 10) {
        wellcome = "大家一起歡迎 " + name;
    } else {
        wellcome = "耶，" + name + "。成功了!";
    }

    for(int i = 0; i < 5; i++) {
        if (account_array[i][0] == account) {
            if (account_array[i][1] == password) {
                status =true;
            } else {
                status = false;
            }

        }
    }
    
    if (status == true) {
        cout << wellcome;
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

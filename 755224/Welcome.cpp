//Account: BrineYT
//Password: BrineFTW
//ID: 英雄Brine
#include <iostream>
#include <ctime>
using namespace std;
void welcome(string id) {
    string messenge[] = {
        " 出現了。", 
        " 跳了進來！",
        " 被召喚到此。",
        " 來打亂作息了！",
        " 過來搞破壞了！",
        "，快用你那無敵的白銀之星想想辦法阿！"};
        srand(time(NULL));
    cout << endl << id << messenge[rand() % 6];
}
int main() {
    string Account, pw, id = "英雄Brine";
    do {
        cout << "\n請輸入帳號和密碼\n" << "帳號：";
        cin >> Account;
        cout << "密碼：";
        cin >> pw;
    } while (Account != "BrineYT" || pw != "BrineFTW");
    welcome(id);
}

#include <iostream>
#include <ctime>
using namespace std;

int main() {
    string user[4][3] = { 
        {"liproll", "2017" ,"Napom"}, 
        {"inwardbass", "2019" ,"D-low"}, 
        {"throatbass", "2018" ,"Codfish"},
        {"vocalScratch", "2005" ,"Tomthum"}
    };
    
    string welcome[3] = {"3!2!1!beatbox ", "YoYo! This is  ", "You can't roll like this like "};
    srand(time(0));
    int num = rand() % 4;
    string account, password, name;
    cout << "請輸入帳號：" << endl;
    cin >> account;
    cout << "請輸入密碼：" << endl;
    cin >> password;
    
    for (int i = 0; i <= 3; i++) {
        if (user[i][0] == account) {
            if (user[i][1] == password) {
                cout << welcome[num] << user[i][2] << endl;
                return 0;
            }
        }
    }
    
    cout << "帳號或密碼錯誤！" << endl;
    return 0;
}

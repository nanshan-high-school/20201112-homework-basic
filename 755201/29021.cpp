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
    cout << "�п�J�b���G" << endl;
    cin >> account;
    cout << "�п�J�K�X�G" << endl;
    cin >> password;
    
    for (int i = 0; i <= 3; i++) {
        if (user[i][0] == account) {
            if (user[i][1] == password) {
                cout << welcome[num] << user[i][2] << endl;
                return 0;
            }
        }
    }
    
    cout << "�b���αK�X���~�I" << endl;
    return 0;
}

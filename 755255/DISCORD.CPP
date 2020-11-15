#include <iostream>
#include <ctime>
using namespace std;
int main() {
    srand(time(NULL));
    string USERS[5][3] = {{"goodjack", "Goodjack-Is-Handsome!", "jack"},{"goodtom", "Goodtom-Is-Handsome!", "tom"}, {"goodallan","Goodallan-Is-Handsome!", "allan"}, {"goodjifong", "Goodjifon-Is-Handsome!", "jifong"}, {"goodjoseph", "Goodjoseph-Is-Handsome!", "joseph"}}, account_type, password_type, name_type, back[3] = {"剛剛滑入了伺服器中", "出生在這個伺服器", "歡迎回...請先放下你的武器"};
    bool a = true;
    int i = rand() % 3;

    do{
        cout << "請輸入帳號:";
        cin >> account_type; 
        cout << "\n";
        cout << "請輸入密碼:";
        cin >> password_type; 
        cout << "\n";
        cout << "請輸入姓名:";
        cin >> name_type; 
        cout << "\n";
        for(int i = 0;i < 5;i++){
            for(int j = 0;j < 3;j++)
            if (USERS[i][j] == account_type) {
                j++;
                if (USERS[i][j] == password_type) {
                    j++;
                    if (USERS[i][j] == name_type) {
                        a = false;
                        break;
                    }
                }
            }
        }
    } while (a);
    
    cout << name_type << " " <<back[i];
}

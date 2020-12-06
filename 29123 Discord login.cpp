#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    int i;

    string namelist[4][3]{
        "a", "apple", "Ant",
        "b", "banana", "Ball",
        "c", "car", "Candy",
        "d", "dog", "Donut",
    };

    string mess[3]{
        " 剛剛滑入了伺服器中。\n",
        " is back.\n",
        " 出現了\n"
    };

    string acc, pass;

    srand(time(NULL));

    bool b=true;

    do{
        cin >> acc >> pass;

        for(i=0 ; i<=3 ; i++) {
            if(namelist[i][0]==acc && namelist[i][1]==pass) {
                b=false;
                break;
            }
        }
        if(b) cout << "帳號密碼錯誤，請重新輸入。\n";

    }while(b);

    cout << namelist[i][2] << mess[rand()%3];
}

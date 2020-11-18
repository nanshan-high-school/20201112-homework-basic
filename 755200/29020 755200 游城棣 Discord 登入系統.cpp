#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    string account[4][3], Input_1, Input_2, username;
    int random;
    account[0][0] = "goodjack";
    account[0][1] = "handsome";
    account[0][2] = "叫我帥哥林小克";
    account[1][0] = "ko_no_dio_da";
    account[1][1] = "Za_Warudo";
    account[1][2] = "Dio";
    account[3][0] = "I_have_a_dream_which_is _being_a_gangsterstar";
    account[3][1] = "Gold Experience Requiem";
    account[3][2] = "ジョルノ・ジョバァーナ";
    srand(time(NULL));
    random = rand() % 5;
    for (int mention = 0; mention == 0; mention += 0){
        cout << "\n請輸入帳號和密碼\n" << "帳號：";
        cin >> Input_1;
        cout << "密碼：";
        cin >> Input_2;
        for (int i = 0; i < 4; i++) {
            if (Input_1 == account[i][0] && Input_2 == account[i][1]) {
            username =  account[i][2];
            mention = 1;
            break;
            }
        }
        while (mention != 1){
            cout << "帳號密碼錯誤，請重新輸入 : <";
            break;
        }
    }
    string welcomesentence[5][3] = {
        {"野生的", username, "出現了"},
        {username, "要進來了,", "小夫請做好準備"},
        {"WRY!!!!!", username, "不當人類拉！"},
        {username, "還有五秒到達戰場", ",全軍出擊!!!"},
        {username, "以為他還能逃跑", ",但你已經被我一個人包圍拉!"},
    };
    cout << "\n" << welcomesentence[random % 5][0] << welcomesentence[random % 5][1] << welcomesentence[random % 5][2];    
}

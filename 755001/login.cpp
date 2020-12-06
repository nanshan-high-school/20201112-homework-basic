#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int root;
    string ac = "papayaisnotafood", psw = "123456789", input[3];
    
    srand(time(NULL));
    root = rand() % 100 / 10 + 1 ;
    do {
        cout << "請輸入帳號密碼及姓名";
        cin >> input[0] >> input[1] >> input[2];
    } while(input[0] != ac and input[1] != psw);
    if(root == 0) {
        cout << input[2] << "剛剛滑入了伺服器中";
    }else if(root == 1) {
        cout << input[2] << "剛剛著陸下來";
    }else if(root == 2) {
        cout << input[2] << "還活著"; 
    }else if(root == 3) {
        cout << input[2] << "找到一根香蕉";
    }else if(root == 4) {
        cout << input[2] << "沒死";
    }else if(root == 5) {
        cout << input[2] << "青天白日滿地紅";
    }else if(root == 6) {
        cout << input[2] << "轉生成功";
    }else if(root == 7) {
        cout << input[2] << "走了一小步";
    }else if(root == 8) {
        cout << input[2] << "刀下留人";
    }else if(root == 9) {
        cout << input[2] << "亢龍有悔";
    }
}


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    string account_mail[2][2]={
        {"asdfdff@gmail.com","1234567"},
        {"duyfuby@gmail.com","4566352"}
    };
    string jjpj;
    string name, account;
    int a=543;
    int b;
    cout << "帳號:";
    cin >> account;
    cout << "密碼:";
    cin >> jjpj;
    cout << "名子:";
    cin >> name;
    for(int i=0 ; i<2 ; i++){
      if(account_mail[i][0]==account){
        if(account_mail[i][1]==jjpj){
          a=0;
        }
      }else{
        a=1;
      }
    }
    srand(time(NULL));
    b=rand()%10;
    if(a==0){
      for(int i ; i<b ; i++){
        cout << name<<"goodbye"<<"\n";
      }
    }else{
      cout<<"Scheibe";
      
    }



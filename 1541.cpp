#include<iostream>
#include<string>
#include<regex>
#include<sstream>
#include<fstream>
using namespace std;

int tmp=0;
int result = 0;
bool isMinus = false;
int main(void){
    string str;
    cin >> str;
    string exp = str;

    
    for(int i=0; i<=str.length();i++){
        if(str[i]=='+'|| str[i]=='-'|| i == str.length()){

            if(isMinus) result -= tmp;
            else result += tmp;
            
            tmp = 0; 
            if(str[i]=='-') isMinus = true;
         }
        else{
            tmp *= 10 ;
            tmp += str[i]-'0';
            

        }

    }

    cout << result;





}
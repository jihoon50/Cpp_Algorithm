#include<iostream>
#include<string>
using namespace std;

int N;

int main(void){
    cin >> N;
    int title = 666;
    int count =0;

    while(1){
        string str = to_string(title);
        if(str.find("666")!= string::npos){
            count ++;
        }
        if (count == N) break;

        title++;

    }
    
    cout << title ;

}
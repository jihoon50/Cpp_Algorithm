#include<iostream>
#include<vector>
using namespace std;
struct num{
    int first;
    int second;

};

int main(void){
    vector<num> vn;
    int A,B;
    while(1){
        cin >> A >> B;
        if(A==0&&B==0) break;
        num n;
        n.first=A;
        n.second=B;
        vn.push_back(n);
    }
    for(auto i: vn) cout << i.first+i.second << endl;
}
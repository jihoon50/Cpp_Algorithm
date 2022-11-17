#include<iostream>
#include<vector>
#include<string>
#include<sstream>

using namespace std;

int N;
vector<int> vi ; 
vector<int> vout ;
int main(void){
    cin >> N;

    for(int i=0;i<=N ;i++){
        string str;
        getline(cin,str);
        if(str.find("push")!= string::npos){
            stringstream in(str);
            string a,b;
            in >> a >> b;
            int num = stoi(b);
            vi.push_back(num);
        }
        else if(str=="pop"){
            if(vi.size()==0) vout.push_back(-1) ;
            else {
                vout.push_back(vi.back());
                vi.erase(vi.end()-1);
            }
        }
        else if(str=="size"){
            vout.push_back(vi.size());
        }
        else if(str=="empty"){
            if(vi.size()==0) vout.push_back(1);
            else vout.push_back(0);
        }
        else if(str=="top"){
            if(vi.size()>0) vout.push_back(vi.back());
            else vout.push_back(-1);

        }

    }

    for(auto i : vout){
        cout << i << '\n';
    }

}
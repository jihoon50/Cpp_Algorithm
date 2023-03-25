#include<iostream>
#include<vector>
#include<string>

using namespace std;

vector<int> queue;
int N;
string cmd[6] = {"push","pop","size","empty","front","back"};


int main(void){
    cin >> N;
    cin.ignore();
    for(int i=0 ;i<N;i++){
        string str;
        getline(cin,str);
        if (str.find(cmd[0]) != string::npos) {
            queue.push_back((int)str.back()-48);
        }
        else if(str.find(cmd[1]) != string::npos){
            if(queue.size()==0) cout << -1 <<'\n';
            else {
                cout << queue[0] << '\n';
                queue.erase(queue.begin());
            }
        }
        else if(str.find(cmd[2]) != string::npos){
            cout << queue.size() << '\n';
            
        }
        else if(str.find(cmd[3]) != string::npos){
            if(queue.size()==0) cout << 1 << '\n';
            else cout << 0 << '\n';
            
        }
        else if(str.find(cmd[4]) != string::npos){
            if(queue.size()==0) cout << -1 << '\n';
            else cout << queue[0] << '\n';
            
        }
        else if(str.find(cmd[5]) != string::npos){
            if(queue.size()==0) cout << -1 << '\n';
            else cout << queue[queue.size()-1] << '\n';
            
   
        }
    }


}
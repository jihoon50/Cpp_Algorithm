#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> vv1,vv2;
int N,M;

int main(void){
    cin >> N>>M;
    for(int i=0;i<N;i++){
        vector<int> v1;
        for(int i=0;i<M;i++){
            int m;
            cin >> m;
            v1.push_back(m);
        }
        vv1.push_back(v1);
    }
    for(int i=0;i<N;i++){
        vector<int> v2;
        for(int i=0;i<M;i++){
            int m;
            cin >> m;
            v2.push_back(m);
        }
        vv2.push_back(v2);
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            vv1[i][j] = vv1[i][j]+vv2[i][j];
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0; j<M;j++){
            cout<<vv1[i][j]<<" ";
        }
        cout << '\n';
    }



}

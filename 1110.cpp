#include<iostream>
#include<string>

using namespace std;
int cycle(string N){
    if (N.length()) N="a"+ N;
    cout << N<<endl;
    return 0;

}
int main(void){
    string N;
    cin >> N;
    cycle(N);
   if(N.compare("ab")) cout << "yes";
   else cout << "no";



}
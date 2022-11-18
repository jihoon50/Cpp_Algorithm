#include<iostream>
#include<string>

using namespace std;

int cnt = 0;
int N;
void cycle(int n){
    cnt ++;
    int n2 = n/10 + n%10;

    n = (n%10)*10+ (n2%10);

    if(n==N) return ;
    else cycle(n);
}
int main(void){
    cin >> N;
    cycle(N);
    cout << cnt;
}
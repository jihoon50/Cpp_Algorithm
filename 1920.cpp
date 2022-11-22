#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N,M;
int nArr[100001];
int mArr[100001];
int ans [100001];

void binarySearch(int n,int arr[]){
    int low = 0;
    int high = N-1;
    int mid;

    while(low <=high){
        mid = (low + high) / 2;
        if(arr[mid]==n){
            cout << '1' << '\n';
            return;
        }
        else if(arr[mid] < n){
            low = mid+1;
        }
        else if(arr[mid]>n){
            high = mid -1;
        }
    }
    cout << '0' << '\n';
    return;
}

int main(void){
    cin>> N;

    for(int i=0;i<N;i++){
        int num;
        cin >> num;
        nArr[i] = num;
    }
    cin >> M;

    for(int i=0; i<M; i++){
        int num;
        cin >> num;
        mArr[i] = num;
    }

    sort(nArr,nArr+N);

    for(int i=0;i<M;i++){
        binarySearch(mArr[i],nArr);
    }


}
#include<iostream>
#include<string.h>
#include<vector>


using namespace std;

int T;
vector<const char*> vs;
int count1=-998;

struct ans{
	int first;
	int second;
};

vector<ans> va; 


int recursion(const char* s,int l,int r,int c){
	
	if(l>=r) {
		count1 = c;
		return 1;
	}
	else if(s[l] != s[r]) {
		count1 = c ;
		return 0;
	}
	else return recursion(s,l+1,r-1,c+1);
}
int isPalindrome(const char* s){
	count1 = -999; 
	return recursion(s,0,strlen(s)-1,1);
}

int main(void){
	cin >> T;
	
	for(int i=0;i<T;i++){
		char c[1001];
		cin >> c;
		int n = isPalindrome(c);
		ans answer;
		answer.first = n; answer.second =count1;
		va.push_back(answer);
	}
	for (auto i: va){
		cout << i.first << " "<< i.second << '\n';
	}



	
	
}
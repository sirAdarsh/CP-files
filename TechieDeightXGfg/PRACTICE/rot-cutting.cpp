#include<bits/stdc++.h>
using namespace std;
int n;
int solve(int length[], int price[], int L){
	
	if(L==0){
		return 0;
	}
	
	int maxx=INT_MIN;
	
	for(int i=0; i<n; i++){
		if(length[i]<=L){
			int ch = price[i]+solve(length,price,L-length[i]);
			if(ch>maxx){
				maxx=ch;
			}
		}
	}
	return maxx;
	
}

int main(){
	int length[] = {1,2,3,4,5,6,7,8};
	int price[] = {1,5,8,9,10,17,17,20};
	n=8;
	int L=4;
	cout<<solve(length,price,L);
}

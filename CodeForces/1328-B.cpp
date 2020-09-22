#include<bits/stdc++.h>
using namespace std;

void swapChars(char ch[],int i,int j){
	char c=ch[i];
	ch[i]=ch[j];
	ch[j]=c;
}

int main(){
	int t;
	cin>>t;
	int n;
	double k;
	while(t--){
		cin >>n >>k;
		int shifts;
		double sq;
		double num=1+(8*k);
//		cout<<num;
		sq=sqrt(num);
		shifts=ceil((-1+ceil(sq))/2);
////		cout<<num<<endl;
//cout<<ceil(sq)<<endl;
//cout<<shifts;

		char ch[n];
		ch[0]='b';
		ch[1]='b';
		for(int i=2;i<n;i++){
			ch[i]='a';
		}
		
		swapChars(ch,1,shifts);
		
		int l=shifts-1;
		
		int range=l*(l+1)/2;
		int r=k-range-1;
		
		if(r>=0){
			swapChars(ch,0,r);
		}
		
//		
		for(int i=n-1;i>=0;i--){
			cout<<ch[i];
		}		
		cout<<endl;
	}
}

#include<bits/stdc++.h>
using namespace std;

int maxx(int a,int b,int c){
	int p=max(a,b);
	p=max(p,c);
	return p;
}

int main(){
	int n;
	cin >> n;
	int ch=0,ba=0,bi=0;
	int arr[n+1];
	for(int i=1;i<=n;i++){
		cin >> arr[i];
	}
	for(int i=1;i<=n;i+=3){
		ch+=arr[i];
	}
	for(int i=2;i<=n;i+=3){
		bi+=arr[i];
	}
	for(int i=3;i<=n;i+=3){
		ba+=arr[i];
	}
	int  m =maxx(bi,ch,ba);
	if(m==ch){
		cout<<"chest"<<endl;
	}else if(m==bi){
		cout<<"biceps"<<endl;
	}else if(m==ba){
		cout<<"back"<<endl;
	}
	
}

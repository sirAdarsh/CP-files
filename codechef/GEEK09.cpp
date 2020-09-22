#include<iostream>
using namespace std;

void solve(int n){
	if(n==1){
		cout<<"0"<<endl;
		return;
	}
	int pfs=0;
	for(int i=2;i * i <=n;i++){
		
		if(n%i==0){
			while(n%i==0){
				n/=i;
			}
			pfs++;
		}
	}
	if(n!=1){
		pfs++;
	}
	cout<<pfs<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int a;
		cin>>a;
		solve(a);
		
	}
}

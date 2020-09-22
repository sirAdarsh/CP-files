#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin>>T;
	int t,p,e;
	while(T--){
		cin>>t>>p>>e;
		if(abs(t-p)<=e){
			cout<<"PASSED"<<endl;
		}
		else{
			cout<<"FAILED"<<endl;
		}
	}
}

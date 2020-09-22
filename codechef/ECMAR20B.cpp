#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int p=n;
		int t;
		int count=0;
		bool a=false;
		while(n!=0){
		
			t=n%10;
			if(t==0){
				cout<<"NO"<<endl;
				a=true;
				break;
			}
			if(p%t!=0){
				cout<<"NO"<<endl;
				a=true;
				break;
			}
			n/=10;
		}
		if(a!=true){
			cout<<"YES"<<endl;
		}
		
	}
}

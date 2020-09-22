#include<iostream>
#define ll long long
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		
		ll a,b;
		cin>>a>>b;
		
		if(b*b > a){
			cout<<"NO"<<endl;
		}
		else{
			
			
			
			if(a%2==0){
			a=1;
		}
		else{
			a=-1;
		}
		if(b%2==0){
			b=1;
		}
		else{
			b=-1;
		}
		
		if(a*b==1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
			
		}
		
		
		
	}
}

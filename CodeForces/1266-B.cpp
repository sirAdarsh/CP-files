#include<iostream>
#define ll long long
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		
		if(n<=20){
			
			if( n<=20 && n>=15 ){
				cout<<"YES"<<endl;
			}else{
				cout<<"NO"<<endl;
			}
			
		}
		
		else{
			
			ll p;
			p = n%14;
			if( p>=1 && p<=6 ){
				cout<<"YES"<<endl;
			}else{
				cout<<"NO"<<endl;
			}
			
			
		}
		
		
	}
}

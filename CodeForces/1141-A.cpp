#include<iostream>
#define ll long long
using namespace std;
int main(){
	ll a,b;
	cin >> a >>b;
	if( b%a ){
		cout<<"-1"<<endl;
	}else{
		ll c = b/a;
		if(c==1){
			cout<<0<<endl;
		}
		else {
			if( c%2==0 || c%3==0 || c%6==0 ){
				ll count=0;
				
				
				while(true){
					
					if((c%3==0 || c%2==0 ) && c!=1){
						if(c%3==0){
							c/=3;
							count++;
						}else if(c%2==0){
							c/=2;
							count++;
						}
					}
					if(c==1){
						cout<<count<<endl;
						break;
					}
					if( c%3!=0 && c%2!=0 ){
						cout<<"-1"<<endl;
						break;
					}
				}
			}else{
				cout<<-1<<endl;
			}
		}
	}
}

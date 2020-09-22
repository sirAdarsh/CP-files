#include<iostream>
#define ll long long
using namespace std;

void addOnMin(ll i, ll *a, ll *b ){
	if(*a<*b){
		*a += i;
	}else{
		*b += i;
	}
}

void addOnMax(ll i, ll *a, ll *b ){
	if(*a<*b){
		*b += i;
	}else{
		*a += i;
	}
}

int main(){
	
	int t;
	cin >> t;
	while(t--){
		
		ll a, b;
		cin >> a >> b;
		
		ll i = 1;
		
		ll ans=0;
		
		while(true){
			
			if(b==a){
				break;
			}
			
			if(abs(b-a)<i){
				
				addOnMax(i,&a,&b);
				ans++;
				
			}
			
			else if(abs(b-a) >= i ){
				addOnMin(i,&a,&b);
				ans++;
			}
			i++;
		}
		cout<<ans<<endl;
	}
	
}

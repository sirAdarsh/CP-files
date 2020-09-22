#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		
		ll x,y,a,b;
		cin >> x >> y >> a >> b;
		
		ll ans=0;
	
		if(x*y==0){
			ll n = x+y;
			ans = n*a;
		}else{
			
			ll min;
			ll diff;
			
			
			if(x<y){
				min = x;
				diff = (y-x);
			}
			else{
				min = y;  //5
				diff = (x-y); // 4
			}
//			cout<<min<<" "<<diff<<endl; //5 4
			if(2*a >= b){
				ans = min*b;  
			}
			else{
				int qa = 2*a;
				  // a =40
//				cout<<a<<endl; 40
				ans = min *qa; // 200
			}
//			cout<<ans<<endl;
			if(diff>0){
				ans = ans + (diff*a); 
			}	
		}
		cout<<ans<<endl;
		
		
	}
}

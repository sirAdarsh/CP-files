#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b,c,k;
    cin >> a >> b >> c >> k;
    
    a = 1*a;
    c = (-1)*c;
    
	if( k <= a ){
   		cout<<k<<endl;
	}
	else{
		int ans = 0;
		
		k -= a;
		ans += a;
		
		if(k<=b){
			
			cout<<ans<<endl;
			
		}
		else{
			k -= b;
			
			if(k>0){
				
				ans -= k;
				cout<<ans<<endl;
			}
			
		}
		
		
	}
    
}


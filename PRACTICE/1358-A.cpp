// Hare Krishna

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int t;
    cin >>t;
    while(t--){
    	
    	int n;
		float m;
		cin >> n >>m;
    	
    	int r = n/2;
    	
    	int ans = 0;
    	
    	ans += ( m * r );
    	
    	if( n%2 ){
    		
    		r = ceil( m/2 );
    		ans += r;
    		
		}
		cout<<ans<<endl;
    	
	}
    
}


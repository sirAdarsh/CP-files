/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int t;
    cin >> t;
    while(t--){
    	double a,b;
    	cin >> a >> b;
    	
    	double minn = min(a,b);
    	double maxx = max(a,b);
    	
    	if(a==b){
    		if(a>1)
    		cout << (ll)ceil(a/2)<<endl;
    		else{
    			cout << 0 <<endl;
			}
		}
		else{
			if(maxx-minn >1){
				
			ll shifts = maxx-minn;
			shifts-=1;
			
			if( minn-shifts < 0 ){
				shifts=minn;
			}
			
			ll ans = shifts;
			
			minn-=shifts;
			maxx-=shifts;
			
			ll m1 = (ll)minn%3;
			ll m2 = (ll)maxx%3;
			
			if( (m1>0 && m2>1) || (m1>1 && m2 >0) ){
				ans++;
			}
			if(minn>0 && maxx >1)
			ans += ( ceil(minn/2) );
			
			cout << ans<<endl;
			
			}
			else{
				
				ll shifts = 0;
				ll ans;
				if(minn!=1)
				 ans = ceil( minn/2 );
				
				
				ll m1 = (ll)minn%3;
				ll m2 = (ll)maxx%3;
			
				if( (m1>0 && m2>1) || (m1>1 && m2 >0) ){
					ans++;
				}
				cout << ans << endl;
				
			}
			
			
		}
    	
	}
    
}


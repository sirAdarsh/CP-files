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
    cin>> t;
    unordered_map<ll,bool> mp;
    ll n;
    double x;
    ll a,b;
    while(t--){
    	
    	cin >> n >> x;
    	
    	mp.clear();
    	
    	ll maxx=0;
    	
    	while(n--){
    		cin >> a >> b;
    		mp[a]=true;
    		if((a-b)>maxx){
    			maxx=a-b;
			}
		}
    	
		ll steps=0;
    	bool e = false;
    	
    	ll maxMp=-1;
    	
    	for(auto i : mp){
    		if(i.first > maxMp){
    			maxMp=i.first;
			}
		}
	    if( maxx < 1 ){
	    	
	    	if( maxMp >= x ){
	    		cout << 1 <<endl;
			}
			else{
				cout<<-1<<endl;
			}
		}
		else{
			ll ans;
			
			ll t1;
			t1 = ceil(x/maxx);
			
			if( x-maxMp<=0){
				cout<<1<<endl;
			}
			else{
				ll t2 = ceil( (x-maxMp)/maxx );
				cout << ((t2>=t1)?t1:t2+1) <<endl;
			}
			
			
		}
		
	    	
	}
    
}


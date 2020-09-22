// Hare Krishna

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    ll a,b;
    cin >> a >> b;
    
    string s = to_string(b);
    
    ll t = b/10;
    t *= 10;
    ll lower = t-1;
    
    ll maxsum = INT_MIN;
    string ans;
    
    if(lower > a){
    	for(ll i=lower; i<=b; i++){
    	string tmp = to_string(i);
    	ll sum=1;
    	ll n = tmp.length();
    	for(ll j=0; j<n; j++){
    		ll index = j+1;
    		ll x = tmp[j]-'0';
    		sum *= x;
//    		cout<<sum<<endl;
		}
		
		if(sum>maxsum){
			maxsum=sum;
			ans = tmp;
		}
		}
	}
    
	
	else{
		for(ll i=a; i<=b; i++){
    		string tmp = to_string(i);
    		ll sum=0;
    		ll n = tmp.length();
    		for(ll j=0; j<n; j++){
    			ll index = j+1;
    			ll x = tmp[j]-'0';
    			sum *= x;
//    			cout<<sum<<endl;
			}
		
			if(sum>maxsum){
				maxsum=sum;
				ans = tmp;
			}
		}
	}
	
    
	cout<<ans<<endl;
    
    
    
}


/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
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
    	ll n,m;
    	cin >> n >> m;
    	
    	ll arr[n];
    	
    	unordered_map<ll,ll> mp;
    	
    	ll numGreaterThanM=0;
    	
    	for(int i=0; i<n; i++){
    		cin >> arr[i];
    		mp[arr[i]]++;
    		if(arr[i]>m){
    			numGreaterThanM++;
			}
		}
		
		int count=0;
		
		int i=1;
		
		bool c=false;
		
		while(m-i>=1){
			if(mp[m-i]==0){
				c=true;
				break;
			}
			else{
				count += mp[m-i];
			}
			
			i++;
		}
	    
	    if(c){
	    	cout<<-1<<endl;
		}
		
		else{
			count+=numGreaterThanM;
			cout <<  count<<endl;
		}
	    
	}
    
}


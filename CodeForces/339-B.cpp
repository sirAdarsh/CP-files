/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    ll n,m;
    cin >> n >> m;
    
    ll completeRound=0;
    
    ll arr[m];
    for(int i=0; i<m; i++) cin>>arr[i];
    
    ll prev=1;
    ll len=0;
    
    for(int i=0; i<m; i++){
    	
    	if(arr[i]==prev){
    		continue;
		}
    	
    	if(arr[i]<prev){
    		completeRound++;
    		len=0;
    		prev=1;
    		i--;
		}
		else{
			len += (arr[i]-prev);
			prev=arr[i];
		}
	}
	
	cout << completeRound*n + len<<endl;
    
}


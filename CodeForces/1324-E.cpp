
#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll n, h, l, r;
ll dp[2005][2005];

ll maxSleeps( ll curIdx, ll sleepTime, ll arr[] ){
	
	if( curIdx == n ){
		return 0;
	}
	
	if(~dp[curIdx][sleepTime]){
		return dp[curIdx][sleepTime];
	}
	
	
	ll ans1; // arr-0
	ll tempSleep = (sleepTime + arr[curIdx] +h) % h ;
	
	if(tempSleep >=l && tempSleep <= r){
		ans1 = 1 + maxSleeps( curIdx+1, tempSleep, arr );
	}
	else{
		ans1 = maxSleeps( curIdx+1, tempSleep, arr);
	}
	
	ll ans2; // arr-1
	tempSleep = (sleepTime + arr[curIdx] - 1 + h) % h;
	
	if(tempSleep >=l && tempSleep <= r){
		ans2 = 1 + maxSleeps(curIdx+1, tempSleep,  arr);
	}
	else{
		ans2 = maxSleeps(curIdx+1, tempSleep,  arr);
	}
	
	
	return  dp[curIdx][sleepTime] = max(ans1,ans2);
	
}

int main(){
    
    cin >> n >> h >> l >> r;
    ll arr[n];
    for(int i=0; i<n; i++){
    	cin >> arr[i];
	}
	memset(dp,-1,sizeof(dp));
    cout << maxSleeps(0, 0,  arr);
}


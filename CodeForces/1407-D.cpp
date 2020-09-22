/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define pb push_back
#define pf push_front
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

int t;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n;
    cin >> n;
    vector<int> h(n);
    for(int i=0; i<n; i++){
    	cin >> h[i];
	}
	vector<int> dp(n,MOD);
	
	dp[0]=0;
	
	vector<int> s{0},p{0};
	
	for(int i=1; i<n; i++){
		dp[i]=dp[i-1]+1;
		while(!s.empty() && h[i]>=h[s.back()]){
			int x=h[s.back()];
			s.pop_back();
			if(h[i]>x && !s.empty()){
				dp[i] = min(dp[i], dp[s.back()]+1);
			}
		}
		while(!p.empty() && h[i]<=h[p.back()]){
			int x=h[p.back()];
			p.pop_back();
			if(h[i]<x && !p.empty()){
				dp[i]=min(dp[i],dp[p.back()]+1);
			}
		}
		s.pb(i);
		p.pb(i);
	}
	cout << dp[n-1] << endl;
    
}


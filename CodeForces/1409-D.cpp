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

ll s;
int t;

ll init;
ll ans;

ll dp[20][200][2];

ll solve(string str, int idx, int sum, bool tight){
	
	if(idx==str.size()){
//		for(auto i :str){
//			cout << i;
//		}
//		cout << endl;
		if(sum<=s && stoll(str)>=init){
			ll tmp = init - stoll(str);
			ans=min(ans,tmp);
		}
		return LONG_LONG_MAX;
	}
//	printf("%d\n",idx);
	if(dp[idx][sum][tight]!=-1){
		return dp[idx][sum][tight];
	}

	ll res=LONG_LONG_MAX;
	
	if(tight){
		for(int i=0; i<=str[i]-'0'; i++){
			if(i==str[i]-'0'){
				str[i]=(i+'0');
				res = min(res,solve(str,idx+1,sum+i,1));
			}
			else{
				str[i]=(i+'0');
				res = min(res,solve(str,idx+1,sum+i,0));
			}
		}
	}
	else{
		for(int i=0; i<=9; i++){
			str[i]=(i+'0');
			res = min(res,solve(str,idx+1,sum+i,0));
		}
	}
	dp[idx][sum][tight]=res;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin >> t;
    while(t--){
    	cin >> init >> s;
    	ll here=1e18;
    	memset(dp,-1,sizeof(dp));
    	ans = LONG_LONG_MAX;
    	string str = to_string(here);
    	solve(str,0,0,1);
    	cout << ans << endl;
	}
}


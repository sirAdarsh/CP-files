/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

// #pragma GCC optimize("Ofast")
// #pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
int t;

int solve(){
	int n;
	cin >> n;
	cin >> s;
	unordered_map<int,int> mp;
	
	mp[0]=1;
	
	int sm=0;
	int ans=0;
	
	for(int i=0; i<s.length(); i++){
		sm += ((s[i]-'0')-1);
		if(mp.count(sm)>0){
			ans += mp[sm];
		}
		mp[sm]++;
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> t;
    while(t--){
    	cout << solve()<<endl;
	}
    
}


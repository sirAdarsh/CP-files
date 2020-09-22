/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

ll solve(ll n, ll tn){
	
	if(n>=tn){
		string s1,s2;
		s1 = to_string(n);
		ll fours=0,sevens=0;
		bool e=false;
		for(auto i : s1){
			if(i=='4'){
				fours++;
			}
			else if(i=='7'){
				sevens++;
			}
			else{
				e = true;
				break;
			}
		}
		if(fours==sevens && !e){
			return n;
		}
	}
	
	ll a = solve(n+1,tn);
	return a;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    ll n;8
    cin >> n;
    cout << solve(n,n)<< endl;
    
}


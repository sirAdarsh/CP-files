/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int n1,n2;
int countn1, countn2;

int dp[20][50][2][2]; // dp[pos][prev][tight][num->n1 or n2]

ll solve(string s, ll pos, bool tight, ll prev, int num){
	
	
	if(prev>=10){
		ll a,b;
		a = prev%10;
		b = prev/10;
		prev = a+b;
	}
	
	if(pos==s.size() ){
		
		if(prev==n1 && num==0 ){
			return 1;
		}
		else if(prev==n2 && num==1 ){
			return 1;
		}
		
		return 0;
		
	}
	
	
	if(dp[pos][prev][tight][num]!=-1){
		return dp[pos][prev][tight][num];
	}
	ll res=0;
	
	if(tight){
		
		for(ll i=0; i<=s[pos]-'0'; i++){
			if(i==s[pos]-'0'){
				res += solve(s, pos+1, 1, prev+i, num);
			}
			else{
				res += solve(s, pos+1, 0, prev+i, num);
			}
		}
		
	}
	else{
		
		for(ll i=0; i<=9; i++){
			res += solve(s, pos+1, 0, prev+i, num);
		}
		
	}
	
	return dp[pos][prev][tight][num] = res;
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int t;
    cin >> t;
    while(t--){
    	ll l,r;
    	cin >> l >> r >> n1 >> n2;
    	countn1=0;countn2=0;
    	string s;
    	s = to_string(r);
    	
    	memset(dp,-1,sizeof(dp));
    	
    	int countn1 = solve(s,0,1,0,0);
    	int countn2 = solve(s,0,1,0,1);
    	
    	l--;
    	s = to_string(l);
    	
    	memset(dp,-1,sizeof(dp));
    	
    	countn1 = countn1 - solve(s,0,1,0,0);
    	countn2 = countn2 - solve(s,0,1,0,1);
    	
    	
    	cout<<"one = "<<countn1<<" two = "<<countn2<<endl;
    	
    	if(countn1==countn2){
    		cout<<"Draw"<<endl;
		}
		else if(countn1>countn2){
			cout<<"Onkar"<<endl;
		}
		else{
			cout<<"Krushna"<<endl;
		}
    	
	}
    
}


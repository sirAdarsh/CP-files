// Hare Krishna

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000009
using namespace std;

ll dp[2000][2000][2]; //dp[pos][rem][tight]


ll findNums( string str, int n, int pos, int prevRem, int tight, int m, int d ){
	
	if( pos == n ){
		if(prevRem == 0){
			return 1;
		}
		return 0;
	}
	
	if(dp[pos][prevRem][tight]!=-1){
		return dp[pos][prevRem][tight];
	}
	
	ll res = 0;  //number of such numbers formed
	
	if(tight == 1){ // restricted
		
		
		if(pos%2){
			
			if( d < str[pos]-'0'){
				res += findNums ( str, n, pos+1, (prevRem*10 + d)%m, 0, m, d );
			}
			else if(d == str[pos]-'0'){
				res += findNums(str,n, pos+1, (prevRem*10 + d)%m, 1, m, d);
			}
			
		}
		else{
			
			for(int i=0; i<=str[pos]-'0'; i++){
				if(i == str[pos]-'0'){
					res += findNums(str, n, pos+1, (prevRem*10 + i)%m , 1, m, d);
				}
				else{
					res += findNums(str, n, pos+1, (prevRem*10 + i)%m, 0, m, d);
				}
			}
			
		}
		
	}
		
	
	else{  //unrestricted
		 
		if(pos%2){
			res += findNums(str, n, pos+1, (prevRem*10 + d)%m, 0, m, d);
		}
		else{
			
			for(int i=0; i<=9; i++){
				res += findNums(str, n, pos+1, (prevRem*10 + i) %m, 0, m, d);
			}
			
		}
	}
	
	return dp[pos][prevRem][tight] = res;
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll m,d;
    cin >> m >> d; // divisible bym, d-magic number
    
    ll a,b;
    cin >> a >> b;
    a-=1;
    string s;
    
    s = to_string(a);
    int n = s.length();
    memset(dp,-1,sizeof(dp));
    cout<<s<<endl;
    ll ans1 = findNums(s,s.length(),0,0,1, m, d);
    
    s= to_string(b);
    cout<<s<<endl;
    memset(dp,-1,sizeof(dp));
    ll ans2 = findNums(s,s.length(),0,0,1, m, d);
    
    cout << ans1 << " " << ans2;
    
}


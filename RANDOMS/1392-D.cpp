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

int t;

bool isOk(string STR){
	
//	printf("%s\n",STR);
	
	int n=STR.size();
	
	n+=2;
	
	for(int i=1; i<n-1; i++){
		
		if(STR[i-1]==STR[i+1]){
			
			if(STR[i]==STR[i-1]){
				return false;
			}
			
		}
	}
	
	return true;
}

int dp[400005];

int minDels(string s, int pos){
	
	
	if(isOk(s)){
		return 0;
	}
	
	
	if(pos==s.length()+2){
		return MOD;
	}
	
	if(dp[pos]!=-1){
		return dp[pos];
	}
	
	int ans;
	
	int a,b;
	
		a = minDels(s,pos+1);	
	
		string ss=s;
	
		if(ss[pos]=='L'){
			ss[pos]='R';
		}
		else{
			ss[pos]='L';
		}
		
		b = 1+minDels(ss,pos+1);
		
	
	
	ans = min(a,b);
	
	return dp[pos]=ans;
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> t;
    string str;
    while(t--){
    	memset(dp,-1,sizeof(dp));
    	int n;
    	cin >> n;
    	cin >> str;
    	
    	str = str[n-1]+str;
		str = str+str[1];
    	
    	memset(dp,-1,sizeof(dp));
    	cout << minDels(str,0)<<endl;
    	
	}
    
}


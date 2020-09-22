/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

bool check(int n){
	string s = to_string(n);
	for(int i=0; i<s.size(); i++){
		if(s[i]!='4' && s[i]!='7'){
			return 0;
		}
	}
	return 1;
}

string solve(int n){
	
	for(int i=1; i<=n; i++){
		if(check(i) && n%i==0) return "YES";
	}
	return "NO";
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n;
    cin >> n;
    cout << solve(n);
    
}


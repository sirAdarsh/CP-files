/*----- || Hare Krishna || -----*/

// IT TAKES TIME, DON'T FORGET WHO YOU ARE!

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

string s;
int t=0;
int alpha[26];
int solve(){
	for(int i=0; i<s.size(); i++){
		alpha[s[i]-'a']++;
	}
	int untaken=0;
	for(int i=0;i<26;i++){
		t+=(max(0,alpha[i]-1));
		if(alpha[i]==0) untaken++;
	}
	if(untaken>=t){
		return t;
	}
	return -1;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    cin >> s;
    cout << solve();
    
}


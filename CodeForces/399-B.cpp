/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
char t;
int n;
int blue=0, red=0;
stack<char> st;

int solve(){
	if(st.size()==n && red==n){
		return 0;
	}
	
	int cnt=0;
	while(st.top()=='R'){
		st.pop();
		red--;
		cnt++;
	}
	st.pop();
	blue--;
	st.push('R');
	red++;
	for(int i=0; i<cnt; i++){
		st.push('B');
		blue++;
	}

	return 1+solve();
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    
    cin >> n;
    cin >> s;
    for(int i=n-1; i>=0; i--){
    	t = s[i];
    	st.push(t);
    	if(t=='R')red++;
    	else blue++;
	}
	cout << solve();
    
}


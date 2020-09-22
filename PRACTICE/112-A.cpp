/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;
int solve(string a, string b){
	
	for(int i=0; i<a.size(); i++){
		char u , d;
		u = a[i]; d= b[i];
		if(u>='A' && u<='Z') u+=32;
		if(d>='A' && d<='Z' ) d+=32;
		if(d>u) return -1;
		if(u>d) return 1;
	}
	return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    string a,b;
    cin >> a >> b;
    cout << solve(a,b);
    
}


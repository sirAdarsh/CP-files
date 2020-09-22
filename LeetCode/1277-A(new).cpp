/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	string s = to_string(n);
    	char f = s[0]; int sz = s.size();
    	string s1(sz,f);
    	int n1=stoi(s1);
    	if(n>=n1) cout << (sz-1)*9+(f-'0')<<endl;
    	else cout << (sz-1)*9+((f-'0')-1)<<endl;
	}
    
}


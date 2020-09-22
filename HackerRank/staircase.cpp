/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

void solve(int n){
	
	vector<char> s(n,' ');
	for(int i=n-1;i>=0;i--){
		s[i]='#';
		for(auto i : s){
			cout<<i;
		}
		cout << endl;
	}
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    solve(n);
}


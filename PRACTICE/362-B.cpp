/*----- || Hare Krishna || -----*/

// IT TAKES TIME, DON'T FORGET WHO YOU ARE!

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int n,m;

string solve(int st[]){
	
	sort(st,st+m);
	if(st[0]==1 || st[m-1]==n){
		return "NO";
	}
	int diff;
	for(int i=0; i<m-2; i++){
		if(st[i+1]-st[i]==1 && st[i+2]-st[i+1]==1){
			return "NO";
		}
	}
	return "YES";
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    cin >> n >> m;
    int st[m];
    for(int i=0; i<m; i++){
    	cin >> st[i];
	}
	
	cout << solve(st);
	
}


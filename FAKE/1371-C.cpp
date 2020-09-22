/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

string solve(int a, int b, int c, int d){
	
	a -= min(c,d);
	b -= min(c,d);
	if(a>=0 && b>-0){
		return "Yes";
	}
	return "No";
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int t;
    cin >> t;
    while(t--){
    	int a,b,c,d;
    	cin >> a >> b  >> c >> d;
    	cout << solve(a,b,c,d)<< endl;
	}
    
}


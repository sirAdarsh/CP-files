/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
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
    int ans=0;
    int n;
    for(int i=0; i<t; i++){
    	int p=0;
    	for(int j=0; j<3; j++){
    		cin >> n;
    		p += n;
		}
		if(p>=2) ans++;
	}
    cout << ans << endl;
}


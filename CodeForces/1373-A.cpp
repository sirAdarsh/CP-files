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
    	ll a,b,c;
    	cin >> a >> b >> c;
    	if(a<c){
    		cout << 1 <<" ";
		}
		else{
			cout << -1 <<" ";
		}
		if(c<(a*b)){
			cout << b << endl;
		}
		else{
			cout << -1 <<endl;
		}
	}
    
}


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
    	ll S,N;
    	cin >> S >> N;
    	
    	ll maxE;
    	if(N%2) maxE=N-1;
		else maxE=N;
		
		ll coin = S/maxE;
		
		ll sum = coin*maxE;
		
		ll D = S-sum;
		if(D==1) coin++;
		else if(D>1) coin+=2;
		cout << coin <<endl;
	}
    
}


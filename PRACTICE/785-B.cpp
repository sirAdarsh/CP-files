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
int t;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    ll a;
	cin >> a;
	vector<pair<ll,ll>> chess;
	vector<pair<ll,ll>> prog;
	ll n,m;
	
	for(int i=0; i<a; i++){
		cin >> n >> m;
		chess.push_back({n,m});
	}
	ll b;
	cin >> b;
    
    ll maxx = INT_MIN;
    
    for(int i=0; i<b; i++){
    	
    	cin >> n >> m;
    	
    	for(int j=0; j<a; j++){
    		
    		ll d1,d2;
    		
    		d1 = n - chess[j].second;
    		d2 = chess[j].first - m;
    		
    		maxx = max( maxx, max(d1,d2) );
    		
		}
    	
	}
	
	if(maxx<0) cout << 0 << endl;
	else cout << maxx << endl;
    
}


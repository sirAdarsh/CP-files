/*----- || Hare Krishna || -----*/

// IT TAKES TIME, DON'T FORGET WHO YOU ARE!

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

string s;
int t;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int p,q,l,r;
    cin >> p >> q >> l >> r;
    vector<pair<int,int>> Z,X;
    int a,b;
    while(p--){
    	cin >> a >> b;
    	Z.push_back({a,b});
	}
	while(q--){
		cin >> a >> b;
		X.push_back({a,b});  //(b-a) -> duration
	}
	
	int ans=0;
	
	for(int i=l; i<=r; i++){
		
		int begin,end;
		bool e =false;
		for(auto j : X){
			
			begin = (j.first)+i;
			end = (j.second)+i;
			for(auto k : Z){
				if( begin>=k.first && begin<=k.second  ){
					ans++;
					e=true;
					break;
				}
				else if( begin<=k.first ){
					if( end>=k.first){
						ans++;
						e=true;
						break;
					}
				}
				
			}
			if(e) break;
			
		}
		
	}
	
    cout<<ans<<endl;
}


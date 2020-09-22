/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

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
    cin >> t;
    while(t--){
    	int n,m;
    	cin >> n >> m;
    	int p;
    	unordered_map<int,bool> mp;
    	mp.clear();
    	for(int i=0; i<n; i++){
    		cin >> p;
    		mp[p]=true;
		}
		bool e =false;
		
		for(auto i : mp){
			cout << i.first<<" "<<i.second<<endl;
		}
		
		for(int i=0; i<m; i++){
			cin >> p;
			if(mp[p]){
				e=true;
				cout<<"YES"<<endl;
				cout<<1<<" "<<p<<endl;
				break;
			}
		}
		if(!e){
			cout<<"NO"<<endl;
		}
    	cout<<endl;
	}
    
}


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
    	unordered_map<int,int> mp;
    	int tmp;
    	for(int i=0; i<n; i++){
    		cin >> tmp;
    		mp[tmp]++;
		}
		bool e =false;
		for(int i=0; i<m; i++){
			cin >> tmp;
			if(!e && mp[tmp]){
				e=true;
				s = to_string(1);
				s+=" ";
				s+=to_string(tmp);
			}
		}
		if(e){
			cout<<"YES\n"<<s<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
    
}


/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

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
    while(t--){
    	int n,m;
    	
    	int mp[1001];
    	for(int i=0; i<1001;i++){
    		mp[i]=0;
		}
    	
    	cin >> n >> m;
    	int s;
    	for(int i=0; i<n; i++){
    		cin >> s;
    		mp[s]=1;
		}
		
		bool e =false;
		for(int i=0; i<m; i++){
			cin >>s;
			if(mp[s]){
				cout<<"YES"<<endl;
				cout<<1<<" "<<s<<endl;
				e=true;
				break;
			}
		}
		if(!e){
			cout<<"NO"<<endl;
		}
    	
	}
    
}


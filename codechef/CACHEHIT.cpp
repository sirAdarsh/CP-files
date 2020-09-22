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
    	int n,b,m;
    	cin >> n >> b >> m;
    	
    	int q;
    	cin >> q;
    	
    	int count=0;
    	
    	int prev = q/b;
    	count++;
    	m--;
    	
    	while(m--){
    		int q;
    		cin >> q;
    		int curr = q/b;
    		if(curr!=prev){
    			count++;
    			prev=curr;
			}
		}
    	cout<<count<<endl;
	}
    
}


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
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	int arr[n];
    	for(int i=0; i<n; i++){
    		cin >> arr[i];
		}
		
		unordered_map<ll,ll> mp;
		bool e =false;
		for(int i=0; i<n; i++){
			int p=0;
			for(int j=i; j<n; j++){
				p = (p|arr[j]);
				mp[p]++;
				if(mp[p]>1){
					cout<<"NO"<<endl;
					e=true;
					break;
				}
			}
			if(e){
				break;
			}
		}
		
		if(!e){
			cout<<"YES"<<endl;
		}
	}
    
}


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
    	ll n ,k;
    	cin >> n >> k;
    	ll arr[n];
    	for(int i=0; i<n; i++){
    		cin >> arr[i];
		}
		
		ll a=0;
		
		vector<ll> ands;
		
		for(int i=0; i<32; i++){
			
			ll nd=0;
			
			for(int j=0; j<n; j++){
				
				ll tmp;
				
				tmp = arr[j]>>i;
				
				
				nd = nd + (tmp&1);
			}
			
			for(int k=0; k<32; k++){
				if(i==k){
					a = nd*pow(2,k);
					break;
				}
			}
			
			ands.push_back(a);
		}
		
//		for(auto i : ands) cout << i<<" ";
//		cout << endl;

		vector<ll> ands2;
		for(int i=0; i<ands.size(); i++){
			ands2.push_back(ands[i]);
		}
		
//		for(auto i : ands2) cout << i<<" ";
//		cout << endl;
		
		sort(ands2.begin(), ands2.end(),greater<ll> ());

		unordered_map<ll,bool> poss;
		
		ll temp=0;
			
		for(int i=0; i<ands2.size(); i++){
			if(temp==k){
				break;
			}
			poss[ands2[i]]=1;
			temp++;
		}
		
		ll kay=0;
		
		ll num=0;
		
		for(int i=0; i<ands.size(); i++){
			if(kay==k){
				break;
			}
			if(poss[ands[i]]){
//				cout << ands[i]<<endl;
				num = num + pow(2,i);
				kay++;
			}
		}
		cout << num << endl;
//		for(auto i : ands){
//			cout << "for i = "<<i<<" pos = "<<poss[i] <<" ";
//		}
		
		
	}
    
}


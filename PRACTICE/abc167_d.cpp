#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,k;
    cin >> n >> k;
    
    ll arr[n+1];
    for(int i=1; i<n+1; i++){
    	cin >> arr[i];
	}
	
	unordered_map<int,int> m;
	
	ll pos = 1;
	
	ll i = 0;
	ll u,d;
	
	while(true){
		i++;
		pos = arr[pos];
//		cout<<i<<" "<<pos<<" "<<m[pos]<<endl;
		if( m[pos] != 0){
			d = i-1;
			u = m[pos];
			break;
		}
		else{
			m[pos] = i;
		}
		
	}
	
	vector<int> v;
	
	for(int i=u; i<=d; i++){
		
		for(auto j : m){
			if(j.second == i){
				v.push_back(j.first);
				break;
			}
		}
		
	}
	
//	for(auto i : v){
//		cout<<i <<' ';
////	}
//	cout<<endl;
	
	if(k<=d){
		for(auto i : m){
			if(i.second == k){
				cout<<i.first<<endl;
				break;
			}
		}
	}
	else{
		
		int x = k - u;
		int s = v.size();
		
		x = x%s;
		
		cout << v[x]<<endl;
		
	}
	
}


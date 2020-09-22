#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int n;
	cin >> n;
	unordered_map<ll,int> m;
	vector<ll> v;
	for(int i=0;i<n;i++){
		ll p;
		cin >> p;
		if(m.find(p)==m.end()){
			m[p]++;
			v.push_back(p);
		}else{
			m[p]++;
		}
	}
	if(n==0){
		cout<<0<<endl;
	}else{
		cout<<(m[v[0]]+v[0]);
		for(int i=0;i<v.size();i++){
			cout<<" "<< v[i] + m[v[i]];
			
		}
		cout<<endl;
	}
		
}

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
    cin>>t;
    string s;
    int n;
    
    
    vector<pair<string,int>> vec;
    unordered_map<string, int> mp;
    
    for(int i=0; i<t; i++){
    	cin >> s >> n;
    	mp[s]+=n;
    	vec.push_back({s,mp[s]});
	}
    
    int maxx= INT_MIN;
    for(auto i : mp){
    	if(i.second>maxx){
    		maxx=i.second;
		}
	}
	
	
	for(int i=0; i<t; i++){
		
		
		if( mp[vec[i].first] == maxx && vec[i].second>=maxx ){
			cout << vec[i].first<<endl;
			break;
		}
	}
    
}


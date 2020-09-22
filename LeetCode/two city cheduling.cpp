/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

bool comp(pair<int,int> p1, pair<int,int> p2){
	
	if(p1.first < p2.first ){
		return true;
	}
	if( p1.first == p2.first && p1.second>p2.second ){
		return true;
	}
	return false;
	
}

int solve(vector<vector<int>> vec){
	
	vector<pair<int,int>> p;
	
	for(auto i : vec){
		
		int f,s;
		f = i[0];
		s = i[1];
		p.push_back({f,s});		
	}
	
	sort(p.begin(), p.end(), comp);
	
	for(auto i : p){
		cout << i.first<<" "<<i.second<<endl;
	}

	int n = p.size();
	
	int ans = 0;
	int g = n/2;
	
	for(int i=0; i<n; i++){
		if(i<g){
			cout << p[i].first<<endl;
		}
		else{
			cout << p[i].second<<endl;
		}
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    vector<vector<int>> vec = {{259,770},{448,54},{926,667},{184,139},{840,118},{577,469}}
;
    cout << solve(vec) << endl;
}


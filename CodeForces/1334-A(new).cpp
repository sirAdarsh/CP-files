/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

string solve(vector<pair<int,int>> vec, int n){
	
	int p=0,c=0;
	
	for(auto i : vec){
		
		if(i.first<p){
			return "NO";
		}
		if(i.second<c){
			return "NO";
		}
		
		p=i.first;
		c=i.second;
		
		if(c>p){
			return "NO";
		}
		
	}
	return "YES";
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	vector<pair<int,int>> vec;
    	for(int i=0; i<n; i++){
    		int a,b; cin >> a >> b;
    		vec.push_back({a,b});
		}
		cout << solve(vec,n)<<endl;
	}
    
}


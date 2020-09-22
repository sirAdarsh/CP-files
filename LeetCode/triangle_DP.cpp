/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;


int solve( vector<vector<int>> vec){
	
	int levels = vec.size();
	
	vector<int> minSum(levels);
	
	for(int i=0; i<levels; i++){
		minSum[i] = vec[levels-1][i];
	}
	for(int i=levels-2; i>=0; i--){
		
		for(int j=0; j<vec[i].size(); j++){
			
			minSum[j] = min( vec[i][j]+minSum[j], vec[i][j]+minSum[j+1]);
			
		}
		
	}
	return minSum[0];
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    vector<vector<int>> vec = { {-10} };
    cout << solve(vec);
}


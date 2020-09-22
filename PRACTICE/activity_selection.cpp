#include<bits/stdc++.h>
#define ll long long
using namespace std;

typedef pair<int,int> Pair; //(start time, end time)

bool comp(Pair j1, Pair j2){
	if(j1.first < j2.first){
		return true;
	}
	else if(j1.first == j2.first && j1.second < j2.second){
		return true;
	}
	return false;
}

int solve(vector<Pair> jobs){
	int n = jobs.size();
	
	sort(jobs.begin(), jobs.end(), comp);
	
	int dp[n] = {}; //stores the max jobs done till i
	dp[0]=1;
	
	for(int i=1; i<n; i++){
		
		for(int j=0; j<i; j++){
			
			if( jobs[j].second < jobs[i].first ){
				if(dp[j] > dp[i]){
					dp[i] = dp[j];
				}
			}
			
		}
		dp[i]++;
	}
	return *max_element(dp,dp+n);
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<Pair> jobs =
	{
		{1, 4}, {3, 5}, {0, 6}, {5, 7}, {3, 8}, {5, 9},
		{6, 10}, {8, 11}, {8, 12}, {2, 13}, {12, 14}
	};
	
	cout<< solve(jobs);
    
}


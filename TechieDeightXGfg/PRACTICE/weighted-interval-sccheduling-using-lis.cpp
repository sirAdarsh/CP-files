#include<bits/stdc++.h>
#define ll long long
using namespace std;


struct Job{
	int start, finish, profit;
};
bool comparator(Job j1, Job j2){
	return j1.start < j2.start;
}

int findMaxProfit( vector<Job> &jobs ){
	
	sort(jobs.begin(), jobs.end(), comparator);
	
	int n = jobs.size();
	
	int maxProfit[n];
	
	for(int i=0; i<n ;i++){
		
		maxProfit[i] = 0;
		
		for(int j = 0; j<i; j++){
			
			if( jobs[j].finish <= jobs[i].start && maxProfit[i] < maxProfit[j] ){
				
				maxProfit[i] = maxProfit[j];
				
			}
			
		}
		maxProfit[i] += jobs[i].profit;
		
	}
	
	return *max_element(maxProfit,maxProfit+n);
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<Job> jobs
    {
    	{0,6,60},
    	{5,9,50},
    	{1,4,30},
    	{5,7,30},
    	{3,5,10},
    	{7,8,10}
	};
	
	cout<<"maximum profit = "<<findMaxProfit(jobs);
    
}


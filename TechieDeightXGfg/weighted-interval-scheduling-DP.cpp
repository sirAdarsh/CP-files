#include<bits/stdc++.h>
using namespace std;

struct Job{
	int start, finish, profit;
};

bool comp( Job j1, Job j2)
{
	
	return j1.start < j2.start;
	
}
int findMaxProfit( vector<Job> jobs ){
	
	// sort all the jobs according to increasing order of start time
	sort( jobs.begin(), jobs.end(), comp );
	
	// number of jobs
	int n = jobs.size();
	
	// maxProfit[i] stores the maximum profit of nin conflicting jobs
	int maxProfit[n];
	
	for(int i=0; i<n; i++){
		
		maxProfit[i] = 0;
		
		for(int j=0; j<i; j++){
			
			if( jobs[j].finish <= jobs[i].start && maxProfit[i] < maxProfit[j]){
				maxProfit[i] = maxProfit[j];
			}
			
		}
		
		maxProfit[i] += jobs[i].profit;
		
	}
	return *max_element(maxProfit,maxProfit+n);
	
}

int main(){
	vector<Job> jobs{
		{0,6,60},
		{5,9,50},
		{1,4,30},
		{5,7,30},
		{3,5,10},
		{7,8,10}
	};
	cout<<findMaxProfit(jobs);
}


#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> arr,int n){
	
	int maxSubArr;
	int maxSubSeq=0;
	
	int max_so_far = arr[0];
	int max_here = 0;
	
	bool pos = false;
	
	int max = INT_MIN;
	
	for(int i=0 ; i<n; i++){
		
		max_here += arr[i];
		
		
		
		if(max_here > max_so_far){
			max_so_far = max_here;
		}
		if(max_here<0){
			max_here = 0;
		}
		
		if(arr[i]>0){
			maxSubSeq += arr[i];
			pos = true;
		}	
		
		if(!pos){
			if(arr[i]>max){
				max = arr[i];
			}
		}
	}
	
	maxSubArr = max_so_far;
	
	if(!pos){
		maxSubSeq=max;
	}
	
	vector<int> ans;
	ans.push_back(maxSubArr);
	ans.push_back(maxSubSeq);
	return ans;
	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> arr(n);
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		vector<int> ans = solve(arr,n);
		for(int i=0; i<2; i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
}

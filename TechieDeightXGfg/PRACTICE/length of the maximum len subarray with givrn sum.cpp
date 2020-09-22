// maximum length of subarray having a given sum in an array
#include<bits/stdc++.h>
using namespace std;

void lengthLongestSubarrayWithGivenSum(int arr[] , int n){
	
	int sum = 0;
	// sum - s =sum --> 
	
	//using unoredered map to store sum and its first occured index
	
	unordered_map <int,int> sums;
	int sum = 0;
	int maxLen=0;
	int len;
	sums[0]=-1;
	for(int i=0; i < n; i++ ){
		
		sum += arr[i];
		
		auto it = sums.find(sum);
		
		if(it != sums.end() ){
			
			len = i - ( it -> second + 1 );
			if(len>maxLen){
				maxLen=len;
			}
		}
		sums[sum]=i;
	}
	cout<<maxLen<<endl;
	
}

int main(){
	int arr[] = {5,6,-5,5,3,5,3,-2,0};
	int sum = 
}

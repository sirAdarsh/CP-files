//https://www.techiedelight.com/longest-alternating-subarray-problem/

#include<iostream>
using namespace std;

int longestAltSubarray(int arr[],int size){
	
	int max_len=1;
	int curr_len=1;
	
	for(int i=1;i<size;i++){
		
		if(arr[i]*arr[i-1]<0){
			curr_len++;
			if(curr_len>max_len){
			max_len=curr_len;
		}
		}
		else{
			curr_len=1;
		}
	}
	
	return max_len;
}
int main(){
	int arr[8]={1,-2,6,4,-3,2,-4,-3};
	cout<<longestAltSubarray(arr,8);
}

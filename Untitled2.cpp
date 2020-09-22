#include<bits/stdc++.h>
using namespace std;

int main(){
	int tc;
	cin>>tc;
	while(tc--){

		int numDenms, maxSum;
		cin>>numDenms>>maxSum;

		int denms[numDenms];

		for(int i=0;i<numDenms;i++){
			cin>>denms[i];
		}
		
		int ans[numDenms]={};
		
		for(int i=0; i<numDenms;i++){
			
			if(maxSum % denms[i] == 0){
				continue;
			}
			else{
				ans[i]=ceil((float)maxSum/denms[i]);
			}		
		}
		
		int countZeroes=0;
		for(int i=0; i<numDenms; i++){
			if(ans[i]==0){
				countZeroes++;
			}
		}
		
		if(countZeroes == numDenms){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<" ";
		}
		for(int i=0;i<numDenms;i++){
			cout<<ans[i]<<" ";
		}
		
		
		

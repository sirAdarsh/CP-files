#include<bits/stdc++.h>
using namespace std;

int main(){
	int tc;
	cin>>tc;
	while(tc-->0){

		long numDenms, maxSum;
		cin>>numDenms>>maxSum;

		long denms[numDenms];

		for(int i=0;i<numDenms;i++){
			cin>>denms[i];
		}

		long ans[numDenms]={};
		double checker;

		for(int i=0; i<numDenms;i++){

			if(maxSum % denms[i] == 0){
				continue;
			}
			else{
                    checker=(double)maxSum/denms[i];
            		ans[i]=checker+1;
				break;
			}
		}

		long countZeroes=0;
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
			for(int i=0;i<numDenms-1;i++){
			cout<<ans[i]<<" ";
		}
		cout<<ans[numDenms-1]<<endl;
		}



	}
}


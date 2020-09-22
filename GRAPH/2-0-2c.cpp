#include<iostream>
using namespace std;

int solve(int arr[],int n,int sum){
	
	
	int dp[100]={};
			
			int times=0;
		
			again:
				{
					
				
		
			for(int i=0;i<n;i++){
				
				
				for(int j=0;j<n;j++){
					
					for(int k=0;k<n;k++){
						
						int testSum = 0;
						
						if( dp[arr[i]] == 1 || dp[arr[j]] == 1 || dp[arr[k]] ==1){
							continue;
						}
						else{
							testSum += arr[i]+arr[j]+arr[k];
							
							if(testSum == sum/3){
								cout<<arr[i]<<' '<<arr[j]<<" "<<arr[k]<<endl;
								
								times++;
								dp[arr[i]]=1;
								dp[arr[j]]=1;
								dp[arr[k]]=1;
								if(times<3){
									goto again;
								}
								
								if(times==3){
									
									return 1;
								}
							
							
						}
					}
				}
			}
	
	}
	
	return 0;
} //again
	
}




int main(){
	int t;
	cin >> t;
	while(t--){
		
		int n;
		cin >> n;
		
		int arr[n];
		int sum = 0;
		for(int i=0;i<n;i++){
			cin >> arr[i];
			sum += arr[i];
		}
		if(sum%3!=0){
			cout<<0<<endl;
			continue;
		}
		
		else{
			
			cout<<solve(arr,n,sum)<<endl;
		}
		
		
		
	}
}

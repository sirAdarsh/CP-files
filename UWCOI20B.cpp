#include<iostream>
using namespace std;

int countEvensAfter(long long a,long long arr[],long long n){
 long count=0;
	for(int i=a+1;i<n;i++){
		if(arr[i]==1){
			count++;
		}
	}
	return count;
}
int main(){
	
	long long tc;
	cin>>tc;
	while(tc--){
		
		long long num;
		cin>>num;
		long long temp;
		
		long long ans=0;
		long long array[num]={};
		for(long long i=0;i<num;i++){
			cin>>temp;
			if(temp%2==0){
				array[i]=1;
			}
		}
		
		
		for(long long i=0;i<num-1;i++){
			
			if(array[i]==0){
				ans=ans+countEvensAfter(i,array,num);
			}
			else{
				ans=ans+((num-1)-i - countEvensAfter(i,array,num));
			}
			
		}
		cout<<ans<<endl;
		// counting of evens after a given index is working all good
	}
	
}

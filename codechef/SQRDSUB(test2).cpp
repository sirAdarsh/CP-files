#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		
		int n;
		cin>>n;
		int arr[n+1];
		for(int i=1;i<=n;i++){
			cin>>arr[i];
			if(arr[i]%2==0){
				arr[i]/=2;
			}
			else{
				arr[i]=0;
			}
			
		}
		
		// storing indexes of non zeroes;
		vector<int> nonZeros;
		
		for(int i=1;i<=n;i++){
			if(arr[i]!=0){
				nonZeros.push_back(i);
			}
		}
		
//		for(auto i:nonZeros){
//			cout<<i<<" ";
//		}  // 1 4 7
		
		int zerosPerm=0;
		int z;
		for(auto it=nonZeros.begin();it!=nonZeros.end();it++){
			
			if(it!=nonZeros.begin()){
				
				z= *(it)- *(it-1) - 1;
				zerosPerm += (pow(2,z)-1);
			}
			
		}
//				cout<<zerosPerm<<endl;

		z = n - nonZeros.back();
		if(z>0){
			 zerosPerm += (pow(2,z)-1);
		}
//		cout<<zerosPerm;
		
		int nonZerosPerm=0;
		
		for(auto it=nonZeros.begin();it!=nonZeros.end();it++){
			
			if(it!=nonZeros.begin()){
				nonZerosPerm += (n- (*(it)-*(it-1)));
			}
			
		}
			
		cout<<(nonZerosPerm+zerosPerm)<<endl;
		
		
	}
}

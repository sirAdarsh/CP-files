#include<iostream>
using namespace std;
int miain(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		
		if((n/2)%2){
			cout<<"NO"<<endl;
			continue;
		}else{
			
			int arr[n+1];
			int p =2;
			int sumEven = 0;
			for(int i=1;i<=n/2;i++){
				arr[i] = 2*i;
				sumEven+=arr[i];
			}
			p=-1;
			int sumOdd =0;
			for(int i=(n/2)+1;i<n;i++){
				p+=2;
				arr[p] = p;
				sumOdd += arr[p];
			}
			arr[n] = ( sumEven - sumOdd );
			
			for(int i=1;i<=n;i++){
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
		
	}
}

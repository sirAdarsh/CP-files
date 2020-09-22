#include<iostream>
using namespace std;
int main(){
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
			int sumEven = 0;
			for(int i=1;i<=n/2;i++){
				arr[i] = (2*i);
				sumEven+=arr[i];
			}
			int p=-1;
			int sumOdd =0;
			for(int i=(n/2)+1;i<n;i++){
				p+=2;
				arr[i] = p;
				sumOdd += arr[i];
				cout<<arr[p];
			}
			arr[n] = ( sumEven - sumOdd );
//			cout<<arr[n];
			for(int i=1;i<n;i++){
				cout<<arr[i]<<" ";
			}
			cout<<arr[n];
			cout<<endl;
		}
		
	}
}

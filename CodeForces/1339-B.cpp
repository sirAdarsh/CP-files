#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n+1];
		for(int i=1;i<=n;i++){
			cin >> arr[i];
		}
		if(n%2){
			cout<< arr[(n/2)+1];
			int j=1;
			int k =n/2;
			
			while(k--){
				cout<<" "<<arr[(n/2)+1+j]<<" ";
				cout <<arr[(n/2)+1-j];
				j++;
			}
		}
//			int j=1;
//			int k =n/2;
//			n+=1;
//			while(k--){
//				cout<<" "<<arr[(n/2)+j]<<" ";
//				cout <<arr[(n/2)-j];
//				j++;
//			}
//		}
	}
}

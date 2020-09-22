#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin>>n;
		int min=8;
		int max=1;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int prev = arr[0];
		int c=1;
		for(int i=1;i<n;i++){
			if(arr[i]-prev<=2){
				prev=arr[i];
				c++;
				if(i==n-1){
					if(c<min){
						min=c;
					}
					if(c>max){
						max=c;
					}
				}
			}else{
				if(c<min){
					min=c;
				}
				if(c>max){
					max=c;
				}
				c=1;
				prev=arr[i];
				if(i==n-1){
					if(c<min){
						min=c;
					}
					if(c>max){
						max=c;
					}
				}
			}
		}
		cout<<min<<" "<<max<<endl;
	}
}

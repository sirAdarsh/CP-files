#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	
	int i=0,
		j=n-1;
	
	int s=0,d=0;
	int t=0;
	int num;
	
	while(i<=j){
		t++;
		
		if(arr[i] > arr[j]){
			num = arr[i];
			i++;
		}else{
			num=arr[j];
			j--;
		}
		
		if(t%2){
			s+=num;
		}else{
			d+=num;
		}
	}
	
	cout<<s<<" "<<d<<endl;
}

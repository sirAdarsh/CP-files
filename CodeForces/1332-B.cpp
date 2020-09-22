#include<iostream>
using namespace std;
int gcd(int a,int b){
	if(a==0){
		return b;
	}
	else{
		return gcd(b%a,a);
	}
}

int main(){
	int t;
	cin>>t;
	int n;
	cin>>n;
	int flag[n]={};
	
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int a=1;
	
	int check[n]={};
	
	
	for(int i=0;i<n;i++){
		if(arr[i]!=0){
			flag[i]=a;
			if(i!=n-1){
				for(int j=i+1;j<n;j++){
				if(gcd(arr[i],arr[j])!=1){
//					cout<<arr[i]<<" "<<arr[j];
					flag[j]=a;
					arr[j]=0;
					}
				}
				arr[i]=0;	
			}
		}
		a++;
	}
	
	
	
//cout<<gcd(4,9);
	for(int i=0;i<n;i++){
		cout<<flag[i]<<" ";
	}
}

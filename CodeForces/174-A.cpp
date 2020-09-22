#include<iostream>
using namespace std;
int main(){
	int n;
	float b;
	cin >> n >> b;
	
	float arr[n];
	
	float sum=0;
	
	for(int i=0;i<n;i++){
		cin >> arr[i];
		sum+=arr[i];
	}
	
	float num = (sum+b)/n;
	int sumP=0;
	
	bool e=false;
	
	for(int i = 0; i<n ; i++){
		arr[i] = num-arr[i];
		if(arr[i]<0){
			e=true;
			cout<<-1<<endl;
			break;
		}
		sumP+=arr[i];
	}
	if(!e)
	for(int i=0;i<n;i++)
	printf("%.6f\n",arr[i]);

	
	
}

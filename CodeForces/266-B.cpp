#include<iostream>
using namespace std;
int main(){
	int n,t;
	cin >> n >> t;
	char arr[n];
	for(int i =0;i<n;i++){
		cin >> arr[i];
	}
	while(t--){
		
		int InG=-1;
		int InB=-1;
		
		for(int i=0;i<n;i++ ){
			
			if(arr[i]=='B'){
				InB=i;
				continue;
			}
			if(arr[i]=='G' && InB!=-1){
				char temp = arr[i];
				arr[i] = arr[InB];
				arr[InB] = temp;
			}
			
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
	cout<<endl;
}

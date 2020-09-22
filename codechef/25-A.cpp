#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int arr[n];
	int lastOddIndex,lastEvenIndex;
	for(int i=0;i<n;i++){
		cin >> arr[i];
		if(arr[i]%2){
			lastOddIndex=i;
		}else{
			lastEvenIndex=i;
		}
	}
	
	int even=0,odd=0;
	for(int i=0;i<n;i++){
		if(arr[i]%2==0){
			even++;
		}else{
			odd++;
		}
		if(even>1 || odd>1){
			break;
		}
	}
	string s;
	if(even>1){
		s="odd";
	}else {
		s="even";
	}
	if(s=="even"){
		cout<<lastEvenIndex+1<<endl;
	}else{
		cout<<lastOddIndex+1<<endl;
	}
	
}

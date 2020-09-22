//https://www.techiedelight.com/find-missing-number-array-without-extra-space/

#include<iostream>
using namespace std;

void missingNum(int arr[],int size){
	
	int XOR=0;
	for(int i=0;i<size;i++){
		XOR^=arr[i];
	}
	for(int i=1;i<=size+1;i++){
		XOR^=i;
	}
	cout<<"The missing number is= "<<XOR<<endl;
	
}

int main(){
	int arr[5]={1,3,5,4,6};
	missingNum(arr,5);
}

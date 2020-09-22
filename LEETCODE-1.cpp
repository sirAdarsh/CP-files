#include<iostream>
using namespace std;
int main(){
	int arr[]={1,2,2,1,3,4,4};
	int a=0;
	for(int i=0;i<7;i++){
		a ^= arr[i];
	}
	cout<<a<<endl;
}

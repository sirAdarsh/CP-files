//inserting a number in an already sorted array
#include<iostream>
using namespace std;

int main(){
	int arr[10]={4,8,13,26,20,25,28,33};
	int num;
	cin>>num;
	int i=7;
	while(num<arr[i]){
		
		if(num<arr[i]){
			arr[i+1]=arr[i];
			arr[i]=num;
		}
		i--;
	}
	for(auto x:arr){
		cout<<x<<" ";
	}
	
}

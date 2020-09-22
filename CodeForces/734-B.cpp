#include<bits/stdc++.h>
using namespace std;
int main(){
	int k2,k3,k5,k6;
	cin>>k2>>k3>>k5>>k6;
	
	int arr[4]={k2,k3,k5,k6};
	
	//minimum of k2,k5,k6
	
	int min256 = min(k2,k5);
	min256 = min(min256,k6);
	
	int s1 = min256 * (256);
	
	k2 -= min256;
	int min32 = min(k2,k3);
	
	int s2 = min32 * (32);
	
	int s = s1 + s2;
	cout<<s<<endl;
	
	
		
}

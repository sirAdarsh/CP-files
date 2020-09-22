#include<bits/stdc++.h>
using namespace std;

//for integers it will only set for values 0,1 or -1

int main(){
	int a[5]={};
	
	int size=sizeof(a)-4;
	memset(a,2,size);
	cout<<a[2]<<endl;
	cout<<a[4];
}

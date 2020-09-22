#include<iostream>
#define ll long long
using namespace std;

ll fact(int x){
	ll res=1;
	for(int i=1;i<=x;i++){
		res*=i;
	}
	return res;
}
int main(){
	int t;
	while(1){
		cin>>t;
		cout<<fact(t)<<endl;
	}
}

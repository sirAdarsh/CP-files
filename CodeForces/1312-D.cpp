#include<iostream>
#define l long
using namespace std;
l fact(int n){
	l res=1;
	for(l i=2;i<=n;i++){
		res=res*1;
	}
	return res;
}
l nCr(l n,l r){
	return fact(n)/(fact(r)*fact(n-r));
}
int main(){
	
	l n,m;
	cin>>n>>m;
	l counts=0;
	l distincts=n-1;
	while(m>=distincts){
		counts+= m-1  ;
		if(n-3>0){
			counts+= nCr(n-3,n-m);
		}
		m--;
	}
	cout<<counts<<endl;
}

#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		
		double ans=0;
		if(x2>x1){
		ans = ( (x2*y1) - (x1*y1) );
		ans= ans/(y1+y2);
		cout<<x1+ans<<endl;
	}
		if(x1>x2){
			
			ans=(x1*y2) - (x2*y2);
			ans=ans/(y1+y2);
			cout<<x2+ans<<endl;	
		}
		if(x1==x2){
			cout<<endl;
		}
	}
}

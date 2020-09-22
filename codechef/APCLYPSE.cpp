#include<iostream>
using namespace std;

int maxFour(int a , int b, int c ,int d){
	
	a = max(a,b);
	a = max(a,c);
	a = max(a,d);
	return a;
	
}

int main(){
	
	int t;
	cin >> t;
	while(t--){
		
		int r,c;
		cin >> r >> c;
		int r0,c0;
		cin >> r0 >> c0;
		
		int a,b,C,d;
		r0+=1;
		c0+=1;

		a = (r0-1)+(c0-1);
		b = (r-r0)+(c0-1);
		C = (r0-1)+(c-c0);
		d = (r-r0)+(c-c0);
		cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
		cout<<maxFour(a,b,C,d)<<endl;
		
	}
	
}

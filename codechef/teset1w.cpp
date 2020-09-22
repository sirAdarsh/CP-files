#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		int A,B;
		cin>>A>>B;
		int sum=A+B;
		
		int a,b,c,d;
		
		b=A%10;
		A/=10;
		a=A%10;
		
		d=B%10;
		B/=10;
		c=B%10;
		
		
		int bigger=A;
		if(B>A){
			bigger=B;
		}
		
		//swap 1
		int a1,b1,c1,d1;
		a1=d;
		d1=a;
		int tempSum=(a1*10 +b +c*10 + d1);
		if(tempSum>sum){
			sum=tempSum;
		}
		
		b1=c;
		c1=b;
		tempSum=(a*10 +b1 +c1*10 +d);
		if(tempSum>sum){
			sum=tempSum;
		}
		
		
		cout<<sum<<endl;
	}
}

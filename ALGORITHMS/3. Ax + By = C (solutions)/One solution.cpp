#include<bits/stdc++.h>
#define ll long long
using namespace std;

//first checking if solutin exist
// as any linear combination of two numbers is divisible by their GCD

ll gcd(int a,int b,int *x,int *y){
	
	if(a==0){
		x=0;
		y=1;
		return b;
	}
	int x1,y1;
	int res=gcd(a,b,&x1,&y1);
	
	x=y1-(b/a)*y1;
	y=x1;
	return res;
}

bool solve(int a,int b,int c,int *x0,int *y0){
	
	int g=gcd(abs(a),abs(b),x0,y0);
	
	if(c%g){
		//solution exists
		*x0 = (*x0) * (c/g);
		*y0 = (*y0) * (c/g);
	}
	
	if(a<0){
		*x0=-(*x0);
	}
	if(b<0){
		*y0=-(*y0);
	}
	return true;
}

int main(){
	int a,b,c,x,y;
	cin>>a>>b>>c;
	
}


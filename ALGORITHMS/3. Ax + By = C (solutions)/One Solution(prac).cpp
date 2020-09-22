#include<bits/stdc++.h>
using namespace std;

int gcdExtended(int a,int b,int *x,int *y){
	
	if(a==0){
		*x=0;
		*y=1;
		return b;
	}
	int x1,y1;
	int gcd=gcdExtended(b%a,a,&x1,&y1);
	*x=y1-(b/a)*x1;
	*y=x1;
	return gcd;
}
bool solve(int a,int b,int c,int *x,int *y){
	int g=gcdExtended(abs(a),abs(b),x,y);
	
	if(c%g){
		return false;
	}
	*x = *x*(c/g);
	*y = *y*(c/g);
	
	if(a<0){
		*x=-(*x);
	}
	if(b<0){
		*y=-(*y);
	}
	return true;
}

int main(){
	int a,b,c,x,y;
	cin>>a>>b>>c;
	
//	cout<<gcdExtended(a,b,&x,&y);
	if(solve(a,b,c,&x,&y)){
		cout<<"x = "<<x<<" y = "<<y<<endl;
	}
	else{
		cout<<" No integer solution."<<endl;
	}
}


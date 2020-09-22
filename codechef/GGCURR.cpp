//solutions of Ax+By=c
#include<iostream>
using namespace std;
int gcd(int a,int b,int *x,int *y){
	if(a==0){
		*x=0;
		*y=1;
		return b;
	}
	
	int x1;
	int y1;
	int g=gcd(b%a,a,&x1,&y1);
	*x=y1-(b/a)*x1;
	*y=x1;
	return g;
}
bool solve(int a,int b,int c,int *x,int *y){
	int g=gcd(a,b,x,y);
	int x2,y2;
	x2=*x;
	y2=*y;
	if(c%g==0){
		*x=*x*(c/g);
		*y=*y*(c/g);
	}
	
	if(*x<0){
		int k=1;
		while((c/g)>=k*(a/(y2))){
			if((c/g + k*(b/x2))<0){
				break;
			}
				k++;
		}
		*x=*x + (k*b);
		*y = *y -(k*a);
	}
	if(*y<0){
		int k=1;
		while((c/g)>=k*(b/(x2))){
			if((c/g + k*(a/y2))<0){
				break;
			}
			k++;
		}
		*y = *y +(k*a);
		*x=*x - (k*b);
	}
//	cout<<*x<<" "<<*y;
	if((*x)>=0 && (*y)>=0){
		return true;
	}
	return false;
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int count=0;
		int N,a,b;
		cin>>N>>a>>b;
		while(N--){
			
			int x,y;
			int c;
			cin>>c;
			if(solve(a,b,c,&x,&y)){
				count++;
			}
		}
		cout<<count<<" "<<endl;
	}
	
}

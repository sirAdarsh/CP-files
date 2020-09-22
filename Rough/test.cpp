#include<iostream>
using namespace std;

//finding integer solution of Ax+By=C

void solve(int a,int b,int c,int *x,int *y){
	
	if(a==0){
		*x=0;
		*y=(c/b);
		return;
	}
	
	int x1,y1;
	
	solve( b%a , a , c, &x1, &y1);
	
	*x=y1-(b/a)*x1;
	*y=x1;
}
int main(){
	int a,b,c,x,y;
	cin>>a>>b>>c;
	solve(a,b,c,&x,&y);
	cout<<x<<" "<<y<<endl;
}


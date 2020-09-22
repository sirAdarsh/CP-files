#include<iostream>
using namespace std;

void Left(int *x,int *y){
	*x=(*x)-1;
}
void Right(int *x,int *y){
	*x=(*x)+1;
}
void Up(int *x,int *y){
	*y=(*y)+1;
}
void Down(int *x,int *y){
	*y=(*y)-1;
}
void solve(int *x,int *y,char c){
	if(c=='L'){
		Left(x,y);
		return;
	}
	if(c=='R'){
		Right(x,y);
		return;
	}
	if(c=='U'){
		Up(x,y);
		return;
	}
	if(c=='D'){
		Left(x,y);
		return;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int x=0,y=0;
		int size;
		cin>>size;
		char prev='A';
		char inst;
		for(int i=0;i<size;i++){
			cin>>inst;
			if(inst!=prev){
				{
					if(inst=='L' && prev!='R' ){
						solve(&x,&y,inst);
					}
					if(inst=='R' && prev!='L'){
						solve(&x,&y,inst);
					}
					if(inst=='U' && prev!='D'){
						solve(&x,&y,inst);
					}
					if(inst=='D' && prev!='U'){
						solve(&x,&y,inst);
					}
				}	
			}
			prev=inst;
		}
		cout<<x<<" "<<y<<endl;
	}
}

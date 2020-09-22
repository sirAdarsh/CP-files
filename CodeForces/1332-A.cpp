#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c,d;
		int x,y,x1,y1,x2,y2;
		cin>>a>>b>>c>>d;
		cin>>x>>y>>x1>>y1>>x2>>y2;
		if(a!=0 || b!=0 || c!=0 ||d!=0){
			if(a!=0 || b!=0){
				if(x1==x2){
					cout<<"No"<<endl;
					continue;
				}
			}
			if(c!=0 || d!=0){
				if(y1==y2){
					cout<<"No"<<endl;
				}
			}
		}
		
		
		
		if( (y+d-c)<=y2 && (y+d-c)>=y1  && (x-a+b)>=x1 && (x+b-a)<=x2){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
		
	}
}

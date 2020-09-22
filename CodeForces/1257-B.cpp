#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int x,y;
		cin >>x >> y;
		if(y<=x){
			cout<<"YES"<<endl;
		}else{
			
			if(x==1){
				if(y==1){
					cout<<"YES"<<endl;
				}else{
					cout<<"NO"<<endl;
				}
				continue;
			}
			
			if(x==2 || x==3 ){
				if(y<=3){
					cout<<"YES"<<endl;
				}else{
					cout<<"NO"<<endl;
				}
			}
			else{
				cout<<"YES"<<endl;
			}
			
		}
	}
}

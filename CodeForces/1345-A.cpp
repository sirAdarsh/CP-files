#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b;
		cin >> a >> b;
		int c =a;
		if(b<a){
			c=b;
		}
		if( c==1 ){
			cout<<"YES"<<endl;
		}
		else{
			if( c>2 ){
				cout<<"NO"<<endl;
			}
			else if( c==2 && a==2 && b==2){
				cout<<"YES"<<endl;
			}else{
				cout<<"NO"<<endl;
			}
		}
	}
}

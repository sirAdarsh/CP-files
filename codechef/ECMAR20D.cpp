#include<iostream>
using namespace std;
void solve(int n){
	if(n-1400<0){
		cout<<"1"<<endl;
	}
		
		else if(n-1600<0){
			cout<<"2"<<endl;
		}
		else if(n-1800<0){
			cout<<"3"<<endl;
		}
		else if(n-2000<0){
			cout<<"4"<<endl;
		}
		else if(n-2200<0){
			cout<<"5"<<endl;
		}
		else if(n-2500<0){
			cout<<"6"<<endl;
		}
		else if(n-4000<0){
			cout<<"7"<<endl;
		}
	}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		solve(n);
	}
}

#include<iostream>
#define ll long long
using namespace std;
int main(){
	ll n,m;
	cin >> n >> m;
	ll room[n+1]={};
	for(int i=1;i<=n;i++){
		cin >> room[i];
	}
	
	for(int i=1;i<=n;i++){
		room[i] = room[i]+room[i-1];
	}
	ll let[m];
	for(int j=0;j<m;j++){
		cin >> let[j];
	}
	int j=1;
	for(int i=0;i<m;i++){
		for(;j<=n;j++){
			if( room[j-1] < let[i] && room[j] >= let[i] ){
				cout << j<<" "<<let[i] - room[j-1]<<endl;
				j--;
				break;
			}
			
		}
		
		
	}
	
}

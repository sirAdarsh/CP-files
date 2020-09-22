#include<iostream>
using namespace std;
int main(){
	
	int t;
	cin >> t;   // a[i][j]
	while(t--){
		
		int a[9][9];
		string s;
		for(int i=0;i<9;i++){
			cin >> s;
			for(int j=0;j<9;j++){
				a[i][j] = s[j]-48;
				if(a[i][j]==1){
					a[i][j]=2;
				}
			}
		}
		for(int i=0;i<9;i++){
			for(int j=0;j<9;j++){
				cout<<a[i][j];
			}cout<<endl;
		}
		
	}
	
}

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
			}
		}
		
		
		a[0][0]=a[1][1];
		a[1][4]=a[2][5];
		a[2][8]=a[0][6];
		
		a[4][1]=a[5][2];
		a[5][5]=a[3][3];
		a[3][6]=a[4][7];
		
		a[8][2]=a[6][0];
		a[6][3]=a[7][4];
		a[7][7]=a[8][8];
		
		
		
		
		for(int i=0;i<9;i++){
			for(int j=0;j<9;j++){
				cout<<a[i][j];
			}cout<<endl;
		}
		
	}
	
}

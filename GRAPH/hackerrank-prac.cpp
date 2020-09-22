#include<bits/stdc++.h>
using namespace std;

// USING ADJACENCY MATRIX


bool ar[1001][1001];
void initialize(){
	for(int i=0;i<1001;i++){
		for(int j=0;j<1001;j++){
			ar[i][j]=false;
		}
	}
}

int main(){
	int n,m;
	cin >> n >> m;
	while(m--){
		int a,b;
		cin >> a >> b;
		ar[a][b]=true;
		ar[b][a]=true;
	}
	int q;
	cin >> q;
	while(q--){
		int a,b;
		cin>> a >> b;
		if(ar[a][b]==true){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}



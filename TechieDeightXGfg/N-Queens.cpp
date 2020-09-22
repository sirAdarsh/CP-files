#include<iostream>
using namespace std;

int b[10][10]={};

bool is_attacked(int r,int c, int M){
	
	for(int i=1;i<=M;i++){
		for(int j=1;j<=M;j++){
			
			if( i==r || j==c || (i+j)==(r+c) || (i-j)==(r-c) ){
				if(b[i][j]==1){
					return true;
				}
			}
		}
	}
	return false;
}

bool NQueens(int M,int N){
	
	if( N==0 ){
		return true;
	}
	for(int i=1;i<=M;i++){
		for(int j=1;j<=M;j++){
			
			if(is_attacked(i,j,M)){
				continue;
			}
			
			b[i][j]=1;
			
			if(NQueens(M,N-1)){
				return true;
			}
			
			b[i][j]=0;
		}
	}
	return false;
	
}

void display(int M){
	for(int i=1;i<=M;i++){
		for(int j=1;j<=M;j++){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int M;
	cin>>M;
	for(int i=1;i<=M;i++){
		for(int j=1;j<=M;j++){
			b[i][j]=0;
		}
	}
	
//	if(M<3){
//		cout<<"NO"<<endl;
//	}
	
//	else {
	
	if(NQueens(M,M)){
		cout<<"YES"<<endl;
		display(M);
	}else{
		cout<<"NO"<<endl;
	}
//}
	
}






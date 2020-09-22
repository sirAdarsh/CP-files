#include<bits/stdc++.h>
using namespace std;

static int board[9][9]={};

int main(){
	char h[2];
	char k1[2];
	for(int i=0;i<2;i++){
		cin>>h[i];
	}
	for(int i=0;i<2;i++){
		cin>>k1[i];
	}
	
//	int board[9][9];
//	for(int i=0;i<9;i++){
//		for(int j=0;j<9;j++){
//			board[i][j]=0;
//		}
//	}
	
	int rowH=h[1]-48;
	int colH=h[0]-96;
	

	int rowK=k1[1]-48;
	int colK=k1[0]-96;
//	cout<<rowH<<" "<<colH<<endl;
//	cout<<rowK<<" "<<colK;
	
	for(int i=1;i<=8;i++){
		board[rowH][i]=1;
		board[i][colH]=1;
	}
	
	int row,col;
	//for H
	row=rowH+2;
	col=colH+1;
	if(row>0 && row<9 && col>0 && col<9){
		board[row][col]=1;
	}
	
	row=rowH+2;
	col=colH-1;
	if(row>0 && row<9 && col>0 && col<9){
		board[row][col]=1;
	}
	
	row=rowH-2;
	col=colH+1;
	if(row>0 && row<9 && col>0 && col<9){
		board[row][col]=1;
	}
	
	row=rowH-2;
	col=colH-1;
	if(row>0 && row<9 && col>0 && col<9){
		board[row][col]=1;
	}
	
	row=rowH+1;
	col=colH+2;
	if(row>0 && row<9 && col>0 && col<9){
		board[row][col]=1;
	}
	
	row=rowH+1;
	col=colH-2;
	if(row>0 && row<9 && col>0 && col<9){
		board[row][col]=1;
	}
	
	
	row=rowH-1;
	col=colH+2;
	if(row>0 && row<9 && col>0 && col<9){
		board[row][col]=1;
	}
	
	row=rowH-1;
	col=colH-2;
	if(row>0 && row<9 && col>0 && col<9){
		board[row][col]=1;
	}
	
	//For K
	row=rowK+2;
	col=colK+1;
	if(row>0 && row<9 && col>0 && col<9){
		board[row][col]=1;
	}
	
	row=rowK+2;
	col=colK-1;
	if(row>0 && row<9 && col>0 && col<9){
		board[row][col]=1;
	}
	
	row=rowK-2;
	col=colK+1;
	if(row>0 && row<9 && col>0 && col<9){
		board[row][col]=1;
	}
	
	row=rowK-2;
	col=colK-1;
	if(row>0 && row<9 && col>0 && col<9){
		board[row][col]=1;
	}
	
	row=rowK+1;
	col=colK+2;
	if(row>0 && row<9 && col>0 && col<9){
		board[row][col]=1;
	}
	
	row=rowK+1;
	col=colK-2;
	if(row>0 && row<9 && col>0 && col<9){
		board[row][col]=1;
	}
	
	
	row=rowK-1;
	col=colK+2;
	if(row>0 && row<9 && col>0 && col<9){
		board[row][col]=1;
	}
	
	row=rowK-1;
	col=colK-2;
	if(row>0 && row<9 && col>0 && col<9){
		board[row][col]=1;
	}
	
	int count=-1;
	
	for(int i=1;i<=8;i++){
		for(int j=1;j<=8;j++){
			if(board[i][j] ==0 ){
				count++;
			}
		}
	}
	
	cout<<count;
	
}

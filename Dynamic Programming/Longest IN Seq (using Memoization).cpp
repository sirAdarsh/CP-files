// Longest Common Subsequence using memoization

#include<bits/stdc++.h>
using namespace std;
 
short lcs[1000][1000];
 
int max(int a,int b){
	if(a>b){
		return a;
	}
		return b;
}
 
int LCS(int i, int j, string s1, string s2){
	
	if(i==s1.size() || j==s2.size()){
		return 0;
	}
	
	else if( s1[i] == s2[j] ){
		if(lcs[i+1][j+1]!=-1){
			return 1+lcs[i+1][j+1];
		}
		else{
			lcs[i+1][j+1]= LCS(i+1,j+1,s1,s2);
			return 1+lcs[i+1][j+1];
		}
	}
	
	else {
		
		if(lcs[i][j+1]==-1){
			lcs[i][j+1] = LCS(i,j+1,s1,s2);
		}
		if(lcs[i+1][j]==-1){
			lcs[i+1][j] = LCS(i+1,j,s1,s2);
		}
		
		return max(lcs[i][j+1],lcs[i+1][j]);
	}
}



int main(){
	string s1;
	string s2;
	
	cin >> s1 >> s2;
	
	
	memset(lcs,-1,sizeof(lcs));
	
	cout << LCS(0,0,s1,s2);
	
}


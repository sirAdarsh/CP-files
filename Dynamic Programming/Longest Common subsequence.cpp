#include<iostream>
using namespace std;

int max(int a,int b){
	if(a>b){
		return a;
	}else{
		return b;
	}
}

int LCS(int i, int j, string s1, string s2){
	
	if(i==s1.size() || j==s2.size()){
		return 0;
	}
	else if( s1[i] == s2[j] ){
		return 1+LCS(i+1,j+1,s1,s2);
	}
	else{
		return max(LCS(i,j+1,s1,s2),LCS(i+1,j,s1,s2));
	}
	
}

int main(){
	
	string s1;
	string s2;
	cin >> s1 >> s2;
	
	
	cout<<LCS(0,0,s1,s2);
}




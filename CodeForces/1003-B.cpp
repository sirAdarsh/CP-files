#include<bits/stdc++.h>
using namespace std;
int main(){
	float a,b,x;
	cin >> a >> b >> x;
	
	// a -> 0 , b-> 1
	
	if(a>=b){
		
		string mainStr = "";
		
		int n = 0;
		
		while(mainStr.size()!=x+1){
			mainStr += n + 48 ;
			n = abs( n-1 ) ;
		}
		
		int countZero = ceil((x+1)/2);
		int countOne = (x+1)-countZero;
		
		for(int i=0;i< (a - countZero);i++ ){
			cout<<0;
		}
		if(mainStr[x] == '0' ){
			for(int i=0;i<x;i++){
				cout<<mainStr[i];
			}
			for(int i=0;i< (b-countOne); i++){
				cout<<1;
			}
			cout<<mainStr[x];
		}else{
			cout<<mainStr;
			for(int i=0;i< (b-countOne); i++){
				cout<<1;
			}
		}
		
		
		
	}else{
		
		string mainStr = "";
		
		int n = 1;
		
		while(mainStr.size()!=x+1){
			mainStr += n + 48 ;
			n = abs( n-1 ) ;
		}
		
		int countOne = ceil((x+1)/2);
		int countZero = (x+1)-countOne;
		
		for(int i=0;i< (b-countOne); i++){
			cout<<1;
		}
		
		if(mainStr[x]=='1'){
			
			for(int i=0;i<x;i++){
				cout<<mainStr[i];
			}
			for(int i=0;i< (a-countZero); i++){
				cout<<0;
			}
			cout<<mainStr[x];
		}else{
			cout<<mainStr;
			for(int i=0;i< (a - countZero);i++ ){
				cout<<0;
			}
		}
		
	}
}

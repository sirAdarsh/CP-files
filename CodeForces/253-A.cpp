#include<iostream>
using namespace std;
int main(){
//	
//	    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    
	int n,m;
	cin>>n>>m;
	int min = n;
	int diff = (m-n);
	if(m<n){
		min=m;
		diff = (n-m);
	}
	
	string str="";
	
	
	if(n>=m){
		while(min--){
			str += "BG";
		}
		while(diff--){
			str += "B";
		}
	}
	else if(m>n){
		while(min--){
			str += "GB";
		}
		while(diff--){
			str += "G";
		}
	}
	cout<<str<<endl;
	
}

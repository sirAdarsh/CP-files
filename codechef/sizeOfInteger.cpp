//counting distinct numbers in a numnber
#include<bits/stdc++.h>
using namespace std;

int main(){
	
	unordered_map<int,int> map;
	int a;
	while(1){
	
	cin>>a;
	
	int b;
	while(a!=0){
		b=a%10;
		map[b];
		a=a/10;		
	}
	
	cout<<map.size()<<endl;;
}
}

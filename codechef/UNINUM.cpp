#include<bits/stdc++.h>

using namespace std;

int checkNotRepeated(int x){
	unordered_map<int,int> map;
	int y;
	int count=0;
	while(x!=0){	
		int y=x%10;
		map[y];
		x=x/10;
		count++;
	}	
	if(map.size()==count){
		return 1;
	}
	return 0;
}


int main(){
	
	int l,r;
	cin>>l>>r;
	
	//if l and r are consecutive
	if((r-l)==1){
		cout<<r;
	}
	
	//if l+r is even
	int x;
	if((l+r)%2==0){
		x=(l+r)/2;
	}
	
	//if l+r is odd
	else{
		x=ceil(l+r)/2;
	}
	
	if(checkNotRepeated(x)){
		cout<<x;
	}
	else{
		cout<<-1;
	}
	
}

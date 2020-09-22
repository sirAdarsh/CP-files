#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> Pa;
int main(){
	
	unordered_multimap<int,int> sums;
	sums.insert(pair<int,int>(2,3));
	
	auto it = sums.find(2);
	if(it != sums.end()){
		
		cout<<"d";
		
	}
}

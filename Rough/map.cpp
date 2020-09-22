#include<bits/stdc++.h>
using namespace std;

int main(){
	unordered_map<int,int> map;
	map[1]++;
	cout<<map.find(1)->second;
}

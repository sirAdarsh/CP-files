#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int arr[n];
	unordered_map<int,int> map;
	int p;
	for(int i=0;i<n;i++){
		cin >> p;
		map[p]++;
	}
	for(int i=1;i<=3000;i++){
		if(i==3000){
			cout<<3001<<endl;
			break;
		}
		if(map.find(i)==map.end()){
			cout<<i<<endl;
			break;
		}
	}
}

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int arr[n];
	unordered_map<int,int> map;
	for(int i=0;i<n;i++){
		cin >> arr[i];
		map[arr[i]]++;
	}
	int max=INT_MIN;
	for(auto i:map){
		if(i.second>max){
			max=i.second;
		}
	}
	cout<<max<<" "<<map.size()<<endl;
}

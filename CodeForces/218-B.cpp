#include<bits/stdc++.h>
using namespace std;
bool comp(int a,int b){
		if(a>b){
			return true;
		}return false;
	}

int main(){
	int n,m;
	cin >> n >> m;
	int n2 = n;
	int arr[m];
	int arr2[m];
	for(int i=0;i<m;i++){
		cin >> arr[i];
		arr2[i] = arr[i];
	}
	
	sort(arr,arr+m);
	
	int min = 0;
	
	for( int i=0; i<m ;i++ ){
		while(n>0  &&  arr[i] != 0 ){
			
			n--;
			
			min += arr[i];
			
			arr[i]--;
		}
		if(n==0){
			break;
		}
		
	}

	int max = 0;
	
	unordered_map<int,int> map; //<number,occurances>
	
	
		
	sort ( arr2,arr2+m, comp);
	
	
	
	for(int i=0;i<m;i++){
		
		while(arr2[i]>0){
			map[arr2[i]]++;
			arr2[i]--;
		}
	}
	
	vector<pair<int,int>> secon;
	
	for(auto i : map){
		
		secon.push_back(make_pair(i.first,i.second));
		
	}
	sort(secon.begin(),secon.end(),greater<pair<int,int>>());
	for(auto i = secon.begin();i!=secon.end();i++){
		
		while( n2>0 && (*i).second>0 ){
			max += (*i).first;
			n2--;
			(*i).second--;
		}
		
	}
	
	cout<<min<<" "max<<endl;
	
	
}

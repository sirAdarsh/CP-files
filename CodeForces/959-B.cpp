#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k,m;
	cin >> n >> k >> m;
	
	unordered_map<string,int> map;
	
	string s;
	for(int i=1;i<=n;i++){
		cin>>s;
		map[s]=i;
	}
	
	int cost[n+1];
	for(int i=1;i<=n;i++){
		cin>>cost[i];
	}
	
	int Group[n+1];
	int minGroup[k+1];
	
		int f,temp;
	for(int i=1;i<=k;i++){
		int min=2147483647;
		cin>>f;
		
		for(int j=1;j<=f;j++){
			
			cin>>temp;
			Group[temp]=i;
			temp=cost[temp];
			if(temp<min){
				minGroup[i]=temp;
				min=minGroup[i];
			}
		}
	}
//	
//	for(int i=1;i<=k;i++){
//		cout<<minGroup[i]<<endl;
//	}
// 100 1 1 5
	string str;
	int sum=0;
	for(int i=1;i<=m;i++){
		cin>>str;
		//index = map[str]
//		cout<<map[str]<<" ";
		sum+= minGroup[Group[map[str]]];
	}
	cout<<sum;
	
}

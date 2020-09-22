#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int arr[n];
	vector<int> cfs;
	unordered_map<int,int> occ;
	for(int i=0;i<n;i++){
		cin >> arr[i];
		occ[arr[i]]++;
		if(occ[arr[i]]==2){
			cfs.push_back(arr[i]);
		}
	}
	sort(arr,arr+n);
	
	int ans1,ans2;
	ans1=arr[n-1];
	
	
	for(int i=0;i<n;i++){
		if(ans1%arr[i]!=0){
			cfs.push_back(arr[i]);
		}
	}
	
	bool flag=false;
	
	
	for(int i=0;i<=n-2;i++){
		flag=false;
		for(auto v : cfs){
			if(arr[i]%v!=0){
				flag=true;
				break;
			}
		}
		if(flag==false){
			ans2=arr[i];
			break;
		}
		
	}
	
	cout<<ans1<<" "<<ans2<<endl;
	
}

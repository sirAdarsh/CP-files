#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int arr[n];
	
	vector< pair<int,int> > vec;
	int p;
	for(int i=0;i<n;i++){
		cin >> p;
		vec.push_back(make_pair(p,i+1));
	}
	sort(vec.begin(),vec.end());
	
//	for(auto i : vec){
//		cout<<i.first<<" "<<i.second<<endl;
//		
//	}
	int k;
	cin >> k;
	int i=0;
	int num = 0;
	int ans=0;
	while(k>0 && i<n ){
		
		num = k/vec[i].first;
		if(num> vec[i].second){
			num = vec[i].second;
		}
		ans += num;
		k -= (num*vec[i].first);
		i++;
		
	}
	cout<<ans<<endl;
	
}

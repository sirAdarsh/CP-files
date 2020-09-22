#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> vec;
	int p;
	int ans=0;
	for(int i=0;i<n;i++){
		cin >> p;
		vec.push_back(p);
	}
	sort(vec.begin(),vec.end());
	if(n==1){
		cout<<1<<endl;
	}
	else{
	
	bool th=true;
	
	for(int i=0, j=i+1; i<n,j<n; j++ ){
		
		cout<<ans<<endl;
		if(vec[i]+vec[j] <=4){
			vec[i]+=vec[j];
//			ans++;
			th=false;
		}
		
		else{
			
			if(th){
				ans += (n-i);
				th=true;
				break;
			}
			ans++;
			th=true;
			i=j;
		}
		
	}
//	if(!th)
//	ans++;
	cout<<ans<<endl;
	}
}

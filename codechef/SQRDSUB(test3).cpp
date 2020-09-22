#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		
		int n;
		cin>>n;
		int arr[n+1];
		for(int i=1;i<=n;i++){
			cin>>arr[i];
			if(arr[i]%2==0){
				arr[i]/=2;
			}
			else{
				arr[i]=0;
			}
		}
		
		vector<pair<int,int>> vec; //(1,%2)
		
		bool a=false,b=false;
		int t1,t2;
		for(int i=1;i<=n;i++){
			
			if(arr[i]==1){
				
				if(a==false){
					t1=i;
					a=true;
				}
				else if(b==false){
					t2=i;
					b=true;
				}
			}
			
			if(b=true){
				vec.push_back({t1,t2});
				a=false;
				b=false;
			}
		}
		
		auto it=vec.begin();
		for(it=vec.begin();it!=vec.end();it++){
			cout<<(*it).first<<" "<<(*it).second;
			cout<<endl;
		}
		
		
		
		
		
		
		
		
		
		
		
		
	}
}

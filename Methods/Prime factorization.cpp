//Program for Prime Factorization
#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> PFs;

int main(){
	int n;
	cin>>n;
	
	vector<PFs> vec;
	int i;
	
	for( i = 2; i * i <= n; i++){
		
		if(n % i ==0){
			int count=0;
			while(n % i ==0){
				
				n/=i;
				count++;
			}
			vec.push_back({i,count});
			
		}
		
	}
	
	if(n!=1){
		
		vec.push_back({n,1});
	}
	
	auto it=vec.begin();
	for(it;it!=vec.end();it++){
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
	
}

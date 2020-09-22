#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> vec;
	int p;
	int ans=0;
	while(n--){
		cin >> p;
		if(p!=4)
		vec.push_back(p);
		else{
			ans++;
		}
	}
//	cout<<ans<<endl;
	sort(vec.begin(),vec.end());
	n = vec.size();
	
	for(int i=0, j =n-1; i<=j ;j-- ){
		if(i==j){
			
				ans++;
				break;
			
			
		}
		if( vec[j] + vec[i] <= 4 ){
			vec[i] += vec[j];
		}
		else if(vec[j]+vec[i] > 4 ){
			i++;
			j++;
			ans++;
		}
		
	}
	cout<<ans<<endl;
}

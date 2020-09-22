#include<bits/stdc++.h>
using namespace std;
int main(){
	float n, k;
	cin >> n >> k;
	string s="";
	for(int i=0;i<k;i++){
		s += (char)(97+i);
	}
	
	int p = ceil(n/k);
	string ans="";
	while(p--){
		ans.append(s);
	}
	for(int i=0;i<n;i++){
		cout<<ans[i];
	}
	cout<<endl;
	
}

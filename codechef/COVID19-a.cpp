#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		
		int n;
		cin >> n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		vector<int> v;
		for(int i = 0; i<n; i++){
			int p=1;
			int c = i;
			for(int j = c-1; j>=0 ;j--){
				if(arr[c]-arr[j] > 2 ){
					break;
				} 
				c-=1;
				p++;
			}
			c = i;
			for(int j=c+1; j<n;j++){
				if(arr[c]-arr[i]>2){
					break;
				}
				c+=1;
				p++;
			}
			cout<<p<<" ";
			v.push_back(p);	
		}
		sort(v.begin(),v.end());
		cout<<v[0]<<" "<<v.back()<<endl;
	}
}

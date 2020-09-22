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
		
		int max =INT_MIN;
		int min = INT_MAX;
		
		int p =1;
		
		vector<int> v;
		
		for(int i=0 ; i<n; i++){
			
			if(i==n-1){
				
				if(arr[i+1]-arr[i]<=2){
					p++;
					v.push_back(p);
				}else{
					v.push_back(1);
				}
				break;
				
			}
			
			if(arr[i+1]-arr[i]<=2){
				p++;
			}
			else{
				v.push_back(p);
				p=1;
			}
			
		}
		for(auto i : v){
			if(i<min){
				min = i;
			}
			if(i>max)
			max = i;
		}
		cout<<min<<" "<<max<<endl;
	}
}

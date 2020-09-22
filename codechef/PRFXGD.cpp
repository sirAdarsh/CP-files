#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int arr[30]={};
		string s;
		cin>>s;
		int k,x;
		cin>>k>>x;
		for(int i=0;i<=s.size();i++){
			if(arr[s[i]-97] ==0 ){
				arr[s[i]-97]+=1;
				continue;
			}
			if(arr[s[i]-97] !=0){
				if(k>0){
					k-=1;
					continue;
				}
				if(k==0){
					break;
				}
			}
			if(arr[s[i] -97] >= x){
				break;
			}
		}
		
		sort(arr,arr+30);
		int ans=0;
		int j=29;
		while(arr[j]!=0 && j>0){
			ans+=arr[j];
			j--;
		}
		cout<<ans<<endl;
//		for(int i=0;i<26;i++){
//			cout<<arr[i]<<" ";
//		}
		
		
	}
}

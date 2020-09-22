#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	 //c array for storing the counts at some place, a for the number
	int t;
	cin>>t;
	while(t--){
		ll c[60],a[30];
		memset(c,0,sizeof(c));
		int n,k;
		cin>>n>>k;
		for(int i=0;i<n;i++){
			int j=0;
			cin>>a[i];
			while(a[i]){
				c[j]+=a[i]%k;
				j++;
				a[i]/=k;
			}
		}
		int x=0;
		for(int i=0;i<60;i++){
			if(c[i]>1){
				cout<<"NO"<<endl;
				x=1;
				break;
			}
		}
		if(x==0)
		cout<<"YES"<<endl;				
	}
}

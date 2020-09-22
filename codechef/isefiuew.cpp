#include<bits/stdc++.h>
using namespace std;
int main(){
	
	char c[10000];
	int size=0;
	
	int t;
	cin>>t;
	char q;
	while(t--){
		scanf("%c",&q);
	int i=0;
	while(i<100002)
	{
    scanf("%c",&c[i]);
     if(c[i]=='\n')
        break;
        size++;
    i++;
	} 
	
	int x,k;
	cin>>x>>k;
	
	int arr[26]={};
	
	for(int i=0;i<size;i++){
//		cout<<c[i]<<" ";
//		cout<<2;
//		cout<<c[i]-97<<" ";
		if(arr[c[i]-97] != 0 && x>0){
			x=x-1;
			if(x>=0){
				arr[c[i]-97]++;
			}
			if(x<0){
				break;
			}
//			
		}
		else if(arr[c[i]-97]==0 && x>=0){
			arr[c[i]-97]++;
		}
	}
	
	int ans=0;
	i=0;
	while(arr[i]!=0){
		ans++;
	}
	cout<<ans<<endl;

	
}
	

	
	

}

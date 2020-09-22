#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	int ans=0;
	float arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	sort(arr,arr+n,greater<>());
	int i=0;
	int diff;
	
	while(m>=0 && i<n ){
		
		diff=10 - ((int)arr[i]%10);
//		cout<<diff<<" ";
		
		if(diff<=m  && 100-arr[i]>0 ){
			m -= diff;
			ans += floor(arr[i]/10)+1;
			
			arr[i] = 10*(floor(arr[i]/10)+1);
			
			i++;
		}
		else{
			ans+=arr[i]/10;
			i++;
		}
	}
	
//	cout<<m;
		
//	for(int i=0;i<n;i++){
//		arr[i] = 100-arr[i];
//	}
//	for(int i =0;i<n;i++){
//		cout<<arr[i]<<" ";
//	}
	
	
	for(int i=0;i<n;i++){
		
		if(m<=0){
			break;
		}
		if(arr[i] < 100 && m>= arr[i] ){
			
			int t;
			t -= 100-arr[i];
			if(m<t){
				arr[i] = arr[i]+m;
				m -= t;
				ans += floor(arr[i]/10);
			}else{
				arr[i] = arr[i]+t;
				m-=t;
				ans +=floor(arr[i]/10);
			}
		}
		
	}
	
	
	
	cout<<ans<<endl;
}


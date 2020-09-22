/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;
int n,c;

bool check(int arr[], int mid){
	
	int cow_placed=1;
	int prev=arr[0];
	
	for(int i=1; i<n; i++){
//		cout<<arr[i]<<" ";
		if(arr[i]-prev >= mid){
			cow_placed++;
//			cout<<arr[i]<<" ";
			prev=arr[i];
		}
	}
//	cout<<endl<<cow_placed<<endl;
	return (cow_placed>=c)?true:false;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int t;
    cin >> t;
    while(t--){
    	cin >> n >> c;
    	int arr[n];
    	for(int i=0; i<n; i++) cin>>arr[i];
    	sort(arr,arr+n);
    	int lo,hi,mid;
    	lo = 0;
		hi = arr[n-1]-arr[0];
//		bool e = check(arr,5);
//		cout<<endl<<e<<endl;
		while(lo<=hi)
		{
			mid = (lo+hi)/2;
			if(check(arr,mid)) lo=mid+1;
			else hi=mid-1;
		}
		cout<<hi<<endl;
	}
    
}


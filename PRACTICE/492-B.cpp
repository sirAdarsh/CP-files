/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n,l;
    cin >> n >> l;
    int arr[n];
    for(int i=0; i<n; i++){
    	cin >> arr[i];
	}
	sort(arr,arr+n);
	double diff;
	double max=0;
	for(int i=0; i<n-1; i++){
		diff = arr[i+1]-arr[i];
		if( diff/2 > max ) max= diff/2;
	}
	diff = arr[0]-0;
	if(diff>max) max=diff;
	diff = l-arr[n-1];
	if(diff>max) max=diff;
	printf("%.9f",max);
    
}


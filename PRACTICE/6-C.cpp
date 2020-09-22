/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n;
    cin >> n;
    int arr[n];
    
    for(int i=0; i<n; i++) cin>>arr[i];
    
    int b[n];
    b[0]=0;
    for(int i=1; i<n; i++) b[i]=b[i-1]+arr[i-1];
    int a[n];
    a[n-1]=0;
    for(int i=n-2; i>=0; i--) a[i] = a[i+1]+arr[i+1];
    
    int bob=0;
    for(int i=0; i<n; i++){
    	if(b[i]<=a[i]) bob++;
    	else{
    		break;
		}
	}
	cout << bob << " " << n-bob << endl;
    
}


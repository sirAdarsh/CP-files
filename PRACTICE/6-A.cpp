/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int arr[4];

string solve(){
	
	int a=arr[0],b=arr[1],c=arr[2];
	if(a==b && b==c) return "TRIANGLE";
	
	while(next_permutation(arr,arr+4)){
		a=arr[0]; b=arr[1]; c=arr[2];
		printf("%d %d %d\n",a,b,c);
		if(a+b>c && b+c>a && a+c>b ){
			return "TRIANGLE";
		}
	}	
	sort(arr,arr+4);
	
	while(next_permutation(arr,arr+4)){
		a=arr[0]; b=arr[1]; c=arr[2];
		if(a+b==c || a+c==b || b+c==a){
			return "SEGMENT";
		}
	}
	return "IMPOSSIBLE";
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    sort(arr,arr+4);
    cout << solve()<<endl;
    
}


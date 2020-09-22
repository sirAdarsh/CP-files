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
    
    int arr[]={1,-2,6,4,-3,2,-4,-3};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int max_len=1;
    int cur_len=1;
    int prev = arr[0];
    
    for(int i=1; i<n; i++){
    	
    	if(arr[i]*prev<0){
    		cur_len++;
		}
		else{
			cur_len=1;
		}
		prev=arr[i];
		if(max_len<cur_len){
			max_len=cur_len;
		}
    	
	}
    cout<<max_len<<endl;
}


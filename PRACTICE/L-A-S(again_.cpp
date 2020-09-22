/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

// #pragma GCC optimize("Ofast")
// #pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
int t;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int arr[]={1,-2,6,4,-3,2,-4,-3};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int maxx=1;
    int cur=1;
    int prev=arr[0];
    
    for(int i=1; i<n; i++){
    	
    	if(prev*arr[i]<0){
    		cur++;
		}
		else{
			cur=1;
		}
		prev=arr[i];
		maxx=max(maxx,cur);
	}
    cout << maxx << endl;
}


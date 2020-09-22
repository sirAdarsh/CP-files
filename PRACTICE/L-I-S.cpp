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

int lis(int arr[], int n){
	
	
	int length[n];
	memset(length,0,sizeof(length));
	length[0]=1;
	
	for(int i=1; i<n; i++){
		
		length[i]=0;
		
		for(int j=0; j<i; j++){
			
			if(arr[j]<arr[i] && length[j]>length[i]){
				length[i]=length[j];
			}
			
		}
		length[i]++;
	}
	
	for(auto i : length){
		cout << i << ' ';
	}
	cout << endl;
	
	return *max_element(length,length+n);
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int arr[] = {0,8,4,12,2,10,6,14,1,9,5,13,3,11,7,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << lis(arr,n) << endl;
    
}


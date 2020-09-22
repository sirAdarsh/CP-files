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
    
    int arr[]={8,9,2,3,4};
    int sz = sizeof(arr)/sizeof(arr[0]);
    
    // pivot
    int lo = 0, hi = sz-1, mid = (lo+hi)/2;
	int piv;
	
	while(lo<=hi){
		
		mid = (lo+hi)/2;
		if(arr[mid+1]<arr[mid]){
			piv = mid+1;
			break;
		}
		
		if(arr[mid]>=arr[lo]){
			lo = mid+1;
		}	
		else{
			hi = mid-1;
		}
		piv = mid;
	}    
	
	cout << " piv = "<<piv << endl;
	
	lo = 0; hi = piv-1;
	int key = 0;
	int pos = -1;
	while(lo<=hi){
		mid = (lo+hi)/2;
		if(arr[mid]<key){
			lo = mid+1;
		}
		else if(arr[mid]>key){
			hi = mid-1;
		}
		else{
			pos = mid;
			break;
		}
	}
	
	if(pos==-1){
		
		lo = piv;
		hi = sz-1;
		
		while(lo <= hi){
			mid = (lo+hi)/2;
			if(arr[mid]<key){
				lo = mid+1;
			}
			else if(arr[mid]>key){
				hi = mid-1;
			}
			else{
				pos = mid;
				break;
			}
		}
	}
	cout << pos << endl;
}


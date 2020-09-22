// Hare Krishna

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int findIdx ( int arr[], int key, int l, int r, int n ){
	
	int ansIdx = n;
//	cout<<ansIdx<<endl;
	
	while( l <= r  ){
		
		
		int mid = l + ( r - l)/2;
//		cout<<l<<" "<<r<<" "<<mid<<endl;
		if( arr[mid] > key ){
			r = mid - 1;
			ansIdx = mid;
		}
		
		else{
			l = mid + 1;
		}
//		cout<<endl;
		
	}
	return ansIdx;
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
    	cin >> arr[i];
	}
	
	sort(arr,arr+n);
	
	int minm;
	
	int removals;
	
	int finAns = INT_MAX;
	
	for(int i=0; i<n; i++){
		
		minm = arr[i];
		
		int idx;
		
		idx = findIdx ( arr, 2*minm, i+1, n-1, n );
		
//		cout << n <<" "<<idx<<" "<<i<<endl;
		
		removals =  ( n - idx + i );
		
		if(removals < finAns ){
			finAns = removals;
		}
		
	}
	cout<<finAns<<endl;
    
}


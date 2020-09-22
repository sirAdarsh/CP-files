// Hare Krishna

#include<bits/stdc++.h>
#define ll long long
using namespace std;




int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n;
    cin >> n;
    vector<int> arr;
    int p;
    for(int i=0; i<n; i++){
    	cin >> p;
    	arr.push_back(p);
	}
	
	sort(arr.begin(),arr.end());
	
	int minm;      
	
	int removals;     // count the number of removals required for the chosen minm value
	
	int finAns = INT_MAX;
	
	for(int i=0; i<n; i++){
		minm = arr[i];		// choose a minimum value starting from the start of the index
		
		int idx;
		
		int check = 2 * arr[i];
		
		auto it = arr.begin();
		
		it = upper_bound( arr.begin()+i, arr.end(), check );
		if(it == arr.end()){
			idx = n;
		}
		else{
			idx = it - arr.begin();
		}
		
		removals =  ( n - idx + i );       // total number of removals, 'i' was added since this is the number of element considered as excluded before taking arr[i] as minm
		
		if(removals < finAns ){
			finAns = removals;			// finding the minimum of the removals.
		}
		
	}
	cout<<finAns<<endl;
    
}


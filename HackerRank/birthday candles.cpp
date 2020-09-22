#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    int max = 0;
    unordered_map<int,int> m;
    for(int i=0; i<n; i++){
    	cin >> arr[i];
    	if(arr[i]>max){
    		max = arr[i];
		}
		m[arr[i]]++;
	}
	cout<<m[max]<<endl;
}


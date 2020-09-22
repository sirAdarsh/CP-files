#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(vector<int> arr, int k){
    int n= arr.size();
    
    vector<int> ans;
    
    for(int i=k; i<n; i++){
        ans.push_back(arr[i]);
    }
    for(int i=0; i<k; i++){
        ans.push_back(arr[i]);
    }
    for(auto i: ans){
        cout<<i<<" ";
    }
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> arr;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    solve(arr,4);
}


#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> arr){

    int n = arr.size();
    int max_sum = arr[0];
    int max_here = 0;

    for(int i=0; i<n; i++){
    	
        max_here += arr[i];
        if(max_here > max_sum){
            max_sum = max_here;
        }
        if(max_here < 0){
            max_here = 0;
        }
        
    }
    return max_sum;

}

int main(){
    vector<int> arr(1);
    arr[0]=1;  
    cout<<solve(arr);
}

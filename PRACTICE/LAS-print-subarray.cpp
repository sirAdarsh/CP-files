/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

string s;
int t;

int arr[] = {1,-2,6,4,-3,2,-4,-3};

// In this, we will print the longest alternating subarray
// IDEA: store the ending index where max_len>cur_len, and you also have max_len stored

void LAS(){
	
	int max_len=1;
	int cur_len=1;
	int prev = arr[0];
	int n=sizeof(arr)/sizeof(arr[0]);
	int endIdx=0;
	
	for(int i=1; i<n; i++){
		if(arr[i]*prev<0){
			cur_len++;
		}
		else{
			cur_len=1;
		}
		prev=arr[i];
		if(cur_len>max_len){
			endIdx=i;
			max_len=cur_len;
		}
	}
	
	for(int i=endIdx-max_len+1; i<=endIdx; i++){
		cout<<arr[i]<<" ";
	}
	
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    LAS();
    
}


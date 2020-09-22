/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define pb push_back
#define pf push_front
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
int t;

void print_las(int arr[], int n){
	
	int idx=-1;
	int max_len=1;
	int cur_len=1;
	int prev=arr[0];
	for(int i=1;i<n;i++){
		if(prev*arr[i]<0){
			cur_len++;
		}
		else{
			cur_len=1;
		}
		prev=arr[i];
		if(cur_len>max_len){
			idx=i;
			max_len=cur_len;
		}
	}
	// print
	for(int i=idx-max_len+1; i<=idx; i++){
		cout << arr[i] << ' ';
	}
	
}

int las(int arr[], int n){
	
	int max_len=1;
	int cur_len=1;
	
	int prev=arr[0];
	
	for(int i=1; i<n; i++){
		if(arr[i]*prev<0){
			cur_len++;
		}
		else{
			cur_len=1;
		}
		prev=arr[i];
		max_len=max(max_len,cur_len);
	}
	return max_len;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int arr[8]={1,-2,6,4,-3,2,-4,-3};
//    cout << las(arr,8);
	print_las(arr,8);
    
}


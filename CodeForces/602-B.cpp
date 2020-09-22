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
    
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
    	cin >> arr[i];
	}
    
    int max=1;
    int len=0;
    
    for(int i=0; i<n; i++){
    	
    	int n1=arr[i];
    	int n2 = arr[i];
    	len=0;
    	int firstDiss=-1;
//    	cout << endl;
    	for(int j=i; j<n; j++){
    		
    		if(n2==arr[i] && arr[j]!=n2 ){  // unassigned yet
    			n2=arr[j];
			}
			if(arr[j]!=arr[i] && firstDiss==-1) firstDiss=j;
//			cout<<"   arr[i] = "<<arr[i]<<endl;
//    		cout <<" i= "<<i<<" " <<n1 << " " << n2 <<endl;
//    		cout << "arr[j] = "<<arr[j]<<endl;
    		if(arr[j]==n1 || arr[j]==n2){
    			len++;
			}
			else{
				i=firstDiss-1;
				break;
			}
    		
		}
		
		if(len>max){
			max=len;
		}
    	
	}
	cout << max <<endl;
    
}


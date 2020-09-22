#include<iostream>
using namespace std;

bool findParity(int x) 
{ 
    int y = x ^ (x >> 1); 
    y = y ^ (y >> 2); 
    y = y ^ (y >> 4); 
    y = y ^ (y >> 8); 
    y = y ^ (y >> 16); 
  
    //return 1 if odd parity
    if (y & 1) 
        return 1; 
    return 0; 
}

int main(){
	
    int t;
    scanf("%d",&t);
    while(t--){
    	int N,Q;
	scanf("%d %d",&N,&Q);
	
	int arr[N];
	for(int i=0;i<N;i++){
		scanf("%d",&arr[i]);
	}
	
	bool par[N]={}; //even
	int evenPar=0,oddPar=0;
	
	for(int i=0;i<N;i++){
		if(findParity(arr[i]) == 1 ){
			oddPar++;
		}
	}
	evenPar=N-oddPar;
	
	while(Q--){
		
		int p;
		scanf("%d",&p);
		bool parOfP;
		parOfP=findParity(p);
	
		int ans=0;
	
	if(parOfP == 1){
		printf("%d %d\n",oddPar,evenPar);
	}	
	else{
		printf("%d %d\n",evenPar,oddPar);
	}
}
	}
}
	

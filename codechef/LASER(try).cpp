#include<iostream>

void fastscan(int &number) 
{ 
    //variable to indicate sign of input number 
    bool negative = false; 
    register int c; 
  
    number = 0; 
  
    // extract current character from buffer 
    c = getchar(); 
    if (c=='-') 
    { 
        // number is negative 
        negative = true; 
  
        // extract the next character from the buffer 
        c = getchar(); 
    } 
  
    // Keep on extracting characters if they are integers 
    // i.e ASCII Value lies from '0'(48) to '9' (57) 
    for (; (c>47 && c<58); c=getchar()) 
        number = number *10 + c - 48; 
  
    // if scanned input has a negative sign, negate the 
    // value of the input number 
    if (negative) 
        number *= -1; 
} 

int main(){
    int t;
    fastscan(t);
    while(t--){
    	int N,Q;
    fastscan(N);
    fastscan(Q);
    int arr[N+1];
    for(int i=1;i<N+1;i++){
    	fastscan(arr[i]);
	}
	while(Q--){
		int x1,x2,y;
		fastscan(x1);
		fastscan(x2);
		fastscan(y);
		int ans=0;
		while(x1<x2){
			int z=x1+1;
			if( (y<arr[z] && y>arr[x1]) || (y>arr[z] && y<arr[x1] ) || (y==arr[z] || y==arr[x1])  ){
				ans++;
			}
			x1++;
		}
		
		printf("%d\n",ans);
	}
	}
    
	
}

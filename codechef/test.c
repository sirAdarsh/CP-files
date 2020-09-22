#incluse<stdio.h>
#define l long

l countOfOnes(l n){
	
	l count = 0; 
    while (n) { 
        count += n & 1; 
        n >>= 1; 
    } 
    return count;
}

int main(){
	
	int t;
	scanf("%d",&t);
	while(t--){
		
		l N,Q;
		scanf("%d %d",&N,&Q);
		
		l arr[N];
		for(l i=0;i<N;i++){
			scanf("%d",&arr[i]);
		}
	
		l p;
		
		while(Q--){
			
		scanf("%d",&p);
		l evens=0;
		
		l array[N];
		for(l i=0;i<N;i++){
			array[i]= countOfOnes(array[i]= p ^ arr[i]);
			if(array[i]%2==0){
				evens++;
			}
		}
		printf("%d  %d",evens,N-evens);
	}
		
	}
}

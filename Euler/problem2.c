#include <stdio.h>
int main(void){
    int n;
    int i;
    int fib[n+2];
    int sum;
    fib[0] = 1;
    fib[1] = 2;

    scanf("%d", &n);

    for(i=2; i<=n; i++){
        fib[i]= fib[i-1]+fib[i-2];
        if(fib[i]%2==0){
            sum += fib[i];
        }
    }
    printf("%d\n",fib[n]);
    printf("%d",sum);
    //sum 에 2 더해줘야 함
    //n = 31    
    return 0;
} 

/*
#include<stdio.h> 
int fib(int n) 
{ 
    int f[n+2];  
    int i; 
    double sum=0;
    
    f[0] = 0; 
    f[1] = 1; 
    
        for (i = 2; i <= n; i++){ 
            f[i] = f[i-1] + f[i-2]; 
            if(f[i]%2==0){
                sum +=f[i];
            }
        } 
        return sum;  
}

int main() 
{ 
  int n;
  scanf("%d", &n); 
  printf("%d", fib(n)); 
  return 0; 
} 
*/
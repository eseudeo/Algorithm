#include <stdio.h>

int main(void){
    int testcase;
    int i;
    int a,b;
    int sum[100];
    scanf("%d",&testcase);
    for(i=0;i<testcase;i++){
        scanf("%d %d", &a, &b);
        sum[i] = a+b;
    }
    for(i=0;i<testcase;i++){
        printf("Case #%d: %d", i+1,sum[i]);
	    printf("\n");
    }

    return 0;
}
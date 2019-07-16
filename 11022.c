#include <stdio.h>

int main(void){
    int testcase;
    int i;
    int a[100],b[100];
    int sum[100];
    scanf("%d",&testcase);
    
    for(i=0;i<testcase;i++){
        scanf("%d %d", &a[i], &b[i]);
        sum[i] = a[i]+b[i];
    }
    for(i=0;i<testcase;i++){
        printf("Case #%d: %d + %d = %d", i+1, a[i], b[i], sum[i]);
	    printf("\n");
    }

    return 0;
}
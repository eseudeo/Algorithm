#include <stdio.h>
int main(void){
    int a,b;
    while(scanf("%d %d",&a,&b) != EOF){
        printf("%d", a+b);
        printf("\n");
    }
    return 0;
}
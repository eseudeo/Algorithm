#include <stdio.h>
int main(void){
    int i;
    int sum_hap = 0;
    int sum_ze = 0;
    for(i=1;i<=10;i++){
        sum_hap += i;
        sum_ze += i*i;
    }
    printf("%d",sum_hap*sum_hap-sum_ze);
    return 0;
}
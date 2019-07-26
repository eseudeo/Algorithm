#include <stdio.h>
int main(void){
    int target = 1000;
    int i;
    int sum_three=0;
    int sum_five=0;
    int sum_fifteen=0;
    int final_sum=0;
    for(i=1;i<=target;i++){
        if(i%3==0){
            sum_three += i;
        }
        if(i%5==0){
            sum_five += i;
        }
        if(i%15==0){
            sum_fifteen += i;
        }
    }
    final_sum = sum_three + sum_five - sum_fifteen;
    printf("%d",final_sum);
    return 0;
}
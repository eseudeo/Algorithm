#include <stdio.h>
int main(void){
    int arr[4];
    int i;
    int tmp=0;
    for(i=0;i<3;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<2;i++){
        if(arr[i]>=arr[i+1]){
            tmp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=tmp;
        }
    }

	for(i=0;i<2;i++){
        if(arr[i]>=arr[i+1]){
            tmp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=tmp;
        }
    }

	printf("%d\n", arr[1]);

    return 0;
}
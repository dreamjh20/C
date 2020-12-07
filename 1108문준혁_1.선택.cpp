#include <stdio.h>

int main(){
    int arr[5]={2, 5, 4, 3, 1};
    int min=101;
    int min_index,tmp;
    for(int i=0;i<5;i++){
        min=100; 
        for(int j=i;j<5;j++){
            if(arr[j]<min){
                min=arr[j];
                min_index=j;
            }
        }
        tmp=arr[min_index];
        arr[min_index]=arr[i];
        arr[i]=tmp;
    }
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

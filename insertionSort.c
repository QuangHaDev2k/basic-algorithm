#include<stdio.h>
#define LENGHT 10

void inputarr(int arr[]){
    int i;
    for(i=0;i<LENGHT;i++){
        scanf("%d",&arr[i]);
    }
}
void outputarr(int arr[]){
    int i;
    for(i=0;i<LENGHT;i++){
        printf("%5d",arr[i]);
    }
}

void insertionSort(int arr[]){
    int i,k,x;
    for(i=1;i<LENGHT;i++){
        x=arr[i];
        k=i;
        while(k>0 && arr[k-1]>x){
            arr[k]=arr[k-1];
            k--;
        }
        arr[k]=x;
    }
}

int main(){
    int arr[LENGHT];
    printf("Input Array:\n");
    inputarr(arr);

    printf("\nArray before sort:");
    outputarr(arr);
    printf("\nArray after sort:");
    insertionSort(arr);
    outputarr(arr);

        return 0;
}
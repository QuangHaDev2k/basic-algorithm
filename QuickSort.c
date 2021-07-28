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
void QuickSort(int arr[],int left,int right){
    int i,k,w;
    k=right;
    i=left+1;
    while(i<k){
        while(arr[i]<arr[left] && i<right){
            i++;
        }
        while(arr[k]>=arr[left] && k> left){
            k--;
        }
        if(i<k){
            w=arr[i];
            arr[i]=arr[k];
            arr[k]=w;
        }
    }
    if(arr[left]>arr[k]){
        w=arr[left];
        arr[left]=arr[k];
        arr[k]=w;
    }
    if(left<k-1){
        QuickSort(arr,left,k-1);
    }
    if(k+1<right){
        QuickSort(arr,k+1,right);
    }
}
int main(){
    int arr[LENGHT];
    int left,right,j;
    left=0;
    right=8;
    printf("Input Array:");
    inputarr(arr);
    printf("\nArray before sort:");
    outputarr(arr);
    printf("\nArray after sort:");
    QuickSort(arr,left,right);
    outputarr(arr);
    return 0;
}
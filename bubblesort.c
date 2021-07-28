#include<stdio.h>
#define LENGHT 10

int* input(){
    static int arr[LENGHT];
    int i;
    for(i=0;i<LENGHT;i++){
        scanf("%d",&arr[i]);
    }
    return arr;
}

void output(int arr[]){
    int i;
    for(i=0;i<LENGHT;i++){
        printf("%5d",arr[i]);
    }
}

void bubblesort(int arr[]){
    int i,j,tmp;
    for(i=0;i<LENGHT-1;i++){
        for(j=LENGHT-1;j>i;j--){
            if(arr[j]<arr[j-1]){
                tmp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=tmp;
            }
        }
    }
}
int main(){
    int* array;
    array = input();  
    printf("\nArray before sort:");
    output(array);
    
    printf("\nArray after sort:");
    bubblesort(array);
    output(array);
    return 0;
}

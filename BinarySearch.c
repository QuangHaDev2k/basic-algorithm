#include<stdio.h>

void InputArr(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        scanf(" %d",&arr[i]);
    }
}
void OutArr(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%5d",arr[i]);
    }
} 
 //bubbleSort
void Sort(int arr[],int n){
    int i,k,w;
    for(i=0;i<n-1;i++){
        for(k=n-1;k>i;k--){
            if(arr[k]<arr[k-1]){
                w=arr[k];
                arr[k]=arr[k-1];
                arr[k-1]=w;

            }
        }
    }
}
int BinarySearch(int arr[],int n,int x){
    int head=0;
    int tail=n-1;
    int mid;
    while(head<=tail){
        mid=(head+tail)/2;
        if(arr[mid]==x){
            return mid;
        }else{
            if(arr[mid]<x){
                head=mid+1;
            }else{
                tail=mid-1;
            }
        }
    }
    return -1;
}
int main(){
    int arr[100];
    int x,n;
    printf("Input n:");
    scanf("%d",&n);
    printf("\nInput Array:");
    InputArr(arr,n);
    Sort(arr,n);
    printf("Sort Array:");
    OutArr(arr,n);
    printf("\nEnter the element to find in the array:");
    scanf("%d",&x);
    printf("Location of %d element in the array:%d",x,BinarySearch(arr,n,x));

    return 0;

}
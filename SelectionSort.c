#include<stdio.h>
#define LENGHT 10

void inputArr(int arr[]){
    int i;
    for(i=0;i<LENGHT;i++){
        scanf("%d",&arr[i]);
    }
}
 void output(int arr[]){
    int i;
    for(i=0;i<LENGHT;i++){
        printf("%5d",arr[i]);
    }
}
void selectionSort(int arr[]){
    int i,j,min_idx,swap;
    // Di chuyển ranh giới của mảng đã sắp xếp và chưa sắp xếp
    for(i=0;i<LENGHT-1;i++){
        // Tìm phần tử nhỏ nhất trong mảng chưa sắp xếp
        min_idx=i;
        for(j=i+1;j<LENGHT;j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }// Đổi chỗ phần tử nhỏ nhất với phần tử đầu tiên
        swap=arr[i];
        arr[i]=arr[min_idx];
        arr[min_idx]=swap;
    }
}
int main(){
    int arr[LENGHT];
    printf("INPUT Array:\n");
    inputArr(arr);
    printf("\nArray before sort:");
    output(arr);

    printf("\nArray after sort:");
    selectionSort(arr);
    output(arr);

    return 0;
}

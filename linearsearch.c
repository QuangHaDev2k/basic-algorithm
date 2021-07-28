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

int linearSearch(int arr[],int x){
    int i;
    for(i=0;i<LENGHT;i++){
        if(x==arr[i]){
            return 1; /* true */
        }
        return 0;
    }
}

int main(){
int* array;
array=input();
output(array);

int x;
printf("\ninput x =");
scanf("%d",&x);
if(linearSearch(array,x)){
    printf("value x in the array");
}else{
    printf("value x not in the array");
}
    return 0;
}
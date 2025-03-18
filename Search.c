#include<stdio.h>
#include<stdbool.h>
//Searching an element in an array
int Calculate();
int Calculate(int arr[],int key,int size){
    int i=0;
    bool found=false;
    while(i<size){
        if(arr[i]==key){
           found=true;
        }
        else{
           i++;
        }
    }
     if(found==true){
            printf("Element found");
        }
        else{
            printf("Element not found");
        }
}

int main(){
    
    int key;
    int arr[4];
    int ii;
    int size=sizeof(arr)/sizeof(arr[0]);
    
    printf("Enter the array element:");
    for(ii=0;ii<4;ii++){
        scanf("%d",&arr[ii]);
    }
    
    printf("Enter the element to be searched:");
    scanf("%d",&key);
    
    Calculate(arr,key,size);
}

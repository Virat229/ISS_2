#include<stdio.h>
int main(){
    int n;
    int arr[32];
    int j = 0;
    scanf("%d",&n);
    if(n==0){
        printf("0");
    }else{
    for(int i =0;n>=1;i++){
       
        j++;
        arr[i] = n%2;
         n=n/2;
    }
    for(int k = 0;k<j;k++){
        printf("%d",arr[j-k-1]);
    }
    }
}
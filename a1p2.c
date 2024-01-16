#include<stdio.h>
int main(){
    int n;
    int val;
    scanf("%d",&n);
   for(int i =2;i<100;i++){
       for(int j = 1;j<i;j++){
           if(i%j==0){
               //printf("%d",i);
               val++;
           }
       
       }
        if(val<=2 && i < n){
            printf("%d ",i);

        }
   }
}
#include<stdio.h>
int main(){
    int n;
    int rem;
    int j =1;
    int x = n;
    
    
    
     printf("%d\n",n);
    while(n>=1){
         n=n/2;
         j++;
         
        
         
    }
    n=x;
   scanf("%d",&n);
    for(int k = 0;k<j;k++){
    int array[j];
    array[k] = n%2;
    n=n/2;
    }
    


}
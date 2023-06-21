#include<stdio.h>
void main(){
    int n,a=68;
    scanf("%d",&n);
    n=n*2;
    for(int i=0;i<n;i=i+2){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int j=0;j<n-i-1;j++){
            printf("%c ",a);
            a++;
        }
        printf("\n");
        a=68;
    }
    for(int i=1;i<n-1;i=i+2){
        for(int j=1;j<n-i-2;j++){
            if(i!=0){
                printf(" ");
            }
            
        }
        for(int j=0;j<i+2;j++){
            if(i!=0){
                printf("%c ",a);
                a++;    
            }
            
        }
        printf("\n");
        a=68;
        
    }
}

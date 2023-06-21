#include<stdio.h>
int main(){
    float bill;
    float sum[5];
    float readings[5];
    char name[25];
    int eb_no[5];
    for(int j=0;j<5;j++){       //Customer's name is received here
        scanf("%s",&name[j]);
    }
    for(int k=0;k<5;k++){      //Respective EB number is received
        scanf("%d",&eb_no[k]);
    }
    for(int i=0;i<5;i++){      //Units are received here
        scanf("%f",&readings[i]);
    }
    //Bill is calculated here
    for(int i=0;i<5;i++){
        bill=0;
        //Values must be positive 
        if(readings[i]<0){
            printf("Invalid Input, Readings can't be Negative\n");
        }
        else if(readings[i]<=100 && readings[i]>=0){
            bill=0;
        }
        else if(readings[i]>100 && readings[i]<=400){
            bill+=readings[i]*2.25;
        }
        else if(readings[i]>400 && readings[i]<=500){
            bill=900+(readings[i]*4.50);
        }
        else if(readings[i]>500 && readings[i]<=600){
            bill=3150+readings[i]*6;
        }
        else if(readings[i]>600){
            bill=6750+readings[i]*8;
        }
        sum[i]=bill;
    }
    //Bill is calculated and printed 
    for(int x=0;x<5;x++){
        printf("%.2fINR\n",sum[x]);
    }
}

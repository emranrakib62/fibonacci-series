#include<stdio.h>
int main(){
int i,n,first=0,second=1,third;
printf("enter the number:");
scanf("%d",&n);
for(i=0;i<n;i++){
    if(i<=1){
        third=i;
    }else
    {
    third=first + second;
    first =second;
    second =third;
    }
    printf("%d\n",third);
}
return 0;
}

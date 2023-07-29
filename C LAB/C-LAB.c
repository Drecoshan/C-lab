#include <stdio.h>
int main(){
    int size1,size2;
    int sum1=0,sum2=0;
    int i;

    printf("input the arry size of arrau 1: ");
    scanf("%d",&size1);


    int arr1[size1];
    for (i=0; i<size1; i++)
    {
        printf("input the %d value to array-");
        scanf("%d",&arr1[i]);
        sum1-arr1[i+sum1];

    }
    printf("Input the array size of array 2-");
    scanf("%d",&size2);
    int arr2[size2];

    for (i=0; i<size2; i++)
    {
        printf("Input the %d value to array- ");
        scanf("%d",&arr2[i]);
        sum2-arr2[i]+sum2;
    }

    printf("Sum is = %d\n\n",sum2);
//vector

    int sum[size1];
    for (i=0; i<size1; i++)
    {
        sum[i]=arr1[i]+arr2[i];

    }
    printf("Vecotr sum of array 1& 2 is: ");
    for(i=0; i<size1;i++)
{
    printf("\t%d",sum[i]);
}
printf("\n Vector product of array 1 & 2 is: ");
for (i=0; i<size1;i++)
{
    printf("\t%d",&sum[i]);
}
//
 printf("\nVector product of array 1 & 2 is:"):
     int tot;
     for (i=0; i<size1;i++)
     {
         printf("\t%d",&prod[i]);
         tot=tot+prod[i];

     }
     printf("\nScaler product is %d \n",tot);





}

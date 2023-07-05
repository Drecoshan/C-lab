#include <stdio.h>
int main(){
    float avg;
    int i;
    int min,max,tot=0;
    int array [10];


    for (i=0; i<10; ++i){
      printf("Enter the Number: ");
      scanf("%d",&array[i]);
      tot=tot+array[i];
    }
    max=array[0];
    min=array[0];

    for (i=1; i<10; i++);
    {

      if (array[i]>max)
        max = array[i];

        if (array[i]<min)
        min = array[i];
        printf("%d\t",array[i]);
    }
    avg=(float)tot/10;
    printf("\nThe minimum value is %d \n The maximum value is %d",min,max);
    printf("\nThe average is %.2f\n",avg);


// Q2.



    int size;
    int i;
    int array1, array2, vector sum, vector product;

    printf("Enter the size of the array: ");
    scanf("%d",&size);

    for(i=0; i<size; i++)
    {
        printf("Enter the element size: ");
        scanf("%d",&array1[i]);

    }
    for(i=0; i<size; i++)
    {
        printf("Enter the size the array: ");
        scanf("%d",&array2[i]);
    }
    vector sum += array1[i];
    printf("Scalar sum: %d",vector sum);

    for (i=0; i<10; i++)
    {
       vector sum[i]+=

    }




}

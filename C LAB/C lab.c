//Q1

#include <stdio.h>>
void sample(int num1, int num2)
{
    int sum = num1*num2;
    int difference= num1 -num2;
    int product = num1 * num2;

    printf("sum: %d \n Difference: %d \n Product: %d",sum,difference,product);

}
int main()
{

    int num1,num2;
    printf("Input Number1: ");
    scanf("%d",&num1);

    printf("Input Number2: ");
    scanf("%d",&num2);

    sample(num1, num2);

    return 0:

}



//Q2

#include <stdio.h>
double sample (int num1, float num2)
{
    double answer = num1 * num2;
    return answer;



}
int main(){
    int num1;
    float num2;

    printf("Input Number 1: ");
    scanf("%d",&num1);

    printf("Input Number 2: ");
    scanf("%f",&num2);

    printf("%lf",sample(num1,num2));
    return 0;


}

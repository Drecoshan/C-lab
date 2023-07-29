#include <stdio.h>
void sample(int num1, int num2)
{
    int sum =num1+num2;
    int differnce=num1-num2;
    int product=num1*num2;

    printf("sum: %d \n Diffence : product: %d",sum,difference,product);

}
int main()
{
    int num1, num2;
    printf("Input Number: ");
    scanf("%d",&num1);

    printf("Input Number: ");
    scanf("%d",&num2);

    sample(num1,num2);
    return 0;



//Q2

#include <stdio.h>

void sample(int num1, int num2)
{
    int sum = num1 + num2;
    int difference = num1 - num2;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
}

int main()
{
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    sample(num1, num2);

    return 0;
}

//Q3.
#include <stdio.h>

int sample(int num1, int num2) {
    int product = num1 * num2;
    return product;
}

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    int result = sample(num1, num2);
    printf("Product: %d\n", result);

    return 0;
}


}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void add()
{
    printf("Enter the numbers add: ");
    int n1, n2;
    scanf("%d%d", &n1, &n2);
    printf("The sum of %d and %d is %d\n", n1, n2, n1 + n2);
}
void sub()
{
    printf("Enter the numbers  subtract: ");
    int n1, n2;
    scanf("%d%d", &n1, &n2);
    printf("The difference of %d and %d is %d\n", n1, n2, n1 - n2);
}
void mult()
{
    printf("Enter the numbers  multiply: ");
    int n1, n2;
    scanf("%d%d", &n1, &n2);
    printf("The product of %d and %d is %d\n", n1, n2, n1 * n2);
}
void divi()
{
    printf("Enter the numbers  divide: ");
    int n1, n2;
    scanf("%d%d", &n1, &n2);
    printf("The division of %d and %d is %f\n", n1, n2, (float)n1 / (float)n2);
}
void modu()
{
    printf("Enter the numbers  modulus of: ");
    int n1, n2;
    scanf("%d%d", &n1, &n2);
    printf("The modulus of %d and %d is %d\n", n1, n2, n1 % n2);
}
int fact(int n)
{
    if(n <= 1) return 1;
    return n * fact(n - 1);
}
void factorial()
{
    int n;
    printf("Enter the number  factorial of: ");
    scanf("%d", &n);
    long long int factorial = fact(n);
    printf("\nFactorial of %d is %d", n, factorial);
}
int p(int x, int n)
{
    if(n == 0) return 1;
    int temp = p(x, n / 2) * p(x, n / 2);
    return (n % 2 != 0) ? (temp * x) : (temp);
}
void power()
{
    int x;
    int n;
    printf("Enter the base and the power: ");
    scanf("%d%d", &x, &n);
    int ans = p(x, n);
    printf("The power is %d", ans);
}
void square()
{
    int n;
    printf("Enter the number  square of: ");
    scanf("%d", &n);
    int ans = p(n, 2);
    printf("The square of %d is %d", n, ans);
}
void cube()
{
    int n;
    printf("Enter the number  cube of: ");
    scanf("%d", &n);
    int ans = p(n, 3);
    printf("The cube of %d is %d", n, ans);
}
void squareroot()
{
    int n2;
    printf("Enter the number  square root of : ");
    scanf("%d", &n2);
    int s = sqrt(n2);
    printf("The square root of %d is %d", n2, s);
}

int main()
{
    printf("\t\tWelcome to the scientific calculator!!\n\n");
    int c;
    printf("\n####### Press 0 to quit the program ########\n");
    printf("Enter 1 for Add \n");
    printf("Enter 2 for Sub \n");
    printf("Enter 3 for Mult \n");
    printf("Enter 4 for Divi\n");
    printf("Enter 5 for Modu\n");
    printf("Enter 6 for Power \n");
    printf("Enter 7 for Factorial \n");
    printf("Enter 8  for square \n");
    printf("Enter 9  for cube \n");
    printf("Enter 10 for squareroot\n\n");

    while (1)
    {
        printf("\n\nEnter the operation you want to do: ");

        scanf("%d", &c);

        switch (c)
        {
        case 1:
            add();
            break;
        case 2:
            sub();
            break;
        case 3:
            mult();
            break;
        case 4:
            divi();
            break;
        case 5:
            modu();
            break;
        case 6:
            power();
            break;
        case 7:
            factorial();
            break;
        case 8:
            square();
            break;
        case 9:
            cube();
            break;
        case 10:
            squareroot();
            break;
        case 0:
            exit(0);
        default:
            printf("\nInvalid operation!!!!\n");
        }
    }
    return 0;
}



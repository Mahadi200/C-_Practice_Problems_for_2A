#include<stdio.h>

void fibonacci_recursive(int n,int a, int b, int count){
    if(count <n){
        printf("%d ", a);
        fibonacci_recursive(n,b,a+b,count +1);
    }
}

int main ()
{
    int n;
    printf("Enter the number of terms : ");
    scanf("%d",&n);

    printf("Fibonacci sequence up to %d terms : \n",n);
    fibonacci_recursive(n,0,1,0);

    return 0;
}
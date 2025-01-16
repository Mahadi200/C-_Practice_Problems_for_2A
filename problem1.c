#include<stdio.h>

int main ()
{
    int n,i,max,min;
    float sum = 0, average;

    printf("Enter the number of element : ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d integers : ",n);
    for(i = 0; i<n;i++){
        scanf("%d",&arr[i]);
        sum +=arr[i];
    }

    max = min = arr[0];

    for (i =1; i <n; i++){
        if(arr[i] > max ) {
            max = arr[i];
        }
        if(arr[i]< min ){
            min = arr[i];
        }
    }

average = sum/n;

printf("Max : %d \n",max);
printf("Min : %d \n",min);
printf("Average : %.2f\n",average);


return 0;
}
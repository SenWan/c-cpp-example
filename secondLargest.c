#include<stdio.h>
int main()
{
    int i, n, a, b, num;
   a = b = 0;
   printf("Enter the Maximum amount of Numbers :: ");
   scanf("%d", &n);
   printf("\n");
   for(i=0; i<n; i++)
   {
     printf("\nEnter the Number :: ");
     scanf("%d", &num);
     if (num > a)
     {
       b = a;
       a = num;
     }
     else if (num > b)
       b = num;
   }
   printf("\nSecond Highest Number is :: %d",b);
   return 0;
}

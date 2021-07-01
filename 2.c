#include <stdio.h>

 int get_num(int n)
 {
     int i,num,sum=0;

     for(i=0; i<n; i++)
     {
        scanf("%d",&num);
        sum += num;
     }

     return sum;
 }


int main()
{
    int n;

    printf("Enter total number you want to take : ");
    scanf("%d",&n);
    printf("\nEnter your elements randomly : ");

    int result;
    result = get_num(n);
    if(result%9==0)
    {
        printf("\nDivisible by 9.");
    }
    else
    {
        printf("\nNot divisible by 9.");
    }


    return 0;
}

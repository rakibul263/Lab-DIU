#include<stdio.h>
int main()
{
    int i,n;
    int sum=0;
    printf("Enter the range: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            sum+=i;
        }

    }
    printf("even sum: %d\n",sum);


    for(i=1,sum =0; i<=10; i++)
    {
        if(i%2!=0)
        {
            sum +=i;
        }

    }
    printf("odd sum: %d\n",sum);


    return 0;
}

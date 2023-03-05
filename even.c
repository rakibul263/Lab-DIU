#include <stdio.h>
int main()
{
    int i;
    scanf("%d", &i);
    if(i<=10 && i>=1){
        if(i%2==0)
        {
            printf("%d is even\n",i);
        }
    }
    return 0;
}

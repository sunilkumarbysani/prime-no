#include <stdio.h>
int main()
{
    int n, i, flag = 0;

    scanf("%d", &n);
    for(i = 2; i <= n/2; ++i)
    {
        // condition for nonprime number
        if(n%i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (n == 1) 
    {
      printf("no");
    }
    else 
    {
        if (flag == 0)
          printf("yes");
        else
          printf("no");
    }
    
    return 0;
}

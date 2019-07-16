#include <stdio.h>
int main()
{
    int m, i, flag = 0;

    scanf("%d", &n);
    for(i = 2; i <= m/2; ++i)
    {
        // condition for nonprime number
        if(m%i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (m == 1) 
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

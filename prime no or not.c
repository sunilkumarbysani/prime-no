#include <stdio.h>
int main()
{
    int h,i,flag = 0;

    scanf("%d", &h);
    for(i=2; i<= h/2;++i)
    {
        if(h%i == 0)
        {
            flag = 1;
            break;
        }
    }
    if(h == 1) 
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

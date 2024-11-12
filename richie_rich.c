#include <stdio.h>

void operation(void);

void operation(void)
{
    int a,b,x;
    
    scanf("%d %d %d\n",&a,&b,&x);
    
    printf("%d\n", (b-a)/x );
}

void main()
{
    int t;
    
    scanf("%d\n",&t);
    
    while (t--)
    {
        operation();
    }
}

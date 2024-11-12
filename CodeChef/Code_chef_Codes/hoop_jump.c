#include <stdio.h>

void operation(void)
{
    int n;
    scanf("%d\n",&n);
    
    printf("%d\n", (n/2) + 1);
}

int main() {
	// your code goes here
    int t;
    scanf("%d\n",&t);
    
    while(t--)
    {
        operation();
    }
    return 0;
}


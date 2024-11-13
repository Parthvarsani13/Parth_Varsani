#include <stdio.h>

void operation()
{
    int n,s;
    scanf("%d %d\n",&n,&s);
    
    if (n >= s) 
        printf("%d\n", s);
    else 
        printf("%d\n", n-(s-n));
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


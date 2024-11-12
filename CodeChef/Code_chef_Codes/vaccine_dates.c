#include <stdio.h>

void operation(void)
{
    unsigned long int d,l,r;
   
    scanf("%ld %ld %ld\n",&d,&l,&r);
   
    if((d>=l)&&(d<=r))
        printf("Take second dose now\n");
    else if((d<l) && (d<r))
        printf("Too Early\n");
    else
        printf("Too Late\n");
}

int main() {
	// your code goes here
    int t;
    scanf("%d\n",&t);
    
    while(t--)
    {
        operation();
    }
}


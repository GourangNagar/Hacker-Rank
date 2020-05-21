#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    struct phone
    {
        char name[100];
        long long int number;
    } map[99999];

    long long int n,i,j,count;
    char str[1000];

    scanf("%lld", &n);
    for(i=0;i<n;i++)
    scanf("%s %lld\n", map[i].name, &map[i].number);
    
    while (scanf("%s", str) != EOF)
    {
        count = 0;
        for (j=0;j<n;j++)
        {
            if (!strcmp(str, map[j].name))
            {
            printf("%s=%lld\n", map[j].name, map[j].number);
            count = 1;
            } 
        }
        if (count != 1)
        printf("Not found\n");                                
    }
    return 0;
}

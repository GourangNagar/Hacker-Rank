
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    long int n;
    char str[100];
    
    struct book {
        char name[100];
        long int number;
    } map[9999];
           
    scanf("%ld", &n);
    for (long int i = 0; i < n; i++) {
        scanf("%s %ld\n", map[i].name, &map[i].number);
    }
       while (scanf("%s", str) != EOF) {
        long int counter = 0;
        for (long int j = 0; j < n; j++) {
            if (!strcmp(str, map[j].name)) {
                printf("%s=%lld\n", map[j].name, map[j].number);
                counter = 1;
                } 
            }
        if (counter != 1) {
                printf("Not found\n");                    
                } 
        }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

struct kontrol {
        int x;
        char y;
        long z;

        };
union kontrol2{
        int a;
        char b;
        long c;

                };
int main()
{
   /* printf("%d\n",sizeof(char));
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(double)); */

    printf("struct =%d byte\n",sizeof(struct kontrol1));
    printf("union  =%d byte",sizeof(union kontrol2));
}

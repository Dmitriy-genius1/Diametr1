#include <stdio.h>
//#include <stdlib.h>
//#include <windows.h>


#define SEC_PER_MIN 60


int main(void)
{
    int sec, min, left;
    printf("sec by min\n");
    printf("insert min");
    scanf("%d", &sec);

    while(sec>0)
    {
        min = sec / SEC_PER_MIN;
        left =sec % SEC_PER_MIN;
        printf("%d sec- lake %d min %d sec.\n",sec,min,left);
        printf("enter 0 then exet:\n");
        scanf("%d", &sec);

    }

        printf("dun!\n");

    return 0;
}

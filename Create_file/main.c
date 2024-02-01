#include <stdio.h>


int main(void)
{
    FILE *f;
    char c[3]="AB";
    c[1]= 26;
    f = fopen("111.txt", "w");
        fprintf(f,c);
    fclose(f);

    char buf[10]= "";

    f=fopen("111.txt", "r");
        fread(buf, 1, sizeof(buf), f);
    fclose(f);
    for (int i=0; i<10; i++)
        printf("%d\n", buf[i]);


    return 0;
}

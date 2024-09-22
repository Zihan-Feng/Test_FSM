#include <stdio.h>

int stat = 1;
void stat1()
{
    stat=5;
    printf("stat1->stat5\n");
}

void stat2()
{
    stat=4;
    printf("stat2-stat4\n");
}
void stat3()
{
    stat=0;
    printf("stat3_final\n");
}
void stat4()
{
    stat=3;
    printf("stat4->stat3\n");
}
void stat5()
{
    stat=2;
    printf("stat5->stat2\n");
}
int main()
{
    void (*state[])(void) = {stat1, stat2, stat3, stat4, stat5};
    while (stat != 0)
    {
        state[stat - 1]();
    }
    return 0;
}

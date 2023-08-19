#include<stdio.h>
int main()
{
    int h,m;
    printf("Enter hours and minutes in given format\nHH:MM\n");
    scanf("%d:%d",&h,&m);
    printf("%d Hour and %d Minute",h,m);
    return 0;
}

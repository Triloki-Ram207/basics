#include<stdio.h>
int main()
{
   int d,m,y;
   printf("Enter date in given format\nDD/MM/YYYY\n");
   scanf("%d/%d/%d",&d,&m,&y);
   printf("Day-%d,Month-%d,Year-%d\n",d,m,y);
    return 0;
}

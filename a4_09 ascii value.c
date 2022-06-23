#include<stdio.h>
#include<conio.h>

int main()
{
    char a;
    printf("Press any key.\n");
    scanf("%c",&a);
    printf("ASCII value of \'%c\' is %d.",a,a);
    getch();
}

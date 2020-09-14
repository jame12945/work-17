#include<iostream>
#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n;
    //clrscr
    
    printf("Enter num: ");
    scanf_s("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {

            if (i == 1 || j == 1 || i == n || j == n || i == j && j != (n / 2) + 1 || j == ((n + 1) - i) && j != n / 2 + 1)
            {
                printf(" *");
            }
            else
                printf("  ");
        }
        printf("\n");
    }

    getchar();
}
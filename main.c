#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,m,n;

    while (1>0)
    {
        printf("Enter size of the matrix A (m n): ");
        scanf("%d %d", &m, &n);

        if (m>0 && n>0)
        {

            break;
        }
        printf("\nOnly enter positive values!\n");
    }


    int a[m][n];

    printf("\n");
    printf("\nEnter the values for Table A\n\n"); //getting inputs to the first table
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("Enter values for %d X %d: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    int x[n][1];
    printf("\nEnter the values for list X\n\n"); //getting inputs to the second table
    for (k=0; k<n; k++)
        {
            printf("Enter values for %d x 1 : ",k+1);
            scanf("%d", &x[k][0]);
        }

    int product[m][1];
    int sum=0;
    for (i=0; i<m; i++)
    {
        for(j=0; j<1; j++)
        {
            for(k=0; k<n; k++)
            {
                sum = sum + a[i][k] * x[k][j];
            }
            product[i][j] = sum;
            sum=0;
        }
    }

    printf("\nTable A\n");
    for (i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("|%d| ",a[i][j]); //print table A
        }
        printf("\n");
    }

    printf("\nTable X\n");
    for (i=0; i<n; i++)
        {
            printf("|%d| \n",x[i][0]); //print table x
        }
        printf("\n");

    printf("Result list Y\n");
    for (i=0; i<m; i++)
        {
            printf("|%d| \n",product[i][0]); //print the result table
        }
        printf("\n\n");

    return 0;
}

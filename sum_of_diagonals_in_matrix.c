//WAP to check whether the sum of all the diagonals of a matrix is equal to the sum of (i) its boundary element (ii) the sum of the  corners element of a matrix
 #include <stdio.h>
int main()
 {
    int n, i, j;
    printf("Enter order of  matrix: ");
    scanf("%d", &n);
    int a[n][n];
    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++)
     {
        for(j = 0; j < n; j++)
         {
            scanf("%d", &a[i][j]);
        }
    }
    int diagSum = 0, boundarySum = 0, cornerSum = 0;
    for(i = 0; i < n; i++)
     {
        diagSum += a[i][i];
        if(i != n - 1 - i)
            diagSum += a[i][n - 1 - i];
    }
    
    for(i = 0; i < n; i++)
     {
        for(j = 0; j < n; j++)
         {
            if(i == 0 || i == n - 1 || j == 0 || j == n - 1)
                boundarySum += a[i][j];
        }
    }
    cornerSum = a[0][0] + a[0][n-1] +
                a[n-1][0] + a[n-1][n-1];
    printf("Diagonal Sum = %d\n", diagSum);
    printf("Boundary Sum = %d\n", boundarySum);
    printf("Corner Sum = %d\n", cornerSum);
    if(diagSum == boundarySum)
        printf("Diagonal Sum is equal to Boundary Sum\n");
    else
        printf("Diagonal Sum is NOT equal to Boundary Sum\n");
    if(diagSum == cornerSum)
        printf("Diagonal Sum is equal to Corner Sum\n");
    else
        printf("Diagonal Sum is NOT equal to Corner Sum\n");
    return 0;
}
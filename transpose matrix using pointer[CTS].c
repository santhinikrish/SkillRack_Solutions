void matrixTranspose(int *matrix,int n,int m)
{
    int i,j;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ", *(matrix+(j*m+i)));
        }
        printf("\n");
    }
}
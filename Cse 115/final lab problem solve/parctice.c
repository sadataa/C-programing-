void main()
{
 int A[100][100], B[100][100], C[100][100];
 int i, j, k, rowsA, columnsA, rowsB, columnsB;
 int sum;
 printf("Number of rows in A: ");
 scanf("%d",&rowsA);
 printf("Number of columns in A: ");
 scanf("%d",&columnsA);
 printf("Number of rows in B: ");
 scanf("%d",&rowsB);
 printf("Number of columns in B: ");
 scanf("%d",&columnsB);
 if(columnsA != rowsB) {
 printf("Invalid dimensions\n");
 return;
 }
 for(i=0;i<rowsA;i++)
 {
 for(j=0;j<columnsA;j++)
 {
 printf("A[%d][%d]: ",i, j);
 scanf("%d",&A[i][j]);
 }
 }
 for(i=0;i<rowsB;i++)
 {
 for(j=0;j<columnsB;j++)
 {
 printf("B[%d][%d]: ",i, j);
 scanf("%d",&B[i][j]);
 }
 }
 for(i=0; i<rowsA; i++)
 {
 for(j=0; j<columnsB; j++)
 {
 for(k=0; k<rowsB; k++)
 {
 sum += A[i][k] * B[k][j];
 }
 C[i][j] = sum;
 sum = 0;
 }
 }

 printf("Result:\n");
 for(i=0;i<rowsA;i++)
 {
 for(j=0;j<columnsB;j++)
 {
 printf("%10d ",C[i][j]);
 }
 printf("\n");
 }
}

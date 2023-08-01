#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],mul[100][100],i,j,k,rows,col;
	printf("enter number of row and columns:\n");
	scanf("%d%d",&rows,&col);
	
	printf("enter the first matrix elements:\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("the element %d",a[i][j]);
			scanf("%d",&a[i][j]);
		}
	 	printf("\n");
	}
	printf("enter the second matrix elements");
	
	 	for(i=0;i<rows;i++)
	 	{
	 		for(j=0;j<col;j++)
	 		{
	 			printf("the element %d",b[i][j]);
	 			scanf("%d",&b[i][j]);
			 }
			 printf("\n");
		 }
		 printf("the matrix multiplication of two matrices:\n");
		 
		 		for(i=0;i<rows;i++)
		 		{
		 			for(j=0;j<col;j++);
		 			{
		 				mul[i][j]=0;
		 				for(k=0;k<col;k++)
		 				{
		 					mul[i][j]=mul[i][j]+a[i][j]*b[i][j];
						 }
					 }
				 }
		 			for(i=0;i<rows;i++)
		 			{
		 				for(j=0;j<col;j++)
		 				{
		 					printf("%d\t",mul[i][j]);
						 }
						 printf("\n");
					 }
					 return 0;
}

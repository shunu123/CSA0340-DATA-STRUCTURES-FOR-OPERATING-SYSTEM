#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in array :\n");
    scanf("%d",&n);
    int a[n],i;
    for( i=0;i<n;i++)
    {
        printf("The element a[%d] :",i);
        scanf("%d",&a[i]);
    }
    printf("Even numbers in an array :\n");
    for( i=0;i<n;i++)
    {
        if(a[i]%2==0)
        printf("%d ,",a[i]);
        
    }
    
    printf("\nOdd numbers in an array :\n");
    for( i=0;i<n;i++)
    {
        if(a[i]%2==1)
        printf("%d ,",a[i]);
    }
    return 0;
   
}

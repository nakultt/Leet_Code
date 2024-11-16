#include<stdio.h>
int main()
{
    int n,num[100],i,j,x,t,found=0;

    printf("Enter the number of inputs : ");
    scanf("%d",&n);

    printf("Target = ");
    scanf("%d",&t);

    for(i = 0; i < n; i++) 
    { 
        printf("Enter number %d: ", i+1); 
        scanf("%d", &num[i]);
    }
    
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(num[i]+num[j]==t)
            {
                printf("%d,%d \n" ,i,j);
                found=1;
            }
        }
    }

    if(found != 1)
    {
        printf("None Found");
    }

    return 0;
}
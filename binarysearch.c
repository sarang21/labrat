#include<stdio.h>
void main()
{
    int a[100],l=0,i,u,m,k,flag=0;
    printf("Enter limit");
    scanf("%d",&u);
    printf("Enter some no");
    for(i=0;i<u;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element to be searched");
    scanf("%d",&k);
    while(l<u-1)
    {
        m=(l+u)/2;
        if (a[m]==k)
        {
            printf("Element found at %d",m+1);
            flag=1;
            break;
        }
        else if (a[m]<k)
        {
            l=m-1;
        }
        else
        {
            u=m+1;
        }
    }
    if(flag==0)
    {
        printf("Element not found");
    }

    }


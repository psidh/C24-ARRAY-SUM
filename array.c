#include <stdio.h>
main()
    {
    int a[10],i,n,s=0;
    printf(“enter the size of array”);
    scanf(“%d”,&n);
    printf(“enter n elements into array”);
    for(i=0;i<n;i++)
        {
        scanf(“%d”,&a[i]);
        }
    for(i=0;i<n;i++)
        {
        s=s+a[i];
        }
    printf(“the sum of elements is %d”,s);

    }
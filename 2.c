#include<stdio.h>
int greatestnumber(int b[20]);
int n;
void main()
{

    int a[20],i,p;
    printf("enter total number of element:\n");
    scanf("%d",&n);
    printf("enter %d numbers:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    p=smallestnumber(a);
    printf("smallest number is %d",p);
}
int smallestnumber(int b[20])
{
    int i,min;
    min=b[0];
    for(i=0;i<n;i++)
    {
        if(b[i]<min)
            min=b[i];
    }
    return min;

}



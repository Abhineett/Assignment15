#include<stdio.h>
int greatestnumber(int b[20]);
int n;
void main()
{

    int a[20],i,p;
    printf("enter total number of element");
    scanf("%d",&n);
    printf("enter %d numbers:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    p=greatestnumber(a);
    printf("greatest number is %d",p);
}
int greatestnumber(int b[20])
{
    int i,max;
    max=b[0];
    for(i=0;i<n;i++)
    {
        if(b[i]>max)
            max=b[i];
    }
    return max;

}


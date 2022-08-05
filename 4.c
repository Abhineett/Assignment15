#include<stdio.h>
void rotation(int a[],int num);
int i,j;
int main()
{
    int a[100],num;
    printf("enter total number of element=");
    scanf("%d",&num);
    printf("enter %d number",num);
    for(i=0;i<num;i++)
        scanf("%d",&a[i]);
    rotation(a,num);

}
void rotation(int a[],int num)
{
    int temp,n=2;

    for(i=0;i<n;i++)
    {
        temp=a[0];
        for(j=0;j<num-1;j++)
        {
           a[j]=a[j+1];
        }
        a[j]=temp;
    }
    printf("\n");
    printf("after rotation.\n");

    for(i=0;i<num;i++)
    {
        printf("%d\n",a[i]);
    }

}

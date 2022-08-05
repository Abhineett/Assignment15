#include<stdio.h>
void reverse(int a[],int num);
int main()
{
    int a[100],num;
    printf("enter total number of element=");
    scanf("%d",&num);
    printf("enter %d number:",num);
    //reverse(a,num);
    //reverse(a,num);
}
void reverse(int a[],int num)
{
    int i;

    for(int i=0;i<num;i++)
        scanf("%d",&a[i]);
    for(int i=num-1;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }


}


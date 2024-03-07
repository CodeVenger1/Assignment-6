#include<stdio.h>
void great(int arr[],int);
int main()
{
    int a[10],i=0,n;
    printf("\n Enter how many digits you want to enter:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter the digit:");
        scanf("%d",&a[i]);
    }

    great(a,n);
    return 0;
}

void great(int arr[], int n)
{
    int j=0;
    float avg=0;
    float sum=0;
    for(j=0;j<n;j++)
    {
        sum+=arr[j];
    }
    avg=sum/n;
    for(j=0;j<n;j++)
    {
        if(arr[j]>avg)
        {
            printf("\n %d",arr[j]);
        }
    }

}
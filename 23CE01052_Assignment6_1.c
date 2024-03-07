#include<stdio.h>
#include<math.h>
void prime(int,int);
int main()
{
    int n,m;
    printf("\n Enter the lower and the higher limit:");
    scanf("%d %d",&n,&m);
    if(m>n)
    prime(n,m);

    return 0;
}

void prime(int a, int b)
{
    if(b<a)
    printf("\n Wrong input");
    else{
    int i=0;
    printf("\n The prime numbers in the given range are:");
    for(i=a;i<=b;i++)
    {
        int j=2;
        int rep=0;
        for(j=2;j<sqrt(i);j++)
        {
            if(i%j==0)
            rep++;
        }
        if(rep==0)
        {
            printf("\n%d",i);
        }
    }
    }
}
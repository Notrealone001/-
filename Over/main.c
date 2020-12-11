#include <stdio.h>
#include <math.h>
#define M 200

void Fact(int a[],int b[],int c[],int m)
{
    a[0] = 1;
    for(b[0] = 1; 10*b[1]+b[0]<=m; b[0]++)
    {
        int p;
        for(p = 0;p<M;p++)
        {
            c[p] = a[p];
        }
        int x;
        if(b[0] == 10)
        {
            b[0] = 0;
            b[1]++;
        }
        int i;
        for(i = 0; i<=M; i++)
        {
            if(i == 0)
                a[i] = c[i]*b[0];
            else
                a[i] = c[i]*b[0]+c[i-1]*b[1];
        }
        int n;
        for(n = 0;n<M;n++)
        {
            while(a[n]>=10)
            {
                a[n] = a[n]-10;
                a[n+1]++;
            }
        }
    }
}

int main()
{
    int m,x;
    static y;
    printf("Input m:\n");
    scanf("%d",&m);
    for(x = 1;x<=m;x++)
    {
        int a[M] = {0},b[2] = {0},c[M] = {0};
        Fact(a,b,c,x);
        printf("\n");
        printf("%2d! = ",x);
        for(y = M-1;y>=0;y--)
        {
            if(a[y] != 0)
                break;
        }
        for(;y>=0;y--)
            printf("%d",a[y]);
    }
    return 0;
}







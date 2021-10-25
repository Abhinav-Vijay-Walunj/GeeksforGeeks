#include <iostream>
using namespace std;

int maximum(int a,int b)
{
    if(a>b)
        return a;
    return b;
}
int kp(int val[],int wt[],int n,int W)
{
    int t[n+1][W+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=W;j++)
        {
            if(i == 0||j == 0)
            {
                t[i][j]=0;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=W;j++)
        {
            if(wt[i-1]<=j)
            {
                t[i][j]=maximum(val[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);


            }
            else
                t[i][j]=t[i-1][j];
        }
    }
    return t[n][W];
}

int main()
{
    int n=4,W=7;
    //cout<<"enter n , W"<<endl;
    //cin>>n>>W;
    int val[]={1,4,5,7},wt[]={1,3,4,5};
    //for(int i=0;i)

    cout<<kp(val,wt,n,W)<<endl;
    return 0;
}

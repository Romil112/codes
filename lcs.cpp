#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[]="abcd";
    char s2[]="bd";
    int c=strlen(s1);
    cout<<c<<endl;
    int d=strlen(s2);
    cout<<d<<endl;
    int t[c+1][d+1];
    for(int i=0;i<c+1;i++)
    {
        for(int j=0;j<d+1;j++)
        {
            if(i==0 || j==0)
            {
                t[i][j]=0;
            }
        }
    }
    for(int i=1;i<c+1;i++)
    {
        for(int j=1;j<d+1;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                t[i][j]=1+t[i-1][j-1];
            }
            else
            {
                t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
    }
    cout<<t[c][d]<<endl;
}

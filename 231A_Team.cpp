#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int problems,i,friends[5],solved=0,submit=0;
    cin>>problems;
    while(problems--)
    {
        for(i=0;i<3;i++)
        {
            cin>>friends[i];
        }
        solved=0;
        for(i=0;i<3;i++)
        {
            if(friends[i]==1)
                solved++;
        }
        if(solved>=2)
            submit++;
    }
    cout<<submit<<endl;
    return 0; 
}


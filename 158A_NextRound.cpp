#include<bits/stdc++.h>
using namespace std;
int main()
{
    int contestants,kth_place,i,score[100],next_round=0;
    cin>>contestants>>kth_place;
    for(i=1; i<=contestants; i++)
    {
        cin>>score[i];
    }
    for(i=1; i<=contestants; i++)
    {
        if(score[i]>0 && score[i]>=score[kth_place])
            next_round++;
    }
    cout<<next_round<<endl;
 
}

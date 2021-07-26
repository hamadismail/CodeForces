#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int num_of_state,i,str_value=0;
    string statement;
    cin>>num_of_state;
    for(i=1; i<=num_of_state; i++)
    {
        cin>>statement;
        if(statement[1]=='+')
        {
            str_value++;
        }
        else
        {
            str_value--;
        }
    }
    cout<<str_value<<endl;
    return 0;
}

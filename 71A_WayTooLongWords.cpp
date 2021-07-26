#include<bits/stdc++.h> 
using namespace std;
int main()
{
    int test_case,i;
    cin >> test_case;
    char string[test_case][101];
    for(i=0; i<test_case; i++)
    {
        cin >> string[i];
    }
    for(i=0; i<test_case; i++)
    {
        if(strlen(string[i])>10)
            cout << string[i][0] << strlen(string[i])-2 <<string[i][strlen(string[i])-1] << endl;
        else
            cout << string[i] << endl;
    }
    return 0;
}

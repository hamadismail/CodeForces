#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int board_length,board_width,max_dominoes;
 
    cin>>board_length>>board_width;
    max_dominoes = (board_length*board_width)/2;
    cout<<max_dominoes<<endl;
    return 0;
}

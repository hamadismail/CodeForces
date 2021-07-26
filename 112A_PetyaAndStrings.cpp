#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i;
	string first_string;
	string second_string;
	
	cin>>first_string>>second_string;
 
	for(i =0; i<first_string.size(); i++)
	{
		first_string[i]=tolower(first_string[i]);
		second_string[i]=tolower(second_string[i]);
 
	}
		if(first_string==second_string)
			cout<<"0"<<endl;
		else
		{
			for(i=0;i<first_string.size(); i++)
			{
				if(first_string[i]<second_string[i])
				{
					cout<<"-1"<<endl;
					break;
				}
 
				if(first_string[i]>second_string[i])
				{
					cout<<"1"<<endl;
					break;
				}
			}
		}
}

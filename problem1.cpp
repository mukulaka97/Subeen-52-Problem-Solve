#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i,n;
    cin>>T;

    for(i = 1; i<=T; i++)
    {
        cin>>n;

        if(n%2 == 0)
        {
            cout<<"even"<<endl;
        }
        else
        {
            cout<<"odd"<<endl;
        }
    }

    return 0;
}

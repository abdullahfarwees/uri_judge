#include<bits/stdc++.h>

using namespace std;

int main()
{
int x;
cin>>x;


for(int i=1; i<=x ; i++ )
{
int y;
cin>>y;

if( y == 0 )
{
cout<<"NULL\n";
}
else if(y % 2 != 0)
{
cout<<"ODD ";
}
else
{
cout<<"EVEN ";
}

if( y == 0)
{

}
else if(y > 0 )
{
cout<<"POSITIVE\n";
}
else
{
cout<<"NEGATIVE\n";
}

}

return 0;
}
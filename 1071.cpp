#include<bits/stdc++.h>

using namespace std;

int main()
{
int x,y;
cin >> x >> y;
int odd = 0;

int a = x, b = y;

x = std::min(a,b);
y = std::max(a,b);

cout << x << " "<< y << endl;

for(int i=x;i<=y;i++)
{
	if( abs(i) % 2 != 0)odd += i;
	
	cout<<" " << i ;
}

cout << odd << endl;

return 0;
}

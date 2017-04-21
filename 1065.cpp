#include<bits/stdc++.h>
// 1065
using namespace std;

int main()
{
int p=0;
int a;

for(int i=0;i<5;i++)
{
	cin >> a;
	if(a % 2 == 0)p++;
}

cout << p <<" valores pares" << endl;

return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
int code ;
double qnty;
cin>>code>>qnty;

switch(code)
{
case 1:qnty = qnty * 4.00; break;
case 2:qnty = qnty * 4.50;break;
case 3:qnty = qnty * 5.00;break;
case 4:qnty = qnty * 2.00;break;
case 5:qnty = qnty * 1.50;break;
}

printf("Total: R$ %.2f\n",qnty);

return 0;
}
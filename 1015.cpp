#include<bits/stdc++.h>

using namespace std;

int main()
{
double x1,y1,x2,y2;

cin>>x1>>y1>>x2>>y2;

double X = x2-x1;
X = X*X;

double Y = y2 - y1;
Y = Y*Y;

double ans = sqrt(X+Y);
printf("%.4f\n",ans);


return 0;
}
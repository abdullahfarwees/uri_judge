#include<bits/stdc++.h>

using namespace std;

int main()
{
double hrs, speed , ltr , dist;

cin>>hrs >> speed;

dist = speed * hrs;

double milage = dist/12;

printf("%.3f\n",milage);

return 0;
}
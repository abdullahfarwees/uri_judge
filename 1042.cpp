#include<bits/stdc++.h>

using namespace std;

int main()
{

int arr[3];
cin>>arr[0]>>arr[1]>>arr[2];

int tmp[3];
tmp[0] = arr[0];
tmp[1] = arr[1];
tmp[2] = arr[2];

sort(arr , arr+3);

for(int i=0;i<3;i++)
cout<<arr[i]<<endl;

cout<<endl;
for(int i=0;i<3;i++)
cout<<tmp[i]<<endl;

return 0;
}
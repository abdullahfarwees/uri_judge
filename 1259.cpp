#include<bits/stdc++.h>
// 1259
using namespace std;

int main()
{
int n;
cin >> n;

int arr[n];

for(int i=0;i<n;i++)cin>>arr[i];

sort(arr,arr+n);
stack<int> st;

for(int i=0;i<n;i++)
{
	if(arr[i] % 2 == 0)cout<<arr[i]<<endl;
	else
	{
		st.push(arr[i]);
	}
}

while(!st.empty())
{
	cout<<st.top() << endl;
	st.pop();
}



return 0;
}

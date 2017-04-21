#include<bits/stdc++.h>

using namespace std;

int main()
{
int t;
cin>>t;

while(t--)
{
	stack<char> st;
	string str;
	int count = 0;

	cin >> str;

	int i=0;
	while(str[i] != '\0')
	{

		if( str[i] != '.' && str[i] == '<')
		{
			st.push(str[i]);
		}
		if(str[i] == '>' && !st.empty())
		{
			st.pop();	
			++count;
		}
	i++;
	}

	cout << count << endl;
}




return 0;
}

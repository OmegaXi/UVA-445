#include<iostream>
#include<cstring>

using namespace std;

main()
{
	char a[200];
	int n,t;
	while(cin>>a)
	{
		t=0;
	n = strlen(a);
	for(int i=0;i<n;i++)
		{
			if(a[i]=='!'||a[i]=='\n')
			{
				cout<<endl;
			}
			else
			{
				if(a[i]<='9'&&a[i]>='0')
					{
						t+=a[i]-'0';
					}
				else
				{
					for(int j = 1;j <= t;j++)
					{
						if(a[i] == 'b')
							cout<<" ";
						else
							cout<<a[i];
					}
				t = 0;
				}
			}
        }
		cout<<endl;
	}
}

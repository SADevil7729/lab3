#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
int main()
{
int n,i,j,temp;
vector<int> a;

ifstream in("file.in",ios::in);
in>>n;
a.resize(n+1);
for(i=1;i<=n;i++)
{
	in>>a[i];
	for(j=i;j>=2;j--)
	{
		if(a[j]>a[j-1])//sort
		{
			temp=a[j];
			a[j]=a[j-1];
			a[j-1]=temp;
		}
	}
}
temp=0;
for(i=1;i<=5;i++)
{
temp=temp+a[i];
}
printf("%d\n",temp);
return 0;
}

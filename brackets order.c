#include<stdio.h>
void main()
{
	int n , i ,j,flag;
	printf("ENTER SIZE OF STRING : ");
	scanf("%d",&n);
	char a[n];
	printf("ENTER STRING : ");
	scanf("%s",a);
	for(i=0;i<n;i++)
	{
		if(a[i]==')'||a[i]==']'||a[i]=='}')
		{
			for(j=i;i>=0;j--)
			{
				if (a[i] == ')' )
				{
					if (a[j] =='(')
					{
						a[i] = '0';
						a[j] = '0';
						break;
					}
				}
				
				if (a[i] == ']' )
				{
					if (a[j] =='[')
					{
						a[i] = '0';
						a[j] = '0';
						break;
					}
				}
				
				if (a[i] == '}' )
				{
					if (a[j] =='{')
					{
						a[i] = '0';
						a[j] = '0';
						break;
					}
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==')'||a[i]==']'||a[i]=='}'||a[i]=='{'||a[i]=='['||a[i]=='(')
		{
			flag = 1;
			break;
		}
	}
	if(flag==1)
	{
		printf("false");
	}
	else
	{
		printf("true");
	}
}

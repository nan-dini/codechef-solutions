#include<stdio.h>
int main()		
{
	int t;
	scanf("%d", &t);
    for(int a=0; a<t; ++a)
    {
		int n,m,count=0,x=0;
		scanf("%d %d", &n, &m);
		int ar[n][m],loc[1000000][2];
		for(int i=0; i<n; ++i)
		{
			for(int j=0; j<m; ++j)
			{
				scanf("%1d", &ar[i][j]);
				if(ar[i][j] == 1)
				{
					count = 1;
					loc[x][0] = i; 
					loc[x][1] = j;
					x++;
				}
			}
		}
		if(count == 0)
		{
			for(int i=0; i<n; ++i)
			{
				for(int j=0; j<m; ++j)
				{
					printf("-1 ");
				}
				printf("\n");	
			}	
		}
		else
		{
			for(int i=0; i<n; ++i)
			{
				for(int j=0; j<m; ++j)
				{
					int flag = 0;
					if(ar[i][j] == 1)
					{
						printf("0 ");
					    flag = 1;	
					}
					else
					{
						for(int k=0; k<x; ++k)
						{
							if(loc[k][0] == i || loc[k][1] == j)
							{
								printf("1 ");
								flag = 1;
								break;
							}
						}
					}
					if(flag == 0)
					{
						printf("2 ");
					}
				}
				printf("\n");
			}	
		}
    }
    return 0;
}

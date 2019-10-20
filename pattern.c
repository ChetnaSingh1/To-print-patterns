// pyramid
#include<stdio.h>
main()
{
	int c;
	int i,j,k,row;
	while(1)
	{
	printf("\nSelect which pattern to display");
	printf("\n1.Square \n2.Forward slant line \n3.Backward slant line \n4.Forward triangle \n5.Backward triangle \n6.Pyramid \n ");
	  scanf("%d",&c);
	printf("Enter number of rows & columns  ");
	  scanf("%d",&row);
	switch(c)
	{
		case 1: 
			for(i=0;i<row;i++)
			{
				for(j=0;j<row;j++)
				{
					printf(" * ");
				}
			printf("\n");
			}
			break;
		case 2:
			for(i=0;i<row;i++)
			{
				for(j=0;j<row;j++)
				{
					if(i==j)
						printf(" * ");
					else
						printf("   ");
			    }
			printf("\n");
			}
			break;
		case 3:
			for(i=0;i<row;i++)
			{
				for(j=0;j<=row;j++)
				{
					if((i+j)==row+1/2)
						printf(" * ");
					else
						printf("   ");
			    }
			printf("\n");
			}
			break;	
			
		case 4:
			for(i=0;i<=row-1;i++)
			{
				for(j=0;j<=row-1;j++)
				{
					if(i>=j)
						printf(" * ");
					else
						printf("   ");
			    }
			printf("\n");
			}
			break;
		case 5:
			for(i=0;i<=row;i++)
			{
				for(j=0;j<=row-1;j++)
				{
					if((i+j)>=row)
						printf(" * ");
					else
						printf("   ");
			    }
			printf("\n");
			}
			break;
		case 6:
			for(i=1;i<=row;++i,k=0)
    		{
        		for(j=1;j<=row-i;++j)
        		{
            		printf("  ");
        		}
        	while(k!=2*i-1)
        	{
            	printf("* ");
            	++k;
        	}
        	printf("\n");
    		}
			break;
	}
	}
}


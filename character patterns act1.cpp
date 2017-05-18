    #include <iostream>
    using namespace std;
     
    int main() 
    {
    	int t,m,n;
    	int i=0,j=0;
    	cin>>t;
    	while(t--)
    	{
    		scanf("%d\t%d",&m,&n);
    		for(i=0;i<m;i++)
    		{
         		for(j=0;j<n;j++)
         		{
          			if(i%2==0&&j%2!=0 || i%2!=0 && j%2==0)
           			printf(".");
          			else
          			printf("*"); 
        		}
        		printf("\n");
        	}
        	printf("\n");
    	}	
    	return 0;
    } 
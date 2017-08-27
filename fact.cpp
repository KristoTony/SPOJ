#include <iostream>
using namespace std;

int main() 
{
	int t,r,count;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&r);
		count=0;
		for (int i=5; r/i>=1; i *= 5)
          count += r/i;
		cout << count<<endl;
	}

	return 0;
}
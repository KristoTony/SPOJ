#include <bits/stdc++.h>

using namespace std;

int main (void) {
	int t;
	cin >> t;
	while (t--) 
	{
		int n, x1 = 1000, y1 = 1000, x2 = -1000, y2 = -1000;
		cin >> n;
		while(n--) 
		{
			char type;
			cin >> type;
			if (type == 'p') {
				int x, y;
				cin >> x >> y;
				x1 = min (x1, x);
				y1 = min (y1, y);
				x2 = max (x2, x);
				y2 = max (y2, y);
			} 
			else if (type == 'c') 
			{
				int x, y, r;
				cin >> x >> y >> r;
				x1 = min (x1, x-r);
				y1 = min (y1, y-r);
				x2 = max (x2, x+r);
				y2 = max (y2, y+r);
			}
			else if (type == 'l')
			{
				int a, b, c, d;
				cin >> a >> b >> c >> d;
				x1 = min (x1, min (a, b));
				y1 = min (y1, min (c, d));
				x2 = max (x2, max (a, b));
				y2 = max (y2, max (c, d));
			}
		}
		cout << x1 << " " << y1 << " " << x2 << " " << y2 << endl; 
	}
	return 0;
}
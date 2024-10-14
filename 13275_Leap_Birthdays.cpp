#include <iostream>
using namespace std;
int main() {
    int n, a = 0;
    cin>>n;
    while (n--) {
        int D, M, Y, YQ;
        cin>>D>>M>>Y>>YQ;
        if (D != 29 || M != 2) {
            cout<<"Case "<<++a<<": "<<YQ-Y<<endl;
        } else {
            int c1 = YQ/4 - YQ/100 + YQ/400;
            int c2 = Y/4 - Y/100 + Y/400;
            cout<<"Case "<<++a<<": "<<c1-c2<<endl;
        }
    }
    return 0;
}
/*
#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	int D, M, Y, QY;
	int i = 1;
	while (t--)
	{
		cin >> D >> M >> Y >> QY;
		if (D == 29 && M == 2)
		{
			int count = 0;
			for (int j = Y + 4; j <= QY; j++)
			{
				if (j % 400 == 0)
				{
					count++;
				}
				else if (j % 100 == 0)
				{
					continue;
				}
				else if (j % 4 == 0)
				{
					count++;
				}
			}
			cout << "Case" << i++ << count << endl;
		}
		else
		{
			cout << "Case" << i++ << QY - Y << endl;
		}
	}
	return 0;
}
/*#include<iostream>
using namespace std;
int main()
{
int n, a=0;
cin>>n;
while(n--)
{
int D, M, Y, QY, count=0;
cin>>D>>M>>Y>>QY;
if(D==29 && M==2)
{
for(Y; Y<=QY; Y++)
{
if((Y%400 == 0)||(Y%100!=0 && Y%4==0))
{
count++;
}
}
cout<<"Case "<<++a<<" : "<<count<<endl;
}
else
{
for(Y; Y<QY; Y++)
{
count++;
}
cout<<"Case "<<++a<<" : "<<count<<endl;
}
}

return 0;
}

*/

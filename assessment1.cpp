#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <conio.h>
using namespace std;

int main()
{
srand(time(NULL));

int x, y;
int min= 0;
bool xsign, ysign;

int arrX[100];
int arrY[100];
int distance[100];

for (int i = 0; i<100; i++)
{
x = rand() % 100;
y = rand() % 100;
xsign = rand() % 2;
ysign = rand() % 2;

if (xsign) x *= -1;
if (ysign) y *= -1;

arrX[i] = x;
arrY[i] = y;
}

for (int i = 0; i < 100; i++)
printf("%3d %3d\n", arrX[i],arrY[i]);

for(int i=0;i<100;i++)
{
	for(int j=0;j<100;j++)
	{				
	if(i==j)
	continue;
	else
	{
	
    distance[i]=sqrt((pow((arrX[j]-arrX[i]),2)+pow((arrY[j]-arrY[i]),2)));       
    
    }
    }
}


for(int i=0;i<100;i++)
{
	min=distance[i];
	if(distance[i]<min)
	{
		min=distance[i];
	}
}
cout<<"The shortest distance is"<<min;
return 0;

}

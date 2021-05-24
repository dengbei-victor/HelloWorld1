#include <iostream>
#include <cmath>
using namespace std;

// 使用三点求面积  Sabc=1/2|x1y2-x2y1|
int CalTriArea(int[][2]);

int CalTriArea(int a[][2])
{
    int x1,y1,x2,y2;
    int S;
    x1=a[0][0]-a[1][0];
    x2=a[2][0]-a[1][0];
    y1=a[0][1]-a[1][1];
    y2=a[2][1]-a[1][1];
    S=abs(x1*y2-x2*y1)/2;
    return S;
}

int main()
{
    int a[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j=0; j<2; j++)
        {
            cin >> a[i][j];
        }
        
    }
    cout << CalTriArea(a) <<endl;
    return 0;
}
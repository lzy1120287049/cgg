//计算机平均分取整

#include <iostream>
using namespace std;

int main()
{
	double a, b, c, d,e ,f, g, average;
	double y;
	
	cin >> a >> b >> c >> d >> e >> f>> g; 
	y = (a+b+c+d+e+f+g)/7;
	average = int(y+0.5);   //四舍五入并强制类型转换
	
	cout << average << endl;
	return 0; 
	
 } 

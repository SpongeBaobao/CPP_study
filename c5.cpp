#include "main.h"

//1.文件单独编译
/*
fact.cpp:
long fact(int n);

long perm(int n, int k)
{ // returns P(n,k), the number of permutations of k from n:
	if (n < 0 || k < 0 || k > n) return 0;
	return fact(n) / fact(n - k);
}

max.cpp
long fact(int n)
{ // returns n!
	if (n < 0) return 0;
	int f = 1;
	while (n > 1)
		f *= n--;
	return f;
}

main.h
#pragma once

#include <iostream>
using namespace std;

//long fact(int );
//long perm(int , int );
*/

//int main()
//{
//	//测试fact
//	cout << "测试fact" << endl;
//	for (int i = -1; i < 6; i++)
//		cout << " " << fact(i);
//	cout << endl;
//
//	cout << "测试perm" << endl;
//	//测试perm
//	for (int i = -1; i < 8; i++)
//	{
//		for (int j = -1; j <= i + 1; j++)
//			cout << " " << perm(i, j);
//		cout << endl;
//	}
//
//	return 0;
//}

//2 引用形参
//void swap(int&, int&);
//
//int main()
//{
//	int x, y;
//	x = 1; y = 9;
//	cout << "x = " << x << "\ty = " << y << endl;
//	swap(x, y);
//	cout << "x = " << x << "\ty = " << y << endl;
//}
//
//void swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//	return;
//}


//3 计算圆的面积
//void computeCircle(double r,double& area, double& circumference)
//{ // returns the area and circumference of a circle with radius r:
//	const double PI = 3.141592653589793;
//	area = PI*r*r;
//	circumference = 2 * PI*r;
//}
//
//int main()
//{ // tests the computeCircle() function:
//	double r, a, c;
//	cout << "Enter radius: ";
//	cin >> r;
//	computeCircle(r,a,c);
//	cout << "area = " << a << ", circumference = " << c << endl;
//}

//4 命名空间
//namespace A {
//	int a = 10;
//	namespace B {
//		int a = 20;
//	}
//}
//void main() {
//	cout << "A::a : " << A::a << endl; // 10
//	cout << "A::B::a : " << A::B::a << endl; // 20
//	//cout << "B::a" << B::a << endl; // err: B::a
//}

//习题5.3
//test: cos2x = 2cosx*cosx -1
#include <cmath>
//int main()
//{
//	for (float x = 0; x < 2; x += 0.2)
//		//cout << x << "\t\t" << cos(2 * x) << "\t"
//		//<< 2 * cos(x)*cos(x) - 1 << endl;
//
//		cout << x << "\t\t" << cos(2 * x) - (2 * cos(x)*cos(x) - 1) << endl;
//}
/*
0.2             0.921061        0.921061
0.4             0.696707        0.696707
0.6             0.362358        0.362358
0.8             -0.0291995      -0.0291995
1               -0.416147       -0.416147
1.2             -0.737394       -0.737394
1.4             -0.942222       -0.942222
1.6             -0.998295       -0.998295
1.8             -0.896758       -0.896758
*/

/*
0               0
0.2             -5.96046e-08
0.4             5.96046e-08
0.6             -2.98023e-08
0.8             -5.58794e-09
1               2.98023e-08
1.2             0
1.4             0
1.6             0
1.8             0
*/

//习题5.4
//test: sinx*sinx + cosx*cosx = 1
//int main()
//{
//	for (float x = 0; x < 2; x += 0.2)
//		cout << x << "\t\t" << pow(sin(x), 2) + pow(cos(x), 2) << endl;
//}
/*
0               1
0.2             1
0.4             1
0.6             1
0.8             1
1               1
1.2             1
1.4             1
1.6             1
1.8             1
*/

//习题5.5
//int main()
//{
//	int b = 2;
//	int e = 0;
//		for (float x = 0; x < 2; x += 0.2)
//			cout << x << "\t\t" <<  pow(b,x) << "\t"
//			<< exp(x*log(b)) << endl;
//
//		//log(x) = log(10)(x)
//		//exp(x) = pow(e,x)
//}

//习题5.6
//int min(int, int, int, int);
//int main()
//{
//	int a, b, c, d;
//	cout << "input four postive intgers" << endl;
//	cin >> a >> b >> c >> d;
//	cout << "min intgers is: " << min(a, b, c, d) << endl;
//
//}
//int min(int a, int b, int c, int d)
//{
//	int min;
//	min = a > b ? b : a;
//	min = min > c ? c : min;
//	min = min > d ? d : min;
//
//	return min;
//}

//习题5.7
//int max2(int x, int y);
//int max4(int a, int b, int c, int d);
//int main()
//{
//		int a, b, c, d;
//		cout << "input four postive intgers" << endl;
//		cin >> a >> b >> c >> d;
//		cout << "max intgers is: " << max4(a, b, c, d) << endl;
//}
//
//int max2(int x, int y)
//{ // returns larger of the two given integers:
//	if (x < y) return y;
//	else return x;
//}
//
//int max4(int a, int b, int c, int d)
//{
//	int max = max2(a, b);
//	max = max2(max, c);
//	max = max2(max, d);
//
//	return max;
//}

//习题5.8
//int min(int, int);
//int min(int, int, int);
//int main()
//{
//	cout << "Enter three integers: ";
//	int x, y, z;
//	cin >> x >> y >> z;
//	cout << "Their minimum is " << min(x, y, z) << endl;
//}
//
//int min(int x, int y)
//{
//	return (x < y) ? x : y;
//}
//
//int min(int x, int y, int z)
//{
//	//int min(int, int); //声明
//	return min(min(x,y), z);
//}

//习题5.9
//float average4(float a, float b, float c, float d);
//int main()
//{
//	cout << "Enter four integers: ";
//	float x, y, z, t;
//	cin >> x >> y >> z >> t;
//	cout << "Their average is " << average4(x,y,z,t) << endl;
//}
//
//float average4(float a, float b = 0, float c = 0, float d = 0)
//{
//	return (a + b + c + d) / 4.0;
//}

//习题5.10
float average4(float a, float b = 0, float c = 0, float d = 0);
int main()
{
	cout << "Enter four integers: ";
	float x, y, z;
	cin >> x >> y >> z;
	cout << "Their average is " << average4(x, y, z) << endl;
}

float average4(float a, float b, float c, float d)
{
	return (a + b + c + d) / 4.0;
}
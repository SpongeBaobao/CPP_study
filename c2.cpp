#include <iostream>
#include <cmath>
using namespace std;

//舍入错误
/*
int main()
{
	double x = 1000 / 3.0;						cout << "x = " << x << endl;  // x = 1000/3
	double y = x - 333.0;						cout << "y = " << y << endl; // y = 1/3
	double z = 3 * y - 1.0;						cout << "z = " << z << endl; // z = 3(1/3) - 1
	if (z == 0) cout << "z == 0.\n";
	else cout << "z does not equal 0.\n";             // z != 0
}
*/
/*
x = 333.333
y = 0.333333
z = -5.68434e-14
z does not equal 0.
*/

//计算一元二次方程
/*
int main()
{
	float a, b, c;
	cout << "Enter the coefficients of a quadratic equation:" << endl;
	cout << "\ta: ";
	cin >> a;
	cout << "\tb: ";
	cin >> b;
	cout << "\tc: ";
	cin >> c;

	cout << "The equation is: " << a << "*x*x + " << b
		<< "*x + " << c << " = 0" << endl;
	float d = b*b - 4 * a*c;  // discriminant
	if (d >= 0)
	{
		float sqrtd = sqrt(d); //存在舍入错误的问题
		float x1 = (-b + sqrtd) / (2 * a);
		float x2 = (-b - sqrtd) / (2 * a);

		cout << "The solutions are:" << endl;
		cout << "\tx1 = " << x1 << endl;
		cout << "\tx2 = " << x2 << endl;

		cout << "Check:" << endl;
		cout << "\ta*x1*x1 + b*x1 + c = " << a*x1*x1 + b*x1 + c << endl;
		cout << "\ta*x2*x2 + b*x2 + c = " << a*x2*x2 + b*x2 + c << endl;
	}
	else
		cout << "discriminant err" << endl;

	return 0;
}
*/
/*
Enter the coefficients of a quadratic equation:
a: 0
b: 2
c: 5
The equation is: 0*x*x + 2*x + 5 = 0
The solutions are:
x1 = -nan(ind)
x2 = -inf
Check:
a*x1*x1 + b*x1 + c = -nan(ind)
a*x2*x2 + b*x2 + c = -nan(ind)
*/

//转换inf/-inf/nan的值
/*
int main()
{
	//cin a=0;b=2
	float a, b;
	cout << "Enter the three number:" << endl;
	cout << "\ta: ";
	cin >> a;
	cout << "\tb: ";
	cin >> b;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	float d = 2;  
	float x1 = (-b + 2) / (2 * a); //x1 = 0/0 = nan
	float x2 = (-b - 2) / (2 * a); //x2 = -4/0 = -inf
	float x3 = -(-b - 2) / (2 * a); //x3= -x2 = inf
	
	cout << "x1=" << x1 << endl;
	cout << "x2=" << x2 << endl;
	cout << "x3=" << x3 << endl;

	//float y1 = x1 / x1; //y1 = -nan(ind) = nan/nan
	float y1 = x1*0; //y1 = -nan(ind) = nan*0
	float y2 = x2 * 0;  //y2 = -nan(ind) = -inf*0
	float y3 = x3 / x3; //y3 = -nan(ind) = inf/inf

	cout << "y1=" << y1 << endl;
	cout << "y2=" << y2 << endl;
	cout << "y3=" << y3 << endl;


	return 0;
}

int main()
{
	float x = 1e30;
	cout << "x= " << x << endl;
	x *= x;
	cout << "x= " << x << endl; // inf
	x *= -1.0;
	cout << "x= " << x << endl;
	x *= -1.0;
	cout << "x= " << x << endl; // -inf
} 
*/

//ft --> cm
//1ft = 2.54cm
int main()
{
	float ft, cm;
	cout << "enter ft value:" << endl;
	cin >> ft;
	cout << ft << "ft = " << ft*2.54 << "cm" << endl;
}

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//1:쳲���������
//int main()
//{
//	long bound;
//	cout << "input bound value" << endl;
//	cin >> bound;
//	long f0 = 0, f1 = 1;
//	cout << f0 << endl << f1 << endl;
//	while (true)
//	{
//		long f2 = f1 + f0;
//		if (f2 > bound) break;
//		cout << f2 << endl;
//		f0 = f1;
//		f1 = f2;
//	}
//
//	return 0;
//}


//2 �׳˼���
//int main()
//{
//	long bound;
//	cout << "Enter a positive integer: ";
//	cin >> bound;
//	cout << "Factorial numbers < " << bound << ":\n1, 1";
//	long f = 1, i = 1;
//	//do
//	//{
//	//	f *= ++i;
//	//	cout << ", " << f;
//	//} while (f < bound);
//
//	cout << "Factorial numbers < " << bound << ":\n";
//	for (; f < bound; i++)
//	{
//		cout << f << endl;
//		f *= i;
//	}
//}

//3 continue��֤
//int main()
//{
//	int i;
//	for (i = 0; i < 20; i++)
//	{
//		if (i % 2 == 0) continue;
//		else cout << setw(4) << i << endl;
//	}
//
//}


//4 �����
//int main()
//{
//	//for (int i = 0; i < 8; i++)
//	//	cout << rand() << endl;
//	//cout << "RAND_MAX = " << RAND_MAX << endl;
//
//	unsigned int seed = 0;
//	srand(seed); //�������������
//	cout << rand() << endl; //�Ե�ǰ�����������һ��ת��
//}

//ϰ��4.1
//int main()
//{
//	float a = 4.15;
//	for (int i = 0; i < 4; i++)
//	{
//		a *= 2;
//		cout << a << endl;
//	}
///*8.3
//16.6
//33.2
//66.4*/
//}

//ϰ��4.5
//int main()
//{
//	for (int i = 0; i < 8; i++)
//	{
//		if (i % 2 == 0) cout << i + 1 << endl;
//		else if (i % 3 == 0) continue;
//		else if (i % 5 == 0) break;
//		cout << "in loop.\n";
//	}
//	cout << "End of  program.\n";
//}

/*
1
in loop.
in loop.
3
in loop.
5
in loop.
End of  program.
*/

//ϰ��4.7 4.8 4.9
//int main()
//{
//	int n, sum, i;
//	cout << "input n" << endl;
//	cin >> n;
//	sum = 0;
//	//for (int i = 1; i <= n; i++) {
//	//	sum += i*i;
//	//}
//
//	//i = 0;
//	//while (++i <= n)
//	//	sum += i*i;
//	i = 1;
//	do {
//		sum += i*i;
//		i++;
//	} while (i <= n);
//
//	cout << sum << endl;
//}


//ϰ��4.10
//�������ĳ���
//int main()
//{
//	int m, n, p ,q;
//	cout << "" << endl;
//	cin >> m >> n;
//	p = m / n;
//	q = m % n;
//	cout << "result is:" << p << '.';
//	while (q != 0)
//	{
//		m = q*10;
//		p = m / n;
//		cout << p;
//		q = m % n;
//	}
//}

//int main()
//{
//		int m, n, t;
//		cout << "" << endl;
//		cin >> m >> n;
//		int m2 = m;
//		for (t = 0; m >= n; t++)
//		{
//			m = m - n;
//		}
//		cout << m2 << '/' << n << "=" << t << endl;
//		cout << m2 << '%' << n << "=" << m << endl;
//}

//ϰ��4.11
//int main()
//{
//	int num,t;
//	int ret = 0;
//	cin >> num;
//	while (num != 0) {
//	t = num % 10;
//	//cout << t << endl;
//	ret = ret * 10 + t;
//	num = num / 10;
//	}
//}

//ϰ��4.12 �ͱ����㷨
//#define N 10
//int main()
//{
//	double x, y;
//	x = 1.0;
//	for (int i = 0; i < N; i++)
//	{
//		y = (x + 2 / x) / 2;
//		cout << i + 1 << ":" << y << endl;
//		x = y;
//	}
//
//}
/*
1:1.5
2:1.41667
3:1.41422
4:1.41421
5:1.41421
6:1.41421
7:1.41421
8:1.41421
9:1.41421
10:1.41421
*/
//std
//int main()
//{
//	const double TOLERANCE = 5e-8;
//	double x = 2.0;
//	while (fabs(x*x - 2.0) > TOLERANCE)
//	{
//		cout << x << endl;
//		x = (x + 2.0 / x) / 2.0;
//	}
//	cout << "x = " << x << ", x*x = " << x*x << endl;
//}

//4.13
//int main()
//{
//	int x;
//	int flag = 0;
//
//	cout << "Enter a positive integer: ";
//	cin >> x;
//	int x2 = x; //��Ϊ���
//
//	for (int i = 1; i <= x / 2; i++)
//	{
//		if (i*i == x) { flag = i; break; }
//	}
//
//	while (flag == 0)
//	{
//		x++;
//		for (int i = 1; i <= x / 2; i++)
//		{
//			if (i*i == x) { flag = i; break; }
//		}
//	}
//
//	//�϶��ܵõ���Ч��flag��
//	cout << "sqrt(" << x2 << ") <= " << flag << endl;
//
//}
/*
while (n*n <= x)
++n;
*/

//4.14 ŷ������㷨�����Լ��
int main()
{
	int m, n;
	cout << "Enter 2 positive integer: ";
	cin >> m >> n;

	while (n != 0) {
		int temp = m;
		m = n;
		n = temp%n;
	}
	cout << "���Լ��:" << m << endl;

}

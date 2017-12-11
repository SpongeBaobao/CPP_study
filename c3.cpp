#include <iostream>
using namespace std;

//1 打印三个数中的最小值
/*
int main()
{
	int a, b, c, min;
	cout << "input three integers" << endl;
	cin >> a >> b >> c;

	//if (a < b) min = a;
	//else min = b;

	//if (min < c) cout << "min = " << min << endl;
	//else cout << "min = " << c << endl;

	if (a < b) {
		if (a < c) cout << a << endl;
		else cout << c << endl;
	}
	else {
		if (b < c) cout << b << endl;
		else cout << c << endl;
	}
	return 0;
}
*/

// 2 猜谜游戏
//int main()
//{ // finds the number selected by the user:
//	cout << "Pick a number from 1 to 8." << endl;
//	char ans;
//	cout << "Is it less than 5? (y|n): ";  cin >> ans;
//	if (ans == 'y')  // 1 <= n <= 4
//	{
//		cout << "Is it less than 3? (y|n): ";  cin >> ans;
//		if (ans == 'y')  // 1 <= n <= 2
//		{
//			cout << "Is it less than 2? (y|n): ";  cin >> ans;
//			if (ans == 'y') cout << "Your number is 1." << endl;
//			else cout << "Your number is 2." << endl;
//		}
//		else  // 3 <= n <= 4
//		{
//			cout << "Is it less than 4? (y|n): ";  cin >> ans;
//			if (ans == 'y') cout << "Your number is 3." << endl;
//			else cout << "Your number is 4." << endl;
//		}
//	}
//	else  // 5 <= n <= 8
//	{
//		cout << "Is it less than 7? (y|n): ";  cin >> ans;
//		if (ans == 'y')  // 5 <= n <= 6
//		{
//			cout << "Is it less than 6? (y|n): ";  cin >> ans;
//			if (ans == 'y') cout << "Your number is 5." << endl;
//			else cout << "Your number is 6." << endl;
//		}
//		else  // 7 <= n <= 8
//		{
//			cout << "Is it less than 8? (y|n): ";  cin >> ans;
//			if (ans == 'y') cout << "Your number is 7." << endl;
//			else cout << "Your number is 8." << endl;
//		}
//	}
//}

//3.1
//int main()
//{
//	int count;
//	cout << "input count" << endl;
//	cin >> count;
//
//	if (count > 100) cout << "too many" << endl;
//
//	return 0;
//}

//3.5
/*
int main()
{
	//int p, q;
	//for(p = 0; p <=1; p++)
	//	for (q = 0; q <= 1; q++) {
	//if ((!(p || q)) == (!p || !q)) cout << "equal" << endl;
	//else cout << "unequal" << endl;
	//	}
	//equal
	//unequal
	//unequal
	//equal

	int p, q, r;
	for (p = 0; p <= 1; p++)
		for (q = 0; q <= 1; q++) 
			for(r = 0; r<=1; r++)
		{
			if ((p&&q||r) == (p&&(q||r))) cout << "equal" << endl;
			else cout << "unequal" << endl;
		}
	//equal
	//	unequal
	//	equal
	//	unequal
	//	equal
	//	equal
	//	equal
	//	equal
	return 0;
}
*/

//3.11
//int score;
//score >= 80 && score <= 100;
//
//char ans;
//ans == 'Y' || ans == 'y';
//
//int n;
//n != 8;
//
//char ch;
//ch >= 'A' && ch <= 'Z';
//int n = int(ch);
//n >= 65 && n <= 90;

//3.12
//(a >= 0 && a <= 7) && a != 3;
//(a >= 0 && a <= 7) && (a % 2 != 0);
//(a % 3 == 0) && (a % 30 != 0);
//(ch >= 'a'&&ch <= 'z') || (ch >= 'A' && ch <= 'Z');

//3.17
//abs = x;
//if (x < 0) abs = -x;
//cout << abs << endl;
//
//abs = (x > 0) ? (x : -x);


//习题
//1
int main()
{
	int n, d;
	cout << "Enter two positive integers: ";
	cin >> n >> d;
	if (!(n%d)) cout << n << " is  divisible by " << d << endl; //if ((n%d) == 0);
}

//2
int main()
{ // finds the minimum of foure input integers:
	int n1, n2, n3, n4;
	cout << "Enter four integers: ";
	cin >> n1 >> n2 >> n3 >> n4;
	int min = n1;              // now min <= n1
	if (n2 < min) min = n2;  // now min <= n1 and min <= n2
	if (n3 < min) min = n3;  // now min <= n1, min <= n2, and min <= n3
	if (n4 < min) min = n4;
	cout << "Their minimum is " << min << endl;
}

//3
int main()
{
	int n1, n2, n3;
	cout << "Enter three integers: ";
	cin >> n1 >> n2 >> n3;
	cout << "Their median is ";

	if (n1 > n2)
	{//n1 > n2
		if (n3 > n1) cout << n1;
		else if (n2 > n3) cout << n2;
		else cout << n3;
	}
	else
	{//n1 <= n2
		if (n3 > n2) cout << n2;
		else if (n3 < n1) cout << n1;
		else cout << n3;
	}
}

//4
int main()
{ // sorts two input integers:
	int x, y;
	cout << "Enter two integers: ";
	cin >> x >> y;
	if (x > y) cout << y << " <= " << x << endl;
	else cout << x << " <= " << y << endl;
}

//5
int main()
{ // uses the same name n for different variables:
	int n = 44;
	cout << "n = " << n << endl;
	cin >> n; 
	{ int n;//删除
	cout << "Enter an integer: ";
	cout << "n = " << n << endl;
	}
	{ cout << "n = " << n << endl;
	}
	{ int n;
	cout << "n = " << n << endl;
	}
	cout << "n = " << n << endl;
}

//6
int main()
{
	int age;
	cout << "input age" << endl;
	cin >> age;
	if (age <= 18) cout << "xxx" << endl;
	else if (age > 18 && age <= 65) cout << "xxx" << endl;
	else cout << "xxx" << endl;
}

//7
int main()
{
	int a, b;
	cin >> a >> b;
	if (a%b ? 0 : 1) cout << "mul" << endl;
	cout << "not" << endl;
}

//8
//计算器程序
int main()
{
	int x, y;
	char op;
	cout << "input two integers" << endl;
	cin >> x >> y;
	cout << "input operater" << endl;
	cin >> op;

	switch (op)
	{
	case '+': cout << x + y << endl; break;
	case '-': cout << x - y << endl; break;
	case '*': cout << x * y << endl; break;
	case '/': cout << x / y << endl; break;
	case '%': cout << x % y << endl; break;
	default: cout << "err" << endl;
	}

	return 0;
}

//9
//石头,剪刀,布游戏
int main()
{
	enum Op { STONE, SCISSORS, CLOTH };
	Op x, y;
	if (x == STONE)
	{
		if (y == SCISSORS) cout << "x win" << endl;
		else if(y == CLOTH) cout << "y win" << endl;
		else cout << "draw" << endl;
	}
	if (x == SCISSORS)
	{
		if (y == CLOTH) cout << "x win" << endl;
		else if (y == STONE) cout << "y win" << endl;
		else cout << "draw" << endl;
	}
	if (x == CLOTH)
	{
		if (y == STONE) cout << "x win" << endl;
		else if (y == SCISSORS) cout << "y win" << endl;
		else cout << "draw" << endl;
	}

}

//std
enum Choice { ROCK, PAPER, SCISSORS };
enum Winner { PLAYER1, PLAYER2, TIE };

int main()
{
	int n;
	Choice choice1, choice2;
	Winner winner;
	cout << "Choose rock (0), paper (1), or scissors (2):" << endl;
	cout << "Player #1: ";
	cin >> n;
	choice1 = Choice(n);

	cout << "Player #2: ";
	cin >> n;
	choice2 = Choice(n);

	if (choice1 == choice2) winner = TIE;
	else if (choice1 == ROCK)
		if (choice2 == PAPER) winner = PLAYER2;
		else winner = PLAYER1;
	else if (choice1 == PAPER)
		if (choice2 == SCISSORS) winner = PLAYER2;
		else winner = PLAYER1;
	else // (choice1 == SCISSORS)
		if (choice2 == ROCK) winner = PLAYER2;
		else winner = PLAYER1;

		if (winner == TIE) cout << "\tYou tied.\n";
		else if (winner == PLAYER1) cout << "\tPlayer #1 wins." << endl;
		else cout << "\tPlayer #2 wins." << endl;
}

//10
int main()
{
	enum Op { STONE, SCISSORS, CLOTH };
	Op x, y;
	x = STONE;
	
	switch (y)
	{
	case STONE: cout << "draw" << endl; break;
	case SCISSORS: cout << "x win" << endl; break;
	case CLOTH: cout << "y win" << endl; break;
	default: "err";
	}
}

//std
enum Choice { ROCK, PAPER, SCISSORS };
enum Winner { PLAYER1, PLAYER2, TIE };

int main()
{
	int n;
	Choice choice1, choice2;
	Winner winner;
	cout << "Choose rock (0), paper (1), or scissors (2):" << endl;
	cout << "Player #1: ";
	cin >> n;
	choice1 = Choice(n);

	cout << "Player #2: ";
	cin >> n;
	choice2 = Choice(n);

	switch (choice2)
	{
	case ROCK:
	{ if (choice1 == ROCK) winner = TIE;
	else if (choice1 == PAPER) winner = PLAYER2;
	else  winner = PLAYER1; } break;

	case PAPER: {}; break;

	case SCISSORS: {}; break;
	}

	//or
	switch (choice2 - choice1)
	{
	case  0:
		winner = TIE;
		break;
	case -1:
	case  2:
		winner = PLAYER1;
		break;
	case -2:
	case  1:
		winner = PLAYER2;
	}

//11
int main()
{
	enum Op { STONE, SCISSORS, CLOTH };
	Op x, y;
	x = STONE;
	
	if (y == STONE) cout << "draw" << endl;
	else cout <<( (y == SCISSORS) ? "x win" : "y win" )<< endl;
}

//std
int n = (choice1 - choice2 + 3) % 3;
Winner winner = (n == 0 ? TIE : (n == 1 ? PLAYER1 : PLAYER2));


//12
#include <cmath>
int main()
{
	double a, b, c;
	cout << "Enter the coefficients of a quadratic equation:" << endl;
	cout << "\ta: ";
	cin >> a;
	cout << "\tb: ";
	cin >> b;
	cout << "\tc: ";
	cin >> c;

	if (a == 0)
	{
		cout << "This is not a quadratic equation: a == 0\n";
		return 0;
	}

	cout << "The equation is: " << a << "*x*x + " << b
		<< "*x + " << c << " = 0" << endl;
	double d = b*b - 4 * a*c;  // discriminant
	if (d >= 0)
	{
		double sqrtd = sqrt(d); //存在舍入错误的问题
		double x1 = (-b + sqrtd) / (2 * a);
		double x2 = (-b - sqrtd) / (2 * a);

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

//13
#include <cmath>
int main()
{
	long int n, 
	int arr[6] = {0};
	cout << "输入一个6位数的整数" << endl;
	cin >> n;

	for (int i = 0; i <= 5; i++)
	{
		arr[i] = n / pow(10, i) % 10;
	}

	int sum = 0;
	for (int i = 0; i <= 5; i++)
	{
		sum+= arr[i];
	}

	cout << "sum =" << sum << endl;
}

//14
int main()
{ // reports the user's grade for a given test score:
	int score;
	cout << "Enter your test score: ";
	cin >> score;
	if (score >= 0 && score <= 100)
	{
	switch (score / 10)
	{
	case 10:
	case  9: cout << "Your grade is an A.\n";  break;
	case  8: cout << "Your grade is a B.\n";   break;
	case  7: cout << "Your grade is a C.\n";   break;
	case  6: cout << "Your grade is a D.\n";   break;
	case  5:
	case  4:
	case  3:
	case  2:
	case  1:
	case  0: cout << "Your grade is an F.\n";  break;
	}
	}
	else
	cout << "Goodbye." << endl;
}
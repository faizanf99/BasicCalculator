#include<iostream>

using namespace std;

int add(int x,int y)
{
	return x+y;
}

int sub(int x,int y)
{
	return x-y;
}

int mul(int x,int y)
{
	return x*y;
}

int div(int x,int y)
{
	return x/y;
}

int mod(int x,int y)
{
	return x%y;
}

int power(int x , int y )
{
	int power=1;
	for(int i=0;i<y;i++)
	{
		power=power*x;
	}
	return power;
}

int main ()
{
	int n,num1,num2,result;
	cout << "********************\n*    CALCULATOR    *\n********************\n";
	cout << "\n1.FOR ADDITION\n2.FOR SUBTRACTION\n3.FOR MULTIPLICATION\n4.FOR DIVISION\n5.FOR MODULUS\n6.POWER (NUM1^NUM2)\n7.    \n YOUR ANSWER : ";
	cin >> n;
	cout << "\nENTER FIRST NUMBER : ";
	cin >> num1;
	cout << "ENTER SECOND NUMBER : ";
	cin >> num2;
	switch (n)
	{
		case 1:	
			result=add(num1,num2);
		break;
		
		case 2:
			result=sub(num1,num2);
		break;	
		case 3:
			result=mul(num1,num2);
		break;
		case 4:
			result=div(num1,num2);
		break;
		case 5:
			result=mod(num1,num2);
		break;
		case 6:
			result=power(num1,num2);
		break;
	}
	cout << "RESULT IS = "<< result;
	return 0;
}

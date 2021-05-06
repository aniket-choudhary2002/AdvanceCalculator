#include <bits/stdc++.h>
using namespace std;
int a,b;
char temp;

int add(){
	cout << "Enter the numbers to add and press d when complete: ";
	int sum = 0;
	while(1){
		cin >> temp;
		if (temp=='d')
		{
			return sum;
		}
		a = (temp-'0');
		sum+=a;
	}
}

float subst(){
	cout << "Enter the initial to substract from and the number to subtract: ";
	cin >> a >> b;
	return a-b;
}

float mult(){
	cout << "Enter the numbers to multiply and press d when complete: ";
	int prod = 1;
	while(temp!='d'){
		cin >> temp;
		if (temp=='d')
		{
			return prod;
		}
		a = (temp-'0');
		prod*=a;
	}
	return prod;
}

float divs(){
	cout << "Enter the numbers to divide: ";
	cin >> a >> b;
	return a/b;
}

float fgcd(){
	cout << "Enter the numbers for gcd: ";
	cin >> a >> b;
	return __gcd(a,b);
}

float remd(){
	cout << "Enter the numbers to get remainder: ";
	cin >> a >> b;
	return a%b;
}

float lcm(){
	cout << "Enter the numbers to get lcm: ";
	cin >> a >> b;
	return a*b/__gcd(a,b);
}

float fact(){
	cout << "Enter the number to get factorial: ";
	cin >> a;
	int res = 1, i;
    for (i = 2; i <= a; i++)
    res *= i;
    return res;
}

int main(){
	cout << "--------------------Calculator-------------------------" << endl;
	cout << "Enter the index of the calculation you want to perform" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Substraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "5. Remainder" << endl;
	cout << "6. Greatest Common Divisor" << endl;
	cout << "7. Least Common multiple" << endl;
	cout << "8. Factorial(greater values may take time)" << endl;
	cout<<"9. Exit"<<endl;
	cout << endl;
	cout << "Press any key to exit(except the above ones)" << endl;
	cout << endl;
	cout << "Enter Your choice: ";
	cin >> temp;
	if (temp=='1')
	{
		cout << add() << endl;
	}
	else if (temp=='2')
	{
		cout << subst();
	}
	else if(temp=='3'){
		cout << mult();
	}
	else if (temp=='4')
	{
		cout << divs();
	}
	else if (temp=='5')
	{
		cout << remd();
	}
	else if (temp=='6')
	{
		cout << fgcd();
	}
	else if (temp=='7')
	{
		cout << lcm();
	}
	else if (temp=='8')
	{
		cout << fact();
	}
	else
	{
	return 0;
		exit(0);
	}
	return 0;
}

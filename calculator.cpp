#include<iostream>
using namespace std;

void sum(int a, int b)
{
 int sum = a+b;
 cout << "sum is" << sum;
}
void subtract(int c, int d)
{
 int subtract = c-d;
 cout<<"ans is"<<subtract;
}
void mul(int a,int b)
{
 int multiplay = a*b;
 cout<<"mul is"<<multiplay;
}
 int main()
{
int a,b,c,d;
sum(a,b);
subtract(c,d);
mul(a,b);  
return 0;
}

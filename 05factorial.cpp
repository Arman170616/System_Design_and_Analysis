/*
ALGORITHM
1. Create an array res of MAX size where MAX is a number of maximum digits in
output.
2. Initialize the value stored in res as 1 and initialize res_size (size of ‘res[]’) as 1.
3. Multiply x with res and update res and res_size to store the multiplication result
for all the numbers from x = 2 to n.
4. To multiply a number x with the number stored in res[], one by one multiply x with
every digit of res.
5. To implement multiply function perform the following steps:
a. Initialize carry as 0.
b. Do following for i = 0 to res_size – 1
■Find value of res[i] * x + carry. Let this value be prod.
■Update res[i] by storing the last digit of prod in it.
■Update carry by storing the remaining digits in carry.
c. Put all digits of carry in res[] and increase res_size by the number of
digits in carry.

*/

#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define MAX 500
int multiply(int x, int res[], int res_size);
void factorial(int n)
{
int res[MAX];
res[0] = 1;
int res_size = 1;
for (int x = 2; x <= n; x++) res_size = multiply(x, res,
res_size);
cout << "Factorial of given number is \n";
for (int i = res_size - 1; i >= 0; i--) cout << res[i];
}
int multiply(int x, int res[], int res_size)
{
int carry = 0;
for (int i = 0; i < res_size; i++) {
int prod = res[i] * x + carry;
res[i] = prod % 10;
carry = prod / 10;
}
while (carry) {
res[res_size] = carry % 10;
carry = carry / 10;
res_size++;
}
return res_size;
}
int main()
{
lli x;
cin>>x;
factorial(x);
}

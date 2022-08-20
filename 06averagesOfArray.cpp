/*
ALGORITHM
1. The program takes an array of elements and stores them in an array.
2. Using a for loop, the sum of the array is calculated.
3. The result is printed.
4. Using a for loop, the average of the array is calculated.
5. EXIT
*/

#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define MAX 500
lli sum(lli arr[], lli n)
{
lli sum = 0;
for (lli i = 0; i < n; i++) sum += arr[i];
return sum;
}
double average(lli a[], lli n)
{
lli sum = 0;
for (lli i=0; i<n; i++)
sum += a[i];
return (double)sum/n;
}
int main()
{
int n; lli arr[n];
for(lli i=0;i<n;i++) cin>>arr[i];
cout << "Sum of given array is " << sum(arr,n)<<endl;
cout << "Average of given array: "<<average(arr, n) << endl;
return 0;
}

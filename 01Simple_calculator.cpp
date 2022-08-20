
/*
Algorithm
1. BEGIN
2. ENTER two integers separated by an operator and suffixed with a semicolon.
3. IF the suffix is not a semicolon but “=” go to step ..........
ELSE continue
4. ENTER integers in a vector nums
5. ENTER the operator in another vector ops
6. IF op = “+”, ENTER the summation of the integers in result vector
ELSE IF op = “-”, ENTER the subtraction of the integers in result vector
ELSE IF op = “*”, ENTER the multiplication of the integers in result vector
ELSE IF op = “/”,
IF the second operand is zero print “Invalid”
ELSE ENTER the result of division of the integers in result vector
ELSE IF op = “%”, ENTER the modulo of the integers in result vector
7. PRINT
*/


#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
lli a,b;
char op,ch;
vector<lli> nums;
vector<char> ops;
vector<lli> result;
while(1){
cin>>a>>op>>b>>ch;
nums.push_back(a);
nums.push_back(b);
ops.push_back(op);
if(op=='+') result.push_back(a+b);
else if(op=='-') result.push_back(a-b);
else if(op=='*') result.push_back(a*b);
else if(op=='/') result.push_back(a/b);
else if(op=='%') result.push_back(a%b);
if(ch=='=') break;
}
lli len = ops.size();
for(lli i=0,j=0;i<len;i++){
cout<<nums[j]<<" "<<ops[i]<<" "<<nums[j+1]<<" ="<<result[i]<<endl;
j+=2;
}
}

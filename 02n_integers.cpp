/* 

Algorithm
1. BEGIN
2. WHILE the input stream consists of integers
ENTER integers
3. IF number of integers is ODD, ABORT
4. SWITCH (character)
a. Case +
i.
Print summation of two numbers
ii.
Iterate next two numbers
b. Case -
i.
Print subtraction of two numbers
ii.
Iterate next two numbers
c. Case *
i.
Print multiplication of two numbers
ii.
Iterate next two numbers
d. Case /
IF the second operand is zero, PRINT invalid
ELSE
i.
Print division of two numbers
ii.
Iterate next two numbers
e. Case %
i.
Print modulo of two numbers
ii.
Iterate next two numbers
5. END
*/


#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
char ch;
lli x; string s;
vector<lli> nums;
while(1){
cin>>s;
if(s=="+" or s=="-" or s=="*" or s=="/" or s=="%") break;
istringstream iss(s);
iss>>x; nums.push_back(x);
}
lli len = nums.size();
if(len%2) cout<<"Invalid length of numbers\n";
else{
if(s=="+"){
for(lli i=0;i<len;i+=2) cout<<nums[i]+nums[i+1]<<" ";}
if(s=="-"){
for(lli i=0;i<len;i+=2) cout<<nums[i]-nums[i+1]<<" ";}
if(s=="*"){
for(lli i=0;i<len;i+=2) cout<<nums[i]*nums[i+1]<<" ";}
if(s=="/"){
for(lli i=0;i<len;i+=2) {
if(nums[i+1]==0) cout<<"invalid ";
else cout<<nums[i]/nums[i+1]<<" ";}}
if(s=="%"){
for(lli i=0;i<len;i+=2) cout<<nums[i]%nums[i+1]<<" ";}
}}





/*
ALGORITHM
1. Find length of str. Let length be n.
2. Initialize low and high indexes as 0 and n-1 respectively.
3. Do the following while the low index ‘l’ is smaller than the high index ‘h’.
i. If str[l] is not the same as str[h], then return false.
ii. Increment l and decrement h, i.e., do l++ and h–.
4. If we reach here, it means we didn’t find a mis
SOURCE CODE
*/

#include <bits/stdc++.h>
using namespace std;
#define lli long long int
string isPalindrome(string S)
{
for (int i = 0; i < S.length() / 2; i++) {
if (S[i] != S[S.length() - i - 1]) {
return "No. This is not a palindrome";
}
}
return "Yes, this is a palindrome";
}
int main(){
string s;
cin>>s;
cout<<isPalindrome(s);
}

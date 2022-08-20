
/*
ALGORITHM
1.
START
2. Open input.txt file and assign in f;
3. Now, read input text file and assign it into another variable
4. Print read file
5. Open output.txt
6. Use if condition and for loop for performing calculation
7. Display output and close file by using close()
8. Save and ExitSOURCE CODE

*/
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
double x;
vector<double>nums;
while(x!=-1){
cin>>x; nums.push_back(x);
for(int i=0; i<nums.size()-1; i+=2)
{
double num1 = nums[i], num2 = nums[i+1];
cout<<num1<<" + "<<num2<< " = "<<num1+num2<<endl;
cout<<num1<<" - "<<num2<< " = "<<num1-num2<<endl;
cout<<num1<<" * "<<num2<< " = "<<num1*num2<<endl;
if(num2==0){
cout<<"Invalid input for division and modulation operation."<<endl;
}
else cout<<num1<<" / "<<num2<< " = "<<num1/num2<<endl;
if(num2==0) cout<<"Invalid input."<<endl;
else cout<<num1<<" % "<<num2<< " = "<<(int)num1%(int)num2<<endl;
}
cout<<endl;
}
return 0;
}

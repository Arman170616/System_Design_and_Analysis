#prbolem-1
----------
def add(x, y):
    return x+y
def sub(x, y):
    return x - y
def mul(x, y):
    return x*y
def div(x, y):
    return x / y
def mod(x, y):
    return x % y

print("Select operation")
print("1. Add")
print("2. Sub")
print("3. mul")
print("4. div")
print("5. mod")

while True:
    choice = input("Enter choise(1/2/3/4/5): ")

    if choice in ('1', '2', '3', '4', '5'):
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))

        if choice == '1':
            print(num1, "+", num2, "=", add(num1, num2))
        elif choice == '2':
            print(num1, "-", num2, "=", sub(num1, num2))
        elif choice == '3':
            print(num1, "*", num2, "=", mul(num1, num2))
        elif choice == '4':
            print(num1, "/", num2, "=", div(num1, num2))
        elif choice == '5':
            print(num1, "%", num2, "=", mod(num1, num2))
        else:
            print("Invalid input")




problem-02:
-----------

inp = input("Enter data: ");
data = inp.strip()
data = data.split()
sign = data.pop()

output =[]
if len(data%2)==0:
    if sign == '+':
        for i in range(0, len(data),2):
            output.append(int(data[i]) + int(data[i+1]))

    elif sign == '-':
        for i in range(0, len(data), 2):
            output.append(int(data[i]) - int(data[i + 1]))

    elif sign == '*':
        for i in range(0, len(data), 2):
            output.append(int(data[i]) * int(data[i + 1]))

    elif sign == '/':
        for i in range(0, len(data), 2):
            output.append(int(data[i]) / int(data[i + 1]))

    print(output)
else:
    print("please enter pair number")




problem-03:
-----------
def isPalindrome(s):
	return s == s[::-1]

s = input("Enter data:")
ans = isPalindrome(s)

if ans:
	print("Plindrome")
else:
	print("Not palindrome")




problem-05
----------
num = int(input("Enter a num: "))

fact = 1
for i in range(1, num+1):
    fact = fact*i
print("Fcatorial using for loop =",fact)

#while loop
fact = 1
i =1
while i<= num:
    fact = fact*i
    i = i+1

print("Fcatorial using while loop =",fact)


problem-06
----------
def Sum(x):
    return sum(x)
def average(y):
    Sum = sum(y)
    return Sum/len(y)
num = list(map(int, input().split()))
print(num)
print('Sum = ', Sum(num))
print('Average = ', average(num))



problem-07
----------

public class Example{
    public static void main(String args[]){
        try{
            class.forName("No class exit");
        }
        catch(classNotFoundException ex){
            ex.printStackTrace();
        }
    }
}


Problem-08
----------
f = open("input.txt", "r")
file_read = f.readline()
f.close()
print(file_read)
inp = str(file_read)
print(inp)

data = inp.strip()
data = data.split()
f = open("output.txt", "w")

if len(data) % 2 == 0:
    l = 0
    for i in range(0, len(data), 2):
        l = l + 1
        output = []
        output.append((str(int(data[i]) + int(data[i + 1]))))
        output.append((str(int(data[i]) - int(data[i + 1]))))
        output.append((str(int(data[i]) * int(data[i + 1]))))
        output.append((str(int(data[i]) / int(data[i + 1]))))
        ans = ' '.join(output)

        line = "case" + str(l) + ':' + ans + '\n'
        f.write(line)
        print(output)

    f.close()
else:
    print("please enter pair num")

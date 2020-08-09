# Program to find the factorial.
# Input from the user
n=int(input("Give the value for factorial: "))
fac = 1
if n<0:
   print("Error!!")
else:
   while n>1:
       fac=fac*n
       n-=1
   print("the factorial is",fac)
# Program to find the sum 1+1/2+.... till the sum does not change by 0.001.
# Input from the user
n=int(input("Enter n :"))
f=0
m=True
k=1
sum=0.0
sub=0.0
while k<=n and m:
    sub=sum
    f=k
    sum = sum + 1 / f
    sub = sum - sub
    k+=1
    if sub<=0.001:
        print("Sum does not change by more than 0.001")
        m=False
print("sum is :",sum)

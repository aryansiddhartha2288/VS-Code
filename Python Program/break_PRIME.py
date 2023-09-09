#check prime or not 
n=int(input("enter a number "))
i=2
while i<=n:
    if n%i==0:
        break
    i+=1
if i==n:
    print("PRIME")
else:
    print("NOT PRIME")

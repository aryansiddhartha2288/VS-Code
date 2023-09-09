#calculate sum of first N natural number 

N=int(input("enter a number "))
i=1
s=0
while i<=N:
    s=s+i
    i+=1
print("sum is",s)  

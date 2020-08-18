#Cross product

import One
V=One.A
import Two
W=Two.B
print('The two given matrices are: ')
print(V)
print(W)

#compute M X N and store values in ana array
i=0
k=0
j=0
sum=0
arr=[[0,0,0],[0,0,0],[0,0,0]]
while i<=2:
    j=0
    while j<=2:
        k=0
        sum=0
        while k<=2:
            sum=sum+ V[i][k]*W[k][j]
            k=k+1
            arr[i][j]=sum
        j=j+1
    i=i+1

#print(arr)
print('The final matrix after cross product is: ' )
print(arr)

#compute MXA
vector1=[5,6,1]
print(V)
p=0
q=0
r=0
sum2=0
vector_new=[0,0,0]
while p<=2:
    r=0
    sum2=0
    while r<=2:
        sum2=sum2+V[p][r]*vector1[r]
        r=r+1
        vector_new[p]=sum2
    p=p+1
print('The value of A X M is: ' )
print(vector_new)
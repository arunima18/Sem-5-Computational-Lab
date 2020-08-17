#Cross product

import One
V=One.A
print(V)
import Two
W=Two.B
print(W)
print(W[0][1])

i=0
k=0
j=0
sum=0
arr=[[0,0,0],[0,0,0],[0,0,0]]
print(arr[0][2])
arr[0][0]=22
print(arr)
while i<=2:
    print('iloop')
    j=0
    while j<=2:
        print('jloop')
        k=0
        sum=0
        while k<=2:
            print('kloop')
            sum=sum+ V[i][k]*W[k][j]

            k=k+1
            #print(sum)
            arr[i][j]=sum
        j=j+1
    i=i+1

#print(arr)

#compute MXA

vector1=[5,6,1]
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

print(vector_new)



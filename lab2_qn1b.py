#avg distance in a matrix

matrix=[[1,2,3,4,5,6],
        [7,8,9,10,11,12],
        [13,14,15,16,17,18],
        [19,20,21,22,23,24],
        [25,26,27,28,29,30],
        [31,32,33,34,35,36]
        ]
#print(matrix[0][4])

#3*3
i=0
t=0
sum=0
j=0
#forward sum





while i<=(5):
    t=0
    print('hello')
    while t<=(5-i):
        sum=sum+t
        #sum=sum+t
        #sum1=(sum+t)+((3*j)+(j*2*sum))
        t=t+1
        print('Hi' + str(sum))

    i=i+1
y=2*sum
print('sum is '+ str(y))
sumf=0
k=0
j=0

while k<=5:
    j=k
    while (j<=(5)):
        sumf=sumf+ ((5-j)*6*6)+y
        j=j+1
    k=k+1
final=sumf-(6*y)
print('jejdjekrjkr' + str(final))

j=0
sumb=0
x=0
while x<=5:
    j=x
    while j<=5:
        sumb=sumb+(5-j)*6*6 + y
        j=j+1
    print(sumb)
    x=x+1

print(sumb)
print(sumf)
print(sumb+final)

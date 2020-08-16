#avg distance in an array

i=0
sum=0
t=1
sum1=0

#Calculating front distance with unit of distance=1 unit
while i<=5:
    t=1
    while t<=(6-i):
        sum=sum+(t-1)
        print(sum)
        t=t+1
    sum1=sum
    print('heyyy' + str(sum1))
    i=i+1

#Back distance is same as front distance

y=2 * sum
print('final ' + str(y))
avg=y/(6*6)
print(avg)


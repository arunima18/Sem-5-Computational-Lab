#dot product and cross product

vector1=[5,6,1]
vector2=[2,8,9]

#Compute addition

i=0
sum=0
sum1=0
sum2=0
sum3=0
sumi=0
while i<=2:
    if i==0:
        sum=vector1[i]+vector2[i]
        sum1=sum
    elif i==1:
        sum=vector1[i]+vector2[i]
        sum2=sum
    else:
        sum = vector1[i] + vector2[i]
        sum3=sum
    i=i+1

summation=[sum1,sum2,sum3]
print(summation)


#Compute Dot product
j=0
sumdot=0
while j<=2:
    dot=vector1[j]*vector2[j]
    sumdot=sumdot + dot
    j=j+1

print(sumdot)

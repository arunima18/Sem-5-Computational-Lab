#dot product and cross product

#define your own vector
vector1=[5,6,1]
vector2=[2,8,9]
print('the given vectors are: ')
print(vector1)
print(vector2)

#Compute addition
add=[0,0,0]
i=0
sum=0

while i<=2:
    sum=vector1[i]+vector2[i]
    add[i]=sum 
    i=i+1

print('The resultant vector after addition is: ')
print(add)


#Compute Dot product
j=0
sumdot=0
while j<=2:
    dot=vector1[j]*vector2[j]
    sumdot=sumdot + dot
    j=j+1
print('The dot product of the two matrices is: '+ str(sumdot))
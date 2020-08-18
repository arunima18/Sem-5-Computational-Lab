#avg distance in a matrix

matrix=[[1,2,3,4,5,6],
        [7,8,9,10,11,12],
        [13,14,15,16,17,18],
        [19,20,21,22,23,24],
        [25,26,27,28,29,30],
        [31,32,33,34,35,36]
        ]
i=1
j=1
d=0
#compute the total disntance,unit of distance is 1, for each row 
while i<=6:
    j=i
    while j<=6:
        d=d+abs(i-j)+abs(j-i)
        j=j+1
    i=i+1
#print('The average distance between two points in each row is ' + str(d))

sumf1=0
sumf2=0
k=1 
j=1

#Compute the total distance using d
while k<=6:
    j=1 
    while (j<=(7-k)):
        #forward sum
        sumf1=sumf1+ ((j-1)*6*6)+d 
        #backward sum
        sumf2=sumf2+((j-1)*6*6)+d 
        j=j+1
    k=k+1

#sum1+sum2 contains extra 6*d disntances due  to the efinition of backward sum in all those rows
final=sumf1+sumf2-6*d
print('The total distances between any two points in the matrix is ' + str(final))
avg=final/(36*36)
print('The average distance between any two points in the matrix is ' + str(avg))

"""
The total distances between any two points in the matrix is 5040
The average distance between any two points in the matrix is 3.888888888888889


"""


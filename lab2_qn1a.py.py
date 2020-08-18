#Avg distance between two points in an array
#Draw the points for reference
arr={1,2,3,4,5,6}
i=1
j=1
d=0
#compute the total disntance,unit of distance is 1  
while i<=6:
    j=i
    while j<=6:
        d=d+abs(i-j)+abs(j-i)
        j=j+1
    i=i+1
#Find the avg distance 
avg=d/(6*6)
print(arr)
print('The average distance between any two pints in this array is ' + str(avg))
    


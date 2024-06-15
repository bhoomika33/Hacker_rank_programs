n=int(input()) 
l=[] 
for i in range(n):
    n=int(input()) 
    l.append(n) 
    k=set(l) 
    distinct_elements=len(k)

print("There are",distinct_elements,"distinct element in the array.")
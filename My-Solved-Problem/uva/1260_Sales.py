import sys

#sys.stdin=open('in','r')
#sys.stdout=open('out','w')

t=int(input())

while t>0:
    n=int(input())
    line=input()
    ex=[int(i) for i in line.split()]
    ge=[0 for i in range(n)]

    for i in range(n-1):
        for j in range(i+1,n):
            if ex[j]>=ex[i]:
                ge[j]+=1

    print(sum(ge))    

    t-=1

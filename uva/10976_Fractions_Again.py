import sys

#sys.stdin=open('in','r')
#sys.stdout=open('out','w')

for line in sys.stdin:
    k=int(line)
    y=k+1
    c=0
    ans=[]
    while y<=2*k:
        x=k*y//(y-k)
        if k==(x*y/(x+y)):
            c+=1
            ans.append('1/{} = 1/{} + 1/{}'.format(k,x,y))
        y+=1
    print(c)
    for an in ans:
        print(an)

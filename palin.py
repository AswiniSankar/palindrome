'''
3
aswini
madam
paap
NO
YES ODD
YES EVEN
'''
n=int(input())
s=['']*n;
c=['']*n;
for i in range(0,n):
    s[i] = str(input())
    temp = s[i]
    c[i] = temp[::-1]
for i in range(0,n):
    if s[i] == c[i]:
        if len(c[i])%2==0:
            print("YES EVEN")
        else:
            print("YES ODD")
    else:
        print("NO")

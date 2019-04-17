x = int(input())

print("%d ano(s)" % (x//365))
x %= 365
print("%d mes(es)" % (x//30))
x %= 30
print("%d dia(s)" % x)

x = int(input())
print(x)
print("%d nota(s) de R$ 100,00" % (x//100))
x %= 100
print("%d nota(s) de R$ 50,00" % (x//50))
x %= 50
print("%d nota(s) de R$ 20,00" % (x//20))
x %= 20
print("%d nota(s) de R$ 10,00" % (x//10))
x %= 10
print("%d nota(s) de R$ 5,00" % (x//5))
x %= 5
print("%d nota(s) de R$ 2,00" % (x//2))
x %= 2
print("%d nota(s) de R$ 1,00" % x)

import math

a = int(input("Введите длину А:"))
b = int(input("Введите длину B:"))
c = int(input("Введите длину c:"))

p = 1/2*(a+b+c)
S = math.sqrt(p*(p-a)*(p-b)*(p-c))

print("Площадь треугольника равна: ", S)

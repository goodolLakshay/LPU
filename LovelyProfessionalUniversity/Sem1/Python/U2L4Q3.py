x = int(input("X: "))
y = int(input("Y: "))
if x == 0 or y == 0:
    print("value must be greater than 0")
i = 1
while i <= x and i <= y:
    if x % i == 0 and y % i == 0:
        gcd = i
    i += 1
print("gcd:", gcd)

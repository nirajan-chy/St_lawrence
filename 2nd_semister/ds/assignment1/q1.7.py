# Sum of Infinite Geometric Series

a = 1      
r = 1 / 3     

if abs(r) < 1:
    s = a / (1 - r)
    print("Sum of infinite geometric series:", s)
else:
    print("Infinite sum does not exist.")
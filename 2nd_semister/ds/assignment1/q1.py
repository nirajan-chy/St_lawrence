#create sets A , B , C

A = {1 , 2, 3 , 4, 5 , 6 , 7 , 8, 9, 10}
B = {2 , 4, 6 , 8 , 10 , 12 , 14}
C = {1 , 3 , 5 , 7 , 9}

#Is B a subset of A
print("Is B is the subSets of A" , B.issubset(A)) # false 

#Is C is the subset of A
print("Is C is the subSets of A" , C.issubset(A)) # True 

# The union of A and B
print("The union of A and B = " , A.union(B)) #{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14}

# The intersection of A and C
print("The intersection of A and C = " , A.intersection(C))   # {1, 3, 5, 7, 9}

# The difference of A and B 
print("The difference of A and B = " , A.difference(B)) # {1, 3, 5, 7, 9}

# The symmetric difference of B and C 
print("The symmetric difference of B and C = " , B.symmetric_difference(C)) #{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14}

#The cartesian products A * B 
print("The cartesian produdct of A * B = " , {(a, b) for a in A for b in B}) # {(6, 12), (3, 4), (5, 4), (4, 6), (4, 12), (3, 10), (9, 2), (5, 10), (10, 6), (9, 8), (8, 6), (2, 2), (8, 12), (1, 6), (9, 14), (10, 12), (2, 8), (2, 14), (1, 12), (6, 2), (7, 4), (7, 10), (6, 8), (6, 14), (4, 2), (5, 6), (4, 8), (3, 6), (3, 12), (4, 14), (8, 2), (5, 12), (10, 2), (9, 4), (9, 10), (8, 8), (2, 4), (1, 2), (8, 14), (10, 8), (10, 14), (2, 10), (1, 8), (1, 14), (6, 4), (7, 6), (7,12), (6, 10), (3, 2), (5, 2), (4, 4), (4, 10), (3, 8), (3, 14), (8, 4), (5, 8), (5, 14), (10, 4), (9, 6), (9, 12), (8, 10), (1, 4), (10, 10), (2, 6), (2, 12), (1, 10), (7, 2), (6, 6), (7, 8), (7, 14)}
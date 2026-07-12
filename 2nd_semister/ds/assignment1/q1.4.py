domain = {1, 2, 3, 4}
codomain = {'a', 'b', 'c', 'd'}

f = {
    1: 'a',
    2: 'b',
    3: 'c',
    4: 'd'
}

# check injective 
injective = len(set(f.values())) == len(domain)
print(injective)

# check surjective
surjective = set(f.values()) == codomain
print(surjective)

# check bijective
bijective = injective & surjective
print(bijective)

# check Inverse if Bijective

if bijective:
    inverse = {v: k for k, v in f.items()}
    print("Inverse Function:", inverse)
else:
    print("Inverse does not exist.")


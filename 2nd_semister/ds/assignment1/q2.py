def generate_power_set(S):
  S = list(S)
  power_set = [[]]
  for element in S:
    power_set += [subset + [element] for subset in power_set]
    return power_set
  
  S = [1 , 2, 3]
  result = generate_power_set(S)

  print("Power Set : ")
  for subset in result :
    print(set(subset))
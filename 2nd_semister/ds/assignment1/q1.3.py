math_club = {'Alice', 'Bob', 'Charlie', 'David', 'Eve'}
science_club = {'Charlie', 'Eve', 'Frank', 'Grace', 'Henry'}
art_club = {'Alice', 'Eve', 'Grace', 'Ivy', 'Jack'}

# students at least in one club 
all_students = math_club | science_club | art_club

print(len(all_students))
print(all_students)

# students in all three club 
all_three_club = math_club & science_club & art_club
print(all_three_club)
print(len(all_three_club))

# Students in exactly two clubs
exactly_two = (
    (math_club & science_club) |
    (math_club & art_club) |
    (science_club & art_club)
) - all_three_club

print(exactly_two)
print(len(exactly_two))

# Verify using Inclusion-Exclusion Principle
inclusion_exclusion = (
    len(math_club) + len(science_club) + len(art_club)
    - len(math_club & science_club)
    - len(math_club & art_club)
    - len(science_club & art_club)
    + len(all_three_club)
)

print(inclusion_exclusion)
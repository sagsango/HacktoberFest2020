t = 123, 321, 'Python'
print(t)
new_t = t, (451, 456, 'Hello')
print(new_t)
l = [1, 2, 3]
mix_tuple = (new_t, l)
print(mix_tuple)
t[0] = 100
blank_t = ()
len(blank_t)

single_t = ('Hello')
len(single_t)

# packing
julia = ("Julia", "Roberts", 1967, "Duplicity", 2009, "Actress", "Atlanta, Georgia")
print(julia)
julia = julia[:3] + ("Eat Pray Love", 2010) + julia[5:]
print(julia)


def fn():
    julia = julia[:3] + ("Eat Pray Love", 2010) + julia[5:]
    print(julia)


# unpacking
(name, surname, b_year, movie, m_year, profession, b_place) = julia
print(name)
print(profession)

# concat
even_t = (2, 4, 6, 8)
odd_t = (3, 5, 7, 9)
sum_t = even_t + odd_t

# repeat
t = ('Hello',)
t = t * 4
print(t)

# in ops
flag = 4 in even_t
print(flag)

# loop
for e in even_t:
    print(e,end='-')

t = (1, 2, 3, 4)
print(max(t))
print(min(t))
l = [4, 7, 0, 3]
t = tuple(l)
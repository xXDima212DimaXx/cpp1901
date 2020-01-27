int_list = [1, 2, 3, 5, 7, 8, 9, 12, 14, 17]
char_list = ['a', 'c', 'd']
print("list int:", int_list)
print("list char:", char_list)

print("list int:", int_list[0])
print("list int:", int_list[2:])
print("list int:", int_list[:5])
print("list int:", int_list[2:-1:2])
print(len(int_list))

for x in int_list:
    print(x)
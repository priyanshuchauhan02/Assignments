# lines = 5
# for i in range(lines):
#     for j in range(lines-i):
#         print('*', end="")
#     print()

# lines = 5
# for i in range(lines):
#     for k in range(lines-i-1):
#         print(" ",end="")
#     for j in range(i+1):
#         print("*",end="")
#     print()    

# lines = 5
# for i in range(lines):
#      for k in range(i+1):
#          print(" ",end="")
#      for j in range(lines-i):
#          print("*",end="")
#      print() 

# lines = 5
# for i in range(lines):
#      for k in range(lines-i-1):
#          print(" ",end="")
#      for j in range(i*2+1):
#          print("*",end="")
#      print() 

#diamond
# lines=5
# for i in range(lines):
#       for k in range(lines-i-1):
#           print(" ",end="")
#       for j in range(i*2+1):
#           print("*",end="")
#       print()

# for i in range(lines):
#       for k in range(i):
#           print(" ",end="")
#       for j in range((lines-i)*2-1):
#           print("*",end="")
#       print()

#hollow diamond
# lines = 5

# for i in range(lines):
#     for k in range(lines-i-1):
#         print(" ", end="")
#     for j in range(i*2+1):
#         if j == 0 or j == i*2:
#             print("*", end="")
#         else:
#             print(" ", end="")
#     print()

# for i in range(1, lines):
#     for k in range(i):
#         print(" ", end="")
#     for j in range((lines-i)*2-1):
#         if j == 0 or j == (lines-i)*2-2:
#             print("*", end="")
#         else:
#             print(" ", end="")
#     print()


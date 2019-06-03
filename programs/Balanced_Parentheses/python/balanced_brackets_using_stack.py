#python3
s = input()
stack = ['LK']
flag = 0
marker = 0
if(len(s) == 1 and s[0] in "()[]{}"):
    print("1")
else:
    for i in range(len(s)):
        if(s[i] not in "({[]})"):
            continue
        elif(s[i] == '(' or s[i] == '{' or s[i] == '['):
            stack.append(s[i])
            print(i)
        elif((s[i] == ')' and stack[-1] == '(') or (s[i] == ']' and stack[-1] == '[') or (s[i] == '}' and stack[-1] == '{')):
            stack.pop()
            print(i)
        else:
            print('No Match at ' + str(i))
            break


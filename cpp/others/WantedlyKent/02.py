def solution(S):
  operations = S.split(' ')
  stack = []
  for o in  operations:
    if o == "POP":
      if len(stack) == 0:
        print('-1')
        return '-1'
      stack.pop()
    elif o == "DUP":
      if len(stack) == 0:
        print('-1')
        return '-1'
      stack.append(stack[-1])
    elif o == '-':
      if len(stack) < 2:
        print('-1')
        return '-1'
      topmost = int(stack.pop())
      secondmost = int(stack.pop())
      if topmost - secondmost < 0:
        print('-1')
        return '-1'
      else:
        stack.append(str(topmost - secondmost))
    elif o == '+':
      if len(stack) < 2:
        return '-1'
      topmost = int(stack.pop())
      secondmost = int(stack.pop())
      stack.append(str(topmost + secondmost))
    else:
      stack.append(o)
  print(stack[-1])
  return stack[-1]
print(solution(input()))

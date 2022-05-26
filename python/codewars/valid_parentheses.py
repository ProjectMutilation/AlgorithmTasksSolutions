# https://www.codewars.com/kata/52774a314c2333f0a7000688
# Write a function that takes a string of parentheses, and determines if the order of the parentheses is valid. 

def valid_parentheses(string):
    if (string.count('(') != string.count(')')): 
        return False
    stack = []
    for s in string:
        if(s == '('):
            stack.append(s)
        elif(s == ')'):
            try:
                stack.pop()
            except:
                return False

    if(len(stack) == 0):
        return True
    else:
        return False

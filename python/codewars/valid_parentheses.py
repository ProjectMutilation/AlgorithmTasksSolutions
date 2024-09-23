# https://www.codewars.com/kata/52774a314c2333f0a7000688
# Write a function that takes a string of parentheses, and determines if the order of the parentheses is valid. 

def valid_parentheses(string):
    string = "".join(ch for ch in string if ch in "()")
    while "()" in string:
        string = string.replace("()", "")
    return not string

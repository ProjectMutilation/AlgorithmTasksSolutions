# https://www.codewars.com/kata/515decfd9dcfc23bb6000006
# Write an algorithm that will identify valid IPv4 addresses in dot-decimal format. 

def is_valid_IP(strng):
    arr = strng.split('.')
    if len(arr) != 4: 
        return False
    for item in arr:
        if not item.isdigit():
            return False
        if item.startswith('0') and len(item) != 1:
            return False
        if (int(item) >= 0) and (int(item) < 256):
            continue
        else:
            return False
    return True

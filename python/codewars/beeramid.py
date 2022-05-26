# https://www.codewars.com/kata/51e04f6b544cf3f6550000c1


def beeramid(bonus, price):
    counter = 0
    while True:
        if (bonus - price * pow(counter+1,2))>= 0:
            bonus -= price * pow(counter+1,2)
            counter += 1
        else:
            break
    return counter

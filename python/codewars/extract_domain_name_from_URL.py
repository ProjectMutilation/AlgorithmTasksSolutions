# https://www.codewars.com/kata/514a024011ea4fb54200004b
# Write a function that when given a URL as a string, parses out just the domain name and returns it as a string. 

import re


def domain_name(url):
    return url.split("www.")[-1].split("//")[-1].split(".")[0]

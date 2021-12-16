from collections import Counter
import random
import time
import pandas as pd

def find_subexpression_string():
    print("Input string")
    st = input()
    res = []
    prom = str()
    print('Input min length of subexpression')
    min = int(input())
    print('Input max length of subexpression')
    max = int(input())
    for i in range(len(st)-min):
        if i <= len(st) - max:
            for j in range(min, max+1):
                prom = st[i:i + j:1]
                res.append(prom)
            prom = str()
        else:
            for j in range(min, len(st) - i + 1):
                prom = st[i:i + j:1]
                res.append(prom)
            prom = str()
            res.append(st[len(st) - min:len(st)])
    return res


def find_subexpression_sequence():
    print("Input sequence dimension")
    dimension = int(input())
    res = []
    prom = []
    st = []
    print("Input elements:")
    for i in range(dimension):
        el = int(input())
        st.append(el)
    print('Input min length of subexpression')
    min = int(input())
    print('Input max length of subexpression')
    max = int(input())
    for i in range(len(st)-min):
        if i <= len(st) - max:
            for j in range(min, max+1):
                prom = st[i:i + j:1]
                res.append(prom)
            prom = str()
        else:
            for j in range(min, len(st) - i + 1):
                prom = st[i:i + j:1]
                res.append(prom)
            prom = str()
            res.append(st[len(st) - min:len(st)])
    return res

def find_substring_time(dimension):
    st = 'a'*dimension
    res = []
    prom = str()
    min = 10
    max = 20
    for i in range(len(st)-min):
        if i <= len(st) - max:
            for j in range(min, max+1):
                prom = st[i:i + j:1]
                res.append(prom)
            prom = str()
        else:
            for j in range(min, len(st) - i + 1):
                prom = st[i:i + j:1]
                res.append(prom)
            prom = str()
            res.append(st[len(st) - min:len(st)])
    #Counter(res)
def find_subsequence_time(dimension):
    res = []
    prom = []
    st = []
    for i in range(dimension):
        st.append(random.randint(1, 100))
    min = 10
    max = 20
    for i in range(len(st)-min):
        if i <= len(st) - max:
            for j in range(min, max+1):
                prom = st[i:i + j:1]
                res.append(prom)
            prom = str()
        else:
            for j in range(min, len(st) - i + 1):
                prom = st[i:i + j:1]
                res.append(prom)
            prom = str()
            res.append(st[len(st) - min:len(st)])
    #Counter(res)


def timing_substring(dimension):
    first = time.time()
    find_substring_time(dimension)
    last = time.time()
    return round((last - first) * 10**6, 2)
def timing_subseq(dimension):
    first = time.time()
    find_subsequence_time(dimension)
    last = time.time()
    return round((last - first) * 10**6, 2)
def print_result_substring(str_time):
    print("Find Substring time: {} microseconds".format(str_time))


def print_result_subseq(seq_time):
    print("Find Subsequence time {} microseconds".format(seq_time))

def menu():
    first = 0
    while(first != 3):
        print("Choose action:")
        print("1. Substring")
        print("2. Subsequence")
        print("3. Exit")
        first = int(input())
        if(first == 1):
            second = 0
            while(second != 3):
                print("Choose test:")
                print("1. Time")
                print("2. Keyboard")
                print("3. Back")
                second = int(input())
                if(second == 1):
                    print_result_substring(timing_substring(200))
                    #break
                elif(second == 2):
                    print(Counter(find_subexpression_string()))
                    #break
                else:
                    break
                #break

        elif(first == 2):
            third = 0
            while (third != 3):
                print("Choose test:")
                print("1. Time")
                print("2. Keyboard")
                print("3. Back")
                third = int(input())
                if (third == 1):
                    print_result_substring(timing_subseq(200))
                    #break
                elif (third == 2):
                    print(find_subexpression_sequence())
                    #break
                else:
                    break
            #break
        else:
            break

menu()
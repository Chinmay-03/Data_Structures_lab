"""Write a Python program to compute following operations on
String:
a) To display word with the longest length
b) To determines the frequency of occurrence of particular
character in the string
c) To check whether given string is palindrome or not
d) To display index of first appearance of the substring
e) To count the occurrences of each word in a given string"""

""" 
NAME: PRIYANKA LALITKUMAR PATIL
CLASS: SE-B
ROLL NO.: 44
"""

def WordLenght():
    str=input("\nEnter the string : ")
    x=str.split(" ")
    print(x)
    lenList=[]
    for i in x:
        lenList.append(len(i))
    print("\nThe lengths of words from string : ",lenList)
    longLen=max(lenList)
    longWord=lenList.index(longLen)
    print("\nThe longest word is ||",x[longWord],"|| with lenght of ",longLen)

def occur():
    str=input("\nEnter the string : ")
    charr=input("\nEnter the character to find its frequency : ")
    count=0
    for i in str:
        if i==charr:
            count+=1
    print("\nThe count of ||",charr,"|| is ",count)

def word_occur():
    str = input("\nEnter the string : ")
    list1=[]
    y=str.split(" ")

    word = input("\nEnter the word to find its frequency : ")
    count = 0
    for i in y:
        if i == word:
            count += 1
    print("\nThe count of ||", word, "|| is ", count)

def palindrome():
    str=input("\nEnter the string : ")
    str2=str[::-1]
    if(str==str2):
        print("\nThe string is palindrome!")
    else:
        print("\nThe string is not palindrome!")

def substring():
    str=input("\nEnter the string : ")
    substr=input("\nEnter the substring : ")
    x=str.find(substr)
    print("\nThe first occurrence of ||",substr,"|| is ",x)

def Each_Occur():
    str=input("\nEnter the string : ")
    x=str.split(" ")
    freq={}
    for f in x:
        freq[f]=x.count(f)
    print("\nThe count of each word : ",freq)
    highW=max(freq,key=freq.get) #get method to find the key/word with max value/freq
    y=freq.values()
    for i in y:
        highFreq=max(y)
    print("\nHighest frequency word is ||",highW,"|| with frequency of ",highFreq)

WordLenght()
occur()
word_occur()
palindrome()
substring()
Each_Occur()

"""OUTPUT:
Enter the string : Priyanka Patil
['Priyanka', 'Patil']

The lengths of words from string :  [8, 5]

The longest word is || Priyanka || with lenght of  8

Enter the string : Madam

Enter the character to find its frequency : a

The count of || a || is  2

Enter the string : Best world and Best people

Enter the word to find its frequency : Best

The count of || Best || is  2

Enter the string : madam

The string is palindrome!

Enter the string : madam

Enter the substring : a

The first occurrence of || a || is  1

Enter the string : sky is not the limit

The count of each word :  {'sky': 1, 'is': 1, 'not': 1, 'the': 1, 'limit': 1}

Highest frequency word is || sky || with frequency of  1"""



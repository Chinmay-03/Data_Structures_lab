"""a) Write a Python program to store names and mobile numbers
of your friends in sorted order on names. Search your friend
from list using binary search (recursive and non- recursive).
Insert friend if not present in phonebook
b) Write a Python program to store names and mobile numbers
of your friends in sorted order on names. Search your friend
from list using Fibonacci/Linear"""

""" 
NAME: PRIYANKA LALITKUMAR PATIL
CLASS: SE-B
ROLL NO.: 44
"""

list2=[]
n=int(input("\nEnter the number of entries to store : "))

for i in range(0,n):
    list1=['a',1]
    name_input=input("\nEnter name : ")
    number_input = input("\nEnter mobile number : ")
    list1[0]=name_input
    list1[1]=number_input
    list2.append(list1)

print("\nThe details stored are : ")
print(list2)

def sorting(list2,n):
    for i in range(0,n):
        for j in range(0,n-1):
            if(list2[j][0]>list2[j+1][0]):
                t=list2[j]
                list2[j]=list2[j+1]
                list2[j+1]=t

def Binary_Search(list_1,low,high,x):
    if low<=high:
        mid=(low+high)//2
        if list_1[mid][0]==x:
            return mid
        elif list_1[mid][0]>x:
            return Binary_Search(list_1,low,mid-1,x)
        elif list_1[mid][0]<x:
            return Binary_Search(list_1,mid+1,high, x)

    else:
        return -1

def Fibonacci_Search(list_2,n,x):
    fib=[]
    offset=-1
    m2=0
    m1=1
    m=m1+m2
    fib.append(m)
    fib.append(m1)
    fib.append(m2)
    while(m<n):
        m2=m1
        m1=m
        m=m1+m2
        fib.append(m)
    while(m>1):
        i=min(offset+m2,n-1)
        if(list_2[i][0]<x):
            m=m1
            m1=m2
            m2=m-m1
        elif(list_2[i][0]>x):
            m=m2
            m1=m1-m2
            m2=m-m1
        else:
            return i
    return -1

def Add_new(list2,n,x):
    n+=1
    list_new=['b',2]
    list_new[0]=x
    b=input("\nEnter friend's mobile number : ")
    list_new[1]=b
    list2.append(list_new)

def Searching(list2,n):
    print("\n1.Binary Search\n2.Fibonacci Search")
    choice=int(input("\nEnter your choice : "))
    if choice==1:
        y=input("\nEnter the name to search : ")
        result=Binary_Search(list2,0,n-1,y)
    elif choice==2:
        y = input("\nEnter the name to search : ")
        result = Fibonacci_Search(list2,n,y)
    if result!=-1:
        print("\nFriend is present at position : ",result+1)
    else:
        print("\nFriend is not present in the phonebook!")
        charr=input("\nDo you want to add number to phonebook ? ")
        while charr=='Y' or charr=='y':
            Add_new(list2, n, y)
            sorting(list2, n)
            break;

sorting(list2,n)
print("\nThe sorted list is : ")
print(list2)

Searching(list2,n)
print("\nUpdated Phonebook is : ")
print(list2)

"""OUTPUT:
Enter the number of entries to store : 4

Enter name : qwe

Enter mobile number : dfg

Enter name : rty

Enter mobile number : 453623

Enter name : yui

Enter mobile number : 21468734

Enter name : cvb

Enter mobile number : 2485145

The details stored are : 
[['qwe', 'dfg'], ['rty', '453623'], ['yui', '21468734'], ['cvb', '2485145']]

The sorted list is : 
[['cvb', '2485145'], ['qwe', 'dfg'], ['rty', '453623'], ['yui', '21468734']]

1.Binary Search
2.Fibonacci Search

Enter your choice : 1

Enter the name to search : cvb

Friend is present at position :  1

Updated Phonebook is : 
[['cvb', '2485145'], ['qwe', 'dfg'], ['rty', '453623'], ['yui', '21468734']]
"""


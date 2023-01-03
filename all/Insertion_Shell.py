"""Write a Python program to store second year percentage of
students in array. Write function for sorting array of floating point numbers in ascending order using
a) Insertion sort
b) Shell Sort and display top five scores"""

""" 
NAME: PRIYANKA LALITKUMAR PATIL
CLASS: SE-B
ROLL NO.: 44
"""


arr=[]
n=int(input("\nEnter number of students whose marks you want to display : "))
for i in range(0,n):
    print("\nEnter marks of student ",i+1," : ")
    marks=float(input())
    arr.append(marks)


def Insertion_sort(arr,n):
    for i in range(1,n):
        t=arr[i]
        j=i-1
        while j>=0 and arr[j]>t:
            arr[j+1]=arr[j]
            j=j-1
        arr[j+1]=t
        print("\nPass ", i, " : ", arr)


    print("\nThe marks in sorted list : ")
    print(arr)

    arr2=arr[::-1]
    print("\nThe top 5 scores are : ")
    if len(arr2)>5:
        for i in range(0,5):
            print("%.2f"%arr2[i])
    else:
        for i in range(0,len(arr2)):
            print("%.2f" % arr2[i])


def Shell_sort(arr, n):
    fl=0
    gap=n//2
    while gap>=1:
        j=gap
        while j<n:
            i=j-gap
            while i>=0:
                if arr[i+gap]>arr[i]:
                    break
                else:
                    t=arr[i+gap]
                    arr[i+gap]=arr[i]
                    arr[i]=t
                i=i-gap
                print("\nPass ", fl, " : ", arr)
                fl+=1
            j=j+1
        gap=gap//2

    print("\nThe marks in sorted list : ")
    print(arr)

    arr2 = arr[::-1]
    print("\nThe top 5 scores are : ")
    if len(arr2) > 5:
        for i in range(0, 5):
            print("%.2f" % arr2[i])
    else:
        for i in range(0, len(arr2)):
            print("%.2f" % arr2[i])



while(1):
    print("\n************MENU************")
    print("\n1.Insertion Sort\n2.Shell Sort\n3.Exit")
    choice=int(input("\nEnter your choice : "))
    if choice==1:
        Insertion_sort(arr, n)
    elif choice==2:
        Shell_sort(arr, n)
    else:
        exit()
"""OUTPUT:
Enter number of students whose marks you want to display : 4

Enter marks of student  1  : 
67.8

Enter marks of student  2  : 
89.8

Enter marks of student  3  : 
56.9

Enter marks of student  4  : 
89.0

************MENU************

1.Insertion Sort
2.Shell Sort
3.Exit

Enter your choice : 1

Pass  1  :  [67.8, 89.8, 56.9, 89.0]

Pass  2  :  [56.9, 67.8, 89.8, 89.0]

Pass  3  :  [56.9, 67.8, 89.0, 89.8]

The marks in sorted list : 
[56.9, 67.8, 89.0, 89.8]

The top 5 scores are : 
89.80
89.00
67.80
56.90

************MENU************

1.Insertion Sort
2.Shell Sort
3.Exit

Enter your choice : 2

The marks in sorted list : 
[56.9, 67.8, 89.0, 89.8]

The top 5 scores are : 
89.80
89.00
67.80
56.90
"""


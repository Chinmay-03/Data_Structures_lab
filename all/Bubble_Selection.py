"""Write a Python program to store first year percentage of
students in array. Write function for sorting array of floating point
numbers in ascending order using
a) Selection Sort
b) Bubble sort and display top five scores."""

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


def Bubble_sort(arr,n):
    for i in range(0,n):
        for j in range(0,n-1):
            if arr[j]>arr[j+1]:
                t=arr[j]
                arr[j]=arr[j+1]
                arr[j+1]=t
        print("\nPass ",i+1," : ",arr)
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


def Selection_sort(arr, n):
    for i in range(0, n):
        for j in range(i, n):
            if arr[i] > arr[j]:
                t = arr[i]
                arr[i] = arr[j]
                arr[j] = t

        print("\nPass ", i + 1, " : ", arr)
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
    print("\n1.Bubble Sort\n2.Selection Sort\n3.Exit")
    choice=int(input("\nEnter your choice : "))
    if choice==1:
        Bubble_sort(arr, n)
    elif choice==2:
        Selection_sort(arr, n)
    else:
        exit()


"""OUTPUT:
Enter number of students whose marks you want to display : 4

Enter marks of student  1  : 
89.90

Enter marks of student  2  : 
56.78

Enter marks of student  3  : 
89

Enter marks of student  4  : 
90

************MENU************

1.Bubble Sort
2.Selection Sort
3.Exit

Enter your choice : 1

Pass  1  :  [56.78, 89.0, 89.9, 90.0]

Pass  2  :  [56.78, 89.0, 89.9, 90.0]

Pass  3  :  [56.78, 89.0, 89.9, 90.0]

Pass  4  :  [56.78, 89.0, 89.9, 90.0]

The marks in sorted list : 
[56.78, 89.0, 89.9, 90.0]

The top 5 scores are : 
90.00
89.90
89.00
56.78

************MENU************

1.Bubble Sort
2.Selection Sort
3.Exit

Enter your choice : 2

Pass  1  :  [56.78, 89.0, 89.9, 90.0]

Pass  2  :  [56.78, 89.0, 89.9, 90.0]

Pass  3  :  [56.78, 89.0, 89.9, 90.0]

Pass  4  :  [56.78, 89.0, 89.9, 90.0]

The marks in sorted list : 
[56.78, 89.0, 89.9, 90.0]

The top 5 scores are : 
90.00
89.90
89.00
56.78
"""


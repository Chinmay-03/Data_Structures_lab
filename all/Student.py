""" Write a Python program to store marks scored in subject
“Fundamental of Data Structure” by N students in the class. Write
functions to compute following:
a) The average score of class
b) Highest score and lowest score of class
c) Count of students who were absent for the test
d) Display mark with highest frequency"""

""" 
NAME: PRIYANKA LALITKUMAR PATIL
CLASS: SE-B
ROLL NO.: 44
"""

st_total=int(input("\nEnter total number of students in a class : "))
student=int(input("\nEnter total number of students who appeared for the exam : "))
st_marks=[]
for i in range(0,student):
    print("\nEnter marks of student ",i+1," :")
    marks=int(input())
    st_marks.append(marks)

def ave_marks():
    mark_sum=0
    count=0
    for j in st_marks:
        count+=1
        if j!=-1:
            mark_sum+=j
    average_marks=mark_sum/count
    print("\nAverage score of the class is : %.2f" %average_marks)


def High_Low():
    for m in st_marks:
        if m==max(st_marks):
            print("\nHighest Score is : ",m)

    for k in st_marks:
        if k==min(st_marks):
            print("\nLowest Score is : ",k)

def Absent():
    absent=st_total-student
    print("\nThe total number of absent students is : ",absent)

def High_freq():
    freq={}
    for f in st_marks:
        freq[f]=st_marks.count(f)
    print("\nThe occurrences of each : ",freq)
    highM=max(freq,key=freq.get)
    y=freq.values()
    for k in y:
        maxFreq=max(y)
    print("\nThe highest occuring marks are ",highM," with occurrences of ",maxFreq)

print("\n****************MENU***************\n1.Average score of the class\n2.Highest and Lowest score of the class\n3.Count of total absent students\n4.Marks with Highest frequency\n5.Exit")
choice=int(input("\nEnter your choice : "))
while(True):
    if choice==1:
        ave_marks()
        break
    elif choice==2:
        High_Low()
        break
    elif choice==3:
        Absent()
        break
    elif choice==4:
        High_freq()
        break
    else:
        exit()

"""OUTPUT:
Enter total number of students in a class : 5

Enter total number of students who appeared for the exam : 3

Enter marks of student  1  :
56

Enter marks of student  2  :
78

Enter marks of student  3  :
89

****************MENU***************
1.Average score of the class
2.Highest and Lowest score of the class
3.Count of total absent students
4.Marks with Highest frequency
5.Exit

Enter your choice : 1

Average score of the class is : 74.33

Enter your choice : 2

Highest Score is :  89

Lowest Score is :  56

Enter your choice : 3

The total number of absent students is :  2

Enter your choice : 4

The occurrences of each :  {56: 1, 78: 1, 89: 1}

The highest occuring marks are  56  with occurrences of  1


"""


/*
A palindrome is a string of character that‘s the same forward and
backward. Typically, punctuation, capitalization, and spaces are
ignored. For example, “Poor Dan is in a droop” is a palindrome,
as can be seen by examining the characters “poor danisina
droop” and observing that they are the same forward and backward.
One way to check for a palindrome is to reverse the characters in
the string and then compare with them the original-in a
palindrome, the sequence will be identical. Write C++ program
with functions-
a) To print original string followed by reversed string using
stack
b) To check whether given string is palindrome or not
*/


/*
NAME: PRIYANKA LALITKUMAR PATIL
CLASS: SE-B
ROLL NO.: 44
*/

#include<iostream>
using namespace std;
#define s 50
class Stack
{
	public:
		char array[s];
		int top=-1;
		void push(char x)
		{
			if(top==s-1)
			{
				cout<<"\nStack is overflowed!";
				return;
			}
			else
			{
				array[++top]=x;
			}
		}
		
		char pop()
		{
			if(top==-1)
			{
				cout<<"\nStack is underflowed!";
				return -1;
			}
			else
			{
				return array[top--];
			}
		}

		int palindrome()
		{
			string input_str;
			cout<<"\nEnter the string : ";
			getline(cin,input_str);
			string convert_str= "";
			for(int i=0;i<input_str.size();i++)
			{
				char ch=input_str[i];
				if(ch>=97 && ch<=122)
				{
					push(ch);
					convert_str.push_back(ch);
				}
				if(ch>=65 && ch<=90)
				{
					ch=ch+32;
					push(ch);
					convert_str.push_back(ch);
				}
			}
			cout<<"\nConverted/Original string is : "<<convert_str;
			string rev_str="";
			while(top!=-1)
			{
				char ph;
				ph=pop();
				rev_str.push_back(ph);
			}
			cout<<"\nReversed string is : "<<rev_str;
			bool flag=true;
			
			for(int i=0;i<convert_str.size();i++)
			{
				if(convert_str[i]!=rev_str[i])
				{
					flag=false;
					break;
				}
			}
			
			if(flag==false)
			{
				cout<<"\nThe string is NOT PALINDROME!";
			}
			else
			{
				cout<<"\nThe string is PALINDROME!";
			}
		}
};


int main()
{
	Stack st;
	st.palindrome();
	return 0;
}

/*OUTPUT:
Enter the string : Poor Dan is in a droop

Converted/Original string is : poordanisinadroop
Reversed string is : poordanisinadroop
The string is PALINDROME!

Enter the string : Priyanka Patil

Converted/Original string is : priyankapatil
Reversed string is : litapaknayirp
The string is NOT PALINDROME!
*/








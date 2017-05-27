'''
Roy wanted to increase his typing speed for programming contests. So, his friend advised him to type the sentence "The quick brown fox jumps over the lazy dog" repeatedly, because it is a pangram. (Pangrams are sentences constructed by using every letter of the alphabet at least once.)

After typing the sentence several times, Roy became bored with it. So he started to look for other pangrams.

Given a sentence , tell Roy if it is a pangram or not.

Input Format

Input consists of a string .

Constraints
Length of  can be at most   and it may contain spaces, lower case and upper case letters. Lower-case and upper-case instances of a letter are considered the same.

Output Format

Output a line containing pangram if  is a pangram, otherwise output not pangram.

Input #1

We promptly judged antique ivory buckles for the next prize
Input #2

We promptly judged antique ivory buckles for the prize
Sample Output

Output #1

pangram
Output #2

not pangram

'''

#not so efficient as checking lst takes linear time

line = input()
line = line.split(" ")
lst = []

for word in line:
    for ch in word:
        if ch not in lst:
            lst.append(ch)
        if len(lst)==26:
            print("pangram")
            break

if len(lst)!=26:
    print("not pangram")

#efficient using dictionary, be reminded to exclude space and differentiate upper & lower case letter

line = input().lower()
dic = {}

for ch in line:
    if ch != " ":
        dic[ch]=1

if len(dic)==26:
    print("pangram")
else:
    print("not pangram")

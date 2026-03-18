#string is a sequence of characters enclosed in single or double or triple quotes and used to represent text data
#string is immutable in python meaning it cannot be changed once defined.
# is like an array of characters in c++ but in python it is a sequence of characters  
text = "Hello World"
print(text)
print(text[0])
print(text[1])
print(text[0:5])
greeting = text + " from Python"
print(greeting)
#string length
print(len(text))
#changing case 
print(text.upper())
print(text.lower())
#strip() method removes any whitespace from the beginning or the end   
text = " Hello World"
print(text.strip())
#replace() method replaces a string with another string 
text = "Hello World" 
print(text.replace("H", "J"))
#split() method splits the string into substrings if it finds instances of the sepacter 
text = "Hello, World"
print(text.split(","))
#check string 
text = " Hello World"
print("World" in text)
print("World" not in text)
#string concatenation
a = "Hello" 
b = "World "
c = a + b
print(c)
#string format
age = 36
txt = "My name is John, and I am {}"
print(txt.format(age))
#escape character
txt = "We are the so-called \"Vikings\" from the northe."
print(txt)
#string methods
# capitalize() converts the first character to upper case 
# # casefold() coverts the string into lower case
# center () returns a centered string 
# count() returns the number of times a specified value occurs in a string  
apple = " HELLO WORLD Welcome to the world of python"
print("let's use a for loop to print each character in the string apple\n")
for character in apple:
    print(character)
print("\n")
fruit = "Mango"
mangolength = len (fruit)
print(mangolength)
print(fruit[:3])
print(fruit[:-3])
print(fruit[-3:-1])#negative indexing here -3: is 5-3=2 & -1 : is 5-1=4 it means thea the string wil be printed from 2 to 4 index
print(fruit[0:5:2])#here 0:5:2 means the string will be printed from 0 to 5 index with a step of 2
print(fruit[0:4])#including 0 but not 4

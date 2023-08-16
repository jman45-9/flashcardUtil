# Instructions For Use

## Making Sets

Sets can be created in any plain text file (.txt would make the most sense) and the syntax is as follows:

```.txt
<cardFront> :: <cardBack>
```

The system is whitespace insensitive so the colons can be touch both, either, or neither the text on the front or back of the card.

To create a comment on a set start the line with a '#', this will force the program to ignore the line. Blank lines are also ignored but nothing else.  

**Please see testSet.txt for examples of syntax.**

## Using The Utility

Running the program is as simple as double clicking the executable(.exe on Windows, no extension on Linux) or the standard ways of running executable files from the terminal

**ALL COMMANDS ARE CASE SENSITIVE!**

### Listing Available Cards

type "list" or 'l' to get a numbered list of all available cards. The front of the card will be on the left of the colon and the back will be on the right.

### Choosing a Card

Choosing a card is a three part command called choose, it requires the card number and what side of the side of the card you wish to view. The syntax is as shown below

```txt
choose <cardNumber> <front or back>
```

It is worth noting that front and back can be abbreviated f and b respectively and choose can be abbreviated 'c'

#### Flipping a Card

After choosing a card you have the option to flip the card by typing "flip" or 'f' before using choose again

### Getting Help In The Application

If you help in the application you can use the command "help" or 'h', this will bring of a list of commands that are supported

### Exiting The Application

to exit the application type "quit" or 'q'

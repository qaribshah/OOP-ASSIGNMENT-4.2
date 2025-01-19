# OOP-ASSIGNMENT-4.2
PART ONE
This Part of assignment Four is just an extension of the Task One
You will need to Declare and Define the following Classes:
Class One: Shape:
Private Variables:
 alphabet e.g. 'a' (must be a lowercase English alphabet)
 color e.g. “red”
Public Functions:
 3 Constructors
 Destructor
 Require Operators: ==, =, << and >>
 Binary operator + and – (add the 2 alphabet to return another alphabet, make sure that the
results remain a lowercase English alphabet. Use this formula for 2 alphabets x + y = (ASCII
code x + ASCII code of y – 90), rotate to keep within 'a' and 'z') e.g. 'a' + 'b' = 'i'
 Unary pre and post operators ++ and – (increment/decrement the ASCII code of shapeChar
and return the next/previous character, make sure that the results remain between 1 and
255) e.g. 'a' ++ = 'b' and 'b' - - = 'a'
Class Two: Line (Child of Class Shape)
Private Variables:
 length e.g. 5
 thickness e.g. 2 (must be between 1 and 2)
Public Functions:
 3 Constructors
 Destructor
 Require Operators: ==, =, << and >> (MUST REUSE PARENT OPERATORS)
 Binary operator + and - (MUST REUSE PARENT OPERATORS)
So first Shape + and – operators are applied and then Line: operator + and – work on
thickness (must be within 1 and 2) e.g. 1 + 1 = 2, 2 + 2 = 1 and 1 + 2 = 2
(see the sample output corresponding to the provided main)
 Unary pre and post operators ++ and – (MUST REUSE PARENT OPERATORS)
So first apply increment/decrement on Shape and then Increment/ decrement length only
 (see the sample output corresponding to the provided main)
 draw that draws the line on the screen using the Shape alphabet and as per the length and
thickness. For a thickness of 1 draw a single horizontal line and for a thickness of 2 draw two
horizontal lines, one alphabet apart. (see the sample output corresponding to the provided
main)
main to use with Part One
Sample output for Part One
PART TWO
Task One: Declare and define the following Class
Class Three: Point
Private Variables:
 x position e.g. 2
 y position e.g. 3
Public Functions:
 3 Constructors
 Destructor
 Require Operators: ==, =, << and >>
Task Two: Modify class Shape to add to private variables a variable of type Point named center (the
center of the Shape)
Task Three: Modify the Class Line as following:
1. Add a boolean variable named isVertical that is true when the line is vertical otherwise line is
horizontal
 2. Modify the function draw to draw the line horizontally or vertically and the line center must be
that of the parent Shape center
Task Four: Declare and define the following Class
Class Four: Rectangle (Child of Class Shape)
Private Variables:
 length e.g. 4
 width e.g. 5
Public Functions:
 3 Constructors
 Destructor
 Require Operators: ==, =, << and >> (MUST REUSE PARENT OPERATORS)
 Binary operator + and - (MUST REUSE PARENT OPERATORS)
So first Shape + and – operators are applied and then Rectangle: operator + and – work on
length and width
(see the sample output corresponding to the provided main)
 Unary pre and post operators ++ and – (MUST REUSE PARENT OPERATORS)
So first apply increment/decrement on Shape and then Increment/ decrement length and
width
 (see the sample output corresponding to the provided main)
 draw that draws the Rectangle on the screen using the Shape alphabet and as per the length
and width with center of Rectangle given by Shape's variable center. (see the sample output
corresponding to the provided main)

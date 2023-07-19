Bash_Script: Course_Guessing_Game
Concepts: variables, user input, if-then-elif-else-fi, test, introductory bash
scripting, basic linux commands
***********************************************************************************
******************************
A university XUniv offers several courses.
A student can pursue basic science studies like Mathematics, Physics and Chemistry
or he/she can pursue interdisciplinary studies.
Following are the combinations of basic sciences which comprise an
interdisciplinary study:
(Department X & Department Y -> Interdisciplinary Course Name)
Mathematics & Physics -> Mathematical Physics
Mathematics & Chemisty -> Theoretical Chemistry
Physics & Chemistry -> Physical Chemistry
Mathematics & Physics & Chemistry -> Computational Science
In each department, two of the teachers teach the first and second year students.
Mathematics - Prof. A, Prof. B
Physics - Prof. C, Prof. D
Chemistry - Prof. E, Prof. F
The bash script should greet the student in the following manner:
"Hi Akash, How are you doing this fine Friday afternoon?"
"Let us start the game"
The game is all about asking a series of questions to the student on who is
teaching him currently from A, B, C, D, E and F to figure out which course of
study he belongs to. That is, based on the students' teachers, we need to figure
out which course he/she is part of (M/P/C/MP/TC/PC/CS)

One sample execution is as follows:
$date
Tue Mar 30 21:55:51 PDT 2023
$
$
$./Course_Guessing_Game Ashish
Hi Ashish, How are you doing this fine Tuesday evening?
"Let us start the game"
"Do you attend classes of Prof. A?y/n"
n
"Do you attend classes of Prof. B?y/n"

y
"Do you attend classes of Prof. C?y/n"
y
"Do you attend classes of Prof. D?y/n"
y
"Do you attend classes of Prof. E?y/n"
n
"Do you attend classes of Prof. F?y/n"
y
"Ashish, You must be from the Computational Science course, right!"
$
$
$
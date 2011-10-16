CSC vs Project Euler
====================

What is Project Euler?
----------------------

Project Euler is a collection of math problems that people solve for fun.
You get the problem description and an input. Your job is to come up with the answer and submit it.

**Important:** You only have to submit the answer! So you have a lot of flexibility when solving a problem.
Solve it by hand, on a calculator, with Wolfram Alpha, write a program, whatever -- as long as your answer is correct.

To prevent cheating (looking up the solution), Project Euler occasionally changes the input to their problems.


How you can help us
-------------------

We want to solve as many unique problems as possible. We need your help to do so.
The list of problems is ever-growing as Project Euler is always adding new problems.

If someone from our group has already solved a certain problem, please try to solve a different one.
If you've already solved it or you really want to solve it, go ahead and upload your "solution"
(it must be a method of finding the solution, not the solution itself).
Though we would prefer having more unsolved problems become solved.


Contribution guidelines
-----------------------

1. Do not change the work of others (but you can certainly add commit comments if you think their solution could be better)
2. Do not submit solutions found by the work of others as your own (i.e. do not plagiarize)
3. Follow naming conventions => Solutions are named after the problem # and your username and placed in the directory of their problem #
  * e.g.) My solution to problem #1 would be located at `/project-euler/1/1-dideler.cpp`
  * e.g.) John Doe also solved #1, his solution would be at `/project-euler/1/1-johndoe.txt  # John solved it by hand`
  * Create a directory for your new problem if none exists

Get started
-----------

Example based on a command line interface.
There are many ways to get started, this example is good if you're new to git.

    $ mkdir project-euler
    $ cd project-euler
    $ git init
    $ git remote add origin git@github.com:BrockCSC/project-euler.git
    $ git push -u origin master
    $ git fetch  # if you want to retrieve all the progress so far
    * work on the problem *
    $ git add problem#/username.java  # say you made a java program
    $ git commit -m 'add my solution for problem #100'
    $ git push

Closing comments
----------------

You're not writing an application, you're solving a problem for fun.
So you can challenge yourself in any way you like.

Your solution can be:

* efficient or slow (there are no time constraints)
* long or short
* a dirty hack or the most elegant piece of code
* obfuscated code or coded using your favourite style guide
* crazily complex or super simple
* instructions for a person or instructions for a computer
* ... and so on

No matter how you choose to solve a problem, try to have fun and learn something new :-)

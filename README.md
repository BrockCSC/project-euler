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

* We want to solve as many problems as possible. We need **your help** to do so!

* The list of problems is ever-growing as Project Euler is always adding new problems.

* When adding your solution, make sure it's a method of finding the solution and not the solution itself.

* If a problem is already solved, please try to solve a different one.

* For a good view of which problems have been solved, visit [brockcsc.github.com/projecteuler](http://brockcsc.github.com/projecteuler.html)


Contribution guidelines
-----------------------

1. Do not change the work of others (but you can certainly add commit comments if you think their solution could be better)
2. Do not submit solutions found by the work of others as your own (i.e. do not plagiarize)
3. Follow naming conventions => Solutions are named after the problem # and your username and placed in the directory of their problem #
  * e.g.) My solution to problem #1 would be located at `/project-euler/001/1-dideler.cpp`
  * e.g.) John Doe also solved #1, his solution would be at `/project-euler/001/1-john.txt  # John solved it by hand`
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
    * work on a problem, e.g. problem 10 *
    $ mkdir 010; cd 010  # create the directory for problem 10 (only if it didn't exist yet) and enter it
    $ vi 10-username.java  # start writing your program in vim - you can use netbeans, notepad++, whatever
    $ git add 10/10-username.java  # add it to the commit queue
    $ git commit -m 'add my solution for problem #10'
    $ git push  # push your work to github for others to see

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

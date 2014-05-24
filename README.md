[CSC vs Project Euler][homepage]
====================

### What is Project Euler?

Project Euler is a collection of math problems that people solve for fun.
For each problem, you get a description and an input. Your job is to come up with the answer and submit it.

**Important:** You only have to submit the answer! So you have a lot of flexibility when solving a problem.
Solve it by hand, on a calculator, with Wolfram Alpha, write a program, whatever -- as long as your answer is correct.

To prevent cheating (e.g. looking up the solution), Project Euler occasionally changes the input to their problems.


### How you can contribute

* We need **your help** to solve as many problems as possible!

* The list of problems is ever-growing as Project Euler is always adding new problems

* When adding your solution here, make sure it's a method of finding the solution and not the solution itself

* You can submit your solutions to previously solved problems, but don't ignore the unsolved ones :)

* Visit [http://brockcsc.github.io/project-euler][homepage] for an overview of which problems have been solved


### Contribution guidelines

1. Do not edit the work of others (such commits will be reverted)
2. You can leave comments on commits to suggest improvements to solutions
2. Do not submit solutions found by the work of others as your own (i.e. do not plagiarize)
3. **Follow naming conventions**
  - Solutions are named after the problem # and your username  
    E.g. My solution to problem #1 would be located at `/project-euler/001/1-dideler.cpp`

### Getting started

Example based on a command line interface (e.g. Bash on Linux, Git Bash on Windows, etc.)
There are many ways to get started, this is one way:

```bash
$ git clone git@github.com:BrockCSC/project-euler.git
$ cd project-euler
$ git remote add upstream git://github.com/BrockCSC/project-euler.git
$ git fetch upstream
* Let's work on problem 10 *
$ mkdir 010  # Create the directory for problem 10 if it doesn't exist yet
$ cd 010
* Work on your solution. Go to the next step when you're done *
$ git add .
$ git commit -m 'Add my solution for problem 10'
$ git push  # Your solution is now on GitHub!
```

### Helpful resources

* [Online Encyclopedia of Integer Sequences](http://oeis.org/) (find patterns in integer sequences)
* [Wolfram Alpha](http://wolframalpha.com) (computational knowledge engine)

### Have fun!

Challenge yourself in any way you like. Your solution can be:

* efficient or slow (there are no time constraints)
* long or short
* a dirty hack or the most elegant piece of code
* obfuscated code or coded using your favourite style guide
* crazily complex or super simple
* instructions for a person or instructions for a computer
* ... whatever!

No matter how you choose to solve a problem, try to have fun and learn something new :wink:

:v:

[homepage]: http://brockcsc.github.io/project-euler

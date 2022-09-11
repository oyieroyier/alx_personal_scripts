ALX PERSONAL PRODUCTIVITY TIPS

These are just two of a few productivity scripts I've written to improve my ALX productivity on the terminal by eliminating repetitive tasks as much a possible.

*Any contributions to improve these scripts are welcome.*

*Any suggestions on future scripts or other ALX-related tasks we do that are repetitive are also welcome.*

*Contact me if you encounter any error during execution.*



                    **GIT SCRIPT**

The Git Script when executed does the following:

  i. Adds to git

  ii. Prompts you for a commit message then performs git commit.

  iii. Pushes the tasks/changes from your terminal to your GitHub repository.



                    **C SCRIPT**

The C Script when executed does the following:

  i. Prompts you for your file name. Enter the file name without the .c extension; i.e if your file name is supposed to be hello.c, type hello in the prompt.

  ii. Creates a C file and auto-inserts the following boilerplate text:
      
      a. #include <stdio.h>. If you need another header file, add it manually.
      
      b. The Betty-style code description of the main function and return value. If you want to optionally add anything to the description e.g describing what your code does, add it manually. Always make sure there is an asterisk before your description.
      
      c. int main(void). If your code requires this part to be different, eg int main(), change it manually.
      
      d. Two curly braces, betweem which is sandwiched a semi-colon. The semi-colon shows you where to start typing your code.
  
  iii. Opens the file in INSERT mode in Vi editor. If you use another editor (Nano, Emacs etc), replace "vi +star" in line 11 with your editor name.
  
  iv. Once you are done writing your code, the script goes through your code and removes any trailing whitespace in the code. Betty hates those.
  
  v. Compiles the code using the gcc -o format. If you prefer a different compilation style, edit line 15 of the script.

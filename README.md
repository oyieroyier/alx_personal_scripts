**ALX PERSONAL PRODUCTIVITY SCRIPTS**

These are two of a few productivity scripts I've written to improve my ALX productivity while working on the terminal by eliminating repetitive tasks as much a possible.

PS:
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


  i. Prompts you for your file name.
  
      Please enter the file name without the .c extension; i.e if your file name is supposed to be hello.c, type in hello at the prompt.
      
      Be careful when pasting from the Dashboard.
      
      If you paste hello.c instead of hello, the script will compile it as hello.c.c
      

  ii. Creates a C file and auto-inserts the following boilerplate texts:
      
      a. #include <stdio.h>.
          If you need another header file, add it manually.
      
      b. The Betty-style code description of the main function, program description and return value.
          Remember to type in what your program does at the Description or you can put in a placeholder text.
      
      c. int main(void).
          If your code requires this section to be different, eg int main(), change it manually.
      
      d. Two curly braces, betweem which is sandwiched a semi-colon.
          The braces guide you on where your code starts while the semi-colon shows you where to start typing.
          
  
  iii. Opens the file under the name you typed in INSERT mode in the Vi text editor.
  
        If you use a different editor (Nano, Emacs etc), replace "vi +star" in line 11 with your prefered editor's name.
        
  
  iv. Once you are done writing your code and save (:wq), the script goes through it and removes any trailing whitespace within it. Betty hates those; we're trying to please her.
  
  
  v. Compiles the code using the gcc -o format.
      
      If you prefer a different compilation style, eg gcc filename, edit line 15 of the script.
      
      You don't need to manually compile your code unless you made an error. The script does not compile codes with errors.
      
      Run ./filename to test your code.
      
Save your scripts in the Root directory for quick execution.

To execute the Git script, enter the command:

    /git
    
To execute the C script, enter the command:

    /c

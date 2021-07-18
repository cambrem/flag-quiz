# Flag Quiz

This program takes the user through an interactive quiz about countries.
It is designed it to be run in CLion.
Before running the program, you must configure your python interpreter in CLion, and install numpy and opencv.
To install numpy and opencv, simply hover over the lines where they are imported at the top of FlagMaker.py and follow the prompts to install. For opencv, select opencv-python, not cv2
Once everything is installed you can click run and the first trivia question will appear.
Type the letter corresponding to the country you want to choose.
The program will print whether or not you were correct, and then the flag of correct country will appear in your desktop.
Press the esc key to close the flag window, and the next question will be shown. 
There are four questions, and once all of them have been answered, the program displays how many you got correct.


The program is comprised of two files, CountryQuiz.cpp and FlagMaker.py. 
CountryQuiz.cpp drives the program, asking the questions, taking user input, and comparing answers. 
After each question, CountryQuiz.cpp calls FlagMaker.py, passing it the name of the country whose flag should be drawn.
FlagMaker.py then calls one of its four functions, depending on the input passed to it, and creates that country's flag and displays it in a new window.


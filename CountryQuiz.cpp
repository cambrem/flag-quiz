#include <iostream>
using namespace std;

// using python interpreter
const string python = "python3";

/* get_user_answer displays four choices, asks the user to input a letter to select one,
and returns the choice corresponding to that letter */
string get_user_answer();

/* ask_question takes an int representing the question number and prints that
 question. It then calls get_user_answer and returns the user's answer */
string ask_question(int q_num);

/* get_correct_answer takes an int representing the question number and returns the correct
answer */
string get_correct_answer(int q_num);

int main() {
    cout << "Let's play country trivia! " << endl;
    // string to hold the python command to draw a flag
    string draw_flag;
    // string for the user's answer
    string user_answer;
    // string for the correct answer
    string correct_answer;
    // initialize counts for number of questions right and wrong
    int correct_count = 0;
    int incorrect_count = 0;

    // for each of the four questions
    for (int i = 1; i <= 4; i++) {
        // ask question and store the user's answer
        user_answer = ask_question(i);
        // get the correct answer
        correct_answer = get_correct_answer(i);

        // compare the two and display correct or incorrect, incrementing corresponding count
        if (user_answer == correct_answer) {
            cout << "Correct! navigate to your desktop screen to see the flag of this awesome country!" << endl;
            cout << "Once there, press esc, then return to this screen to move onto the next question" << endl;
            correct_count++;
        }
        else {
            cout << "Wrong! Navigate to your desktop screen to find out the correct answer..." << endl;
            cout << "Once there, press esc, then return to this screen to move onto the next question" << endl;
            incorrect_count++;
        }

        // call the FlagMaker python script with the correct answer to display flag
        draw_flag = python + " ../FlagMaker.py " + correct_answer;
        system(draw_flag.c_str());
    }
    
    // display results
    cout << "\nYou got " << correct_count << " out of  " << correct_count + incorrect_count << " questions right " << endl;
    cout << "Thanks for taking the quiz!" << endl;
    return 0;
}

string get_user_answer(){
    char letter_ans;
    string country_ans;
    cout << "(a) France" << endl;
    cout << "(b) Italy" << endl;
    cout << "(c) Germany" << endl;
    cout << "(d) Russia" << endl;
    cout << "Enter 'a', 'b', 'c', or 'd': ";
    cin >> letter_ans;
    while(letter_ans != 'a' &&
          letter_ans != 'b' &&
          letter_ans != 'c' &&
          letter_ans != 'd'){
        cout << "Enter 'a', 'b', 'c', or 'd': ";
        cin >> letter_ans;
    }
    if (letter_ans == 'a') {
        country_ans = " France";
    }

    else if (letter_ans == 'b') {
        country_ans = " Italy";
    }

    else if (letter_ans == 'c') {
        country_ans = " Germany";
    }

    else if (letter_ans == 'd') {
        country_ans = " Russia";
    }
    return country_ans;
}

string ask_question(int q_num){
    string answer;
    if (q_num == 1){
        cout << "\nWhich country contains all three of Europe's active volcanoes? " << endl;
        answer = get_user_answer();
    }

    else if (q_num == 2){
        cout << "\n\n65% of the highways in this country have no speed limit" << endl;
        answer = get_user_answer();
    }

    else if (q_num == 3){
        cout << "\n\nWhich country contains the world's largest McDonald's? " << endl;
        answer = get_user_answer();
    }

    else if (q_num == 4){
        cout << "\n\nIn which country was the camera phone invented? " << endl;
        answer = get_user_answer();
    }
    return answer;
}


string get_correct_answer(int q_num){
    string correct_answer;
    if (q_num == 1){
        correct_answer = " Italy";
    }

    else if (q_num == 2){
        correct_answer = " Germany";
    }

    else if (q_num == 3){
        correct_answer = " Russia";
    }

    else if (q_num == 4){
        correct_answer = " France";
    }
    return correct_answer;
}


#include <iostream>
#include <vector>

void questions();
void answers();

int main() {

    questions();
    answers();

    return 0;
}

void questions() {
    std::string questions[5] = {"What is the capital of Georgia?",
                                "What is the capital of Russia?",
                                "What is the capital of Ukraine?",
                                "What is the capital of USA?",
                                "What is the capital of France?"};

    std::string answers[5][4] = {"a.Nairobi" , "b.Tbilisi", "c.Mexico", "d.Istanbul",
                                 "a.New York", "b.Berlin","c.Moscow","d.Bogota",
                                 "a.Washington", "b.London", "c.Denver", "d.Kiev",
                                 "a.Los Angeles","b.New York", "c.Washington","d.Tokyo",
                                 "a.Rome","b.Moscow","c.Paris","d.London"};

    for (int i = 0; i < sizeof(questions) / sizeof(questions[i]); i++) {
        std::cout << i+1 << '.' << questions [i] << std::endl;
        for (int j = 0; j < (sizeof(answers)/sizeof(answers[0])) - 1; j++) {
            std::cout << answers[i][j] << "  ";
        }
        std::cout << std::endl;
        std::cout << std::endl;
    }
}

void answers(){
    std::vector<std::string> wrongAnswers;
    char answers[] = {'b','c','d','c','c'};
    char userChoice;
    int points = 0;
    for (int i = 0; i < sizeof(answers)/ sizeof(answers[0]); ++i) {
        std::cout << i + 1 << ". ";
        std::cin >> userChoice;
        if (userChoice == answers[i]){
            points++;
        }
        else{
            std::string wrong = "Number " + std::to_string(i+1) + " was incorrect";
            wrongAnswers.push_back(wrong);
        }
    }
    std::cout << "You have earned " << points << " points!" << std::endl;
    std::cout << std::endl;
    for (int i = 0; i < wrongAnswers.size(); ++i) {
        std::cout << wrongAnswers[i] << std::endl;
        std::cout << "Correct answer was: " << answers[i] << std::endl;
        std::cout << std::endl;
    }
}
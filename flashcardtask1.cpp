// quiz app for the flash card app

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

struct Flashcard
{
    std::string question;
    std::string answer;
};

std::vector<Flashcard> flashcards;

void addFlashcard(const std::string &question, const std::string &answer)
{
    Flashcard card = {question, answer};
    flashcards.push_back(card);
}

void displayQuestion(int index)
{
    std::cout << "Question: " << flashcards[index].question << std::endl;
}

bool checkAnswer(int index, const std::string &userAnswer)
{
    return flashcards[index].answer == userAnswer;
}

int main()
{

    std::cout << "NOTE!! answer's first char should be capital:: \n";

    addFlashcard("What is the capital of India?", "Delhi");

    addFlashcard("Which planet is the hottest planet in the solar system?", "Venus");

    // Quiz loop
    for (int i = 0; i < flashcards.size(); ++i)
    {
        displayQuestion(i);

        std::string userAnswer;
        std::cout << "Your Answer: ";
        std::cin >> userAnswer;

        if (checkAnswer(i, userAnswer))
        {
            std::cout << "Correct!\n";
        }
        else
        {
            std::cout << "Incorrect. The correct answer is: " << flashcards[i].answer << "\n";
        }
    }

    return 0;
}
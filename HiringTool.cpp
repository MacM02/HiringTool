#include <string>
#include <iostream>
#include <vector>

/**
 * Defines a person by their name, age, GPA, and credit score.
 * 
 * Mack Muir-Jeffryes
 * February 10th, 2025
 */
struct Person {
    char name;
    int age;
    double GPA;
    double creditScore;

    Person() : name{' '}, age{0}, GPA{0},  creditScore{0} {}
    Person(char name, int age, double GPA, double creditScore) : name{name}, age{age}, GPA{GPA}, creditScore{creditScore} {}

    // returns a string representation of a Person.
    std::string toString() {
        std::string details = "Name: " + std::to_string(name) + " Age: " + std::to_string(age) + " GPA: " + std::to_string(GPA) + " Credit Score: " + std::to_string(creditScore);
        return details;
    }
};

/**
 * Selects the most qualified candidate from a list of 10 people based
 * on age, GPA, and credit score.
 * @brief Priority: GPA > creditScore > age
 * 
 * Mack Muir-Jeffryes
 * February  10th, 2025
 */
class HiringTool {
private:
    // holds 10 people objects to choose from.
    Person candidates[10];

public:
    /**
     * Constructor adding people.
     */
    HiringTool(Person* candidates) {
        for (int i = 0; i < 10; i++) {
            this->candidates[i] = candidates[i];
        }
    }

    ~HiringTool() {}

    /**
     * Selects the best of 10 candidates based on their attributes.
     */
    Person* chooseBestCandidate() {
        Person* bestCandidate = &candidates[0];
        for (int i = 1; i < 10; i++) {

            // selects based on GPA
            if (candidates[i].GPA > bestCandidate->GPA) {
                bestCandidate = &candidates[i];
            }

            // if GPA is equal, choose based on credit score.
            else if (candidates[i].GPA == bestCandidate->GPA) {
                if(candidates[i].creditScore > bestCandidate->creditScore) {
                    bestCandidate = &candidates[i];
                }
                else if (candidates[i].creditScore == bestCandidate->creditScore) {

                    // finally, take the one who is more experienced
                    if (candidates[i].age > bestCandidate->age) {
                        bestCandidate = &candidates[i];
                    }
                }
            }
        }
        return bestCandidate;
    }
};
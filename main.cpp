#include "HiringTool.cpp"

/**
 * Creates a list of candidates and selects the best one using the HiringTool class.
 * 
 * Mack Muir-Jeffryes
 * February 10th, 2025
 */
int main() {
    srand(time(0));
    Person candidates[10];
    double randGPA = 0 + (rand() % 4);
    char name = 'a';
    for (int i = 0; i < 10; i++) {
        int age = i + 20;
        double credit = i + 500.5;

        Person p{name, age, credit, randGPA};
        
        candidates[i] = p;
        randGPA = rand() % 4;
        name++;
    }

    HiringTool tool(candidates);
    Person bestCandidate = *tool.chooseBestCandidate();

    std::cout << bestCandidate.toString() << std::endl;
}
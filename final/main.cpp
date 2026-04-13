#include "deps.hpp"
#include "project.hpp"
#include "snapshot.hpp"

const unsigned int MAX_ENERGY = 100;
unsigned int energy = MAX_ENERGY;
const unsigned int MAX_ENERGY_DRINKS = 3;
unsigned int totalEnergyDrinks = 0;
const unsigned int MAX_HOURS = 24;
unsigned int currentHour = 0;

int main() {
    std::cout << R"(
     /$$   /$$                     /$$       /$$   /$$ /$$   /$$
    | $$  | $$                    | $$      | $$  /$$/| $$  | $$
    | $$  | $$  /$$$$$$   /$$$$$$$| $$   /$$| $$ /$$/ | $$  | $$
    | $$$$$$$$ |____  $$ /$$_____/| $$  /$$/| $$$$$/  | $$  | $$
    | $$__  $$  /$$$$$$$| $$      | $$$$$$/ | $$  $$  | $$  | $$
    | $$  | $$ /$$__  $$| $$      | $$_  $$ | $$\  $$ | $$  | $$
    | $$  | $$|  $$$$$$$|  $$$$$$$| $$ \  $$| $$ \  $$|  $$$$$$/
    |__/  |__/ \_______/ \_______/|__/  \__/|__/  \__/ \______/                                                  
    )" << std::endl;
    std::cout << "Welcome to (short) HackKU 26! You get 24 hours to complete your project. Get started!" << std::endl;
    bool keepRunning = true;
    while (keepRunning) {
        hku::Project project = hku::Project();
        while (true) {
            std::cout << "-----" << std::endl;
            std::cout << "Hour: " << currentHour << " Energy: " << energy << " Progress: " << project.getProgress() << std::endl;
            std::cout << "a) Code!\nb) Code & Energy Drink\nc) Rest" << std::endl;
            std::cout << "Enter your choice: ";
            std::string choice = "";
            std::cin >> choice;
            choice = std::tolower(choice[0]);
            if (choice == "a" && energy >= 40) {
                energy -= 40;
                project.setProgress(project.getProgress() + 0.1f);
                std::unique_ptr<hku::Snapshot> snapshot = std::make_unique<hku::Snapshot>();
                std::cout << "What did you code for the project? ";
                std::cin.ignore(); // Remove the spare newline character from the input buffer
                std::getline(std::cin, snapshot->description);
                project.addSnapshot(snapshot);
            } else if (choice == "b" && energy >= 10) {
                totalEnergyDrinks++;
                if (totalEnergyDrinks > MAX_ENERGY_DRINKS) {
                    std::cout << "You have consumed too many energy drinks! For consuming too much caffeine, the hackathon disqualified you. Better luck next time!" << std::endl;
                    break;
                }
                energy -= 10;
                project.setProgress(project.getProgress() + 0.12f);
                std::unique_ptr<hku::Snapshot> snapshot = std::make_unique<hku::Snapshot>();
                std::cout << "What did you code for the project? ";
                std::cin.ignore(); // Remove the spare newline character from the input buffer
                std::getline(std::cin, snapshot->description);
                project.addSnapshot(snapshot);
            } else if (choice == "c") {
                energy += 30;
                if (energy > MAX_ENERGY) {
                    energy = MAX_ENERGY;
                }
            } else {
                // This covers both an invalid choice and lacking energy
                std::cout << "\nInvalid choice, try again!" << std::endl;
            }
            currentHour++;
            if (currentHour >= MAX_HOURS) {
                std::cout << "The hackathon is over! Final Progress: " << project.getProgress() << std::endl;
                int i = 0;
                for (const auto& snapshot : project.getSnapshots()) {
                    std::cout << "Snapshot " << i << ": " << snapshot->description << std::endl;
                    i++;
                }
                break;
            }
        }
        std::cout << "Do you want to play again? (y/n): ";
        std::string playAgainChoice = "";
        std::cin >> playAgainChoice;
        playAgainChoice = std::tolower(playAgainChoice[0]);
        if (playAgainChoice != "y") {
            keepRunning = false;
        }
    }
}
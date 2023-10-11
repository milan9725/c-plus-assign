#include <iostream>
#include <string>
using namespace std;

class Cricketer {
public:
    string playerName;
    int matchesPlayed;

public:
    void inputPlayerData() {
        cout << "Enter player name: ";
        cin >> playerName;
        cout << "Enter matches played: ";
        cin >> matchesPlayed;
    }

    void displayPlayerData() {
        cout << "Player Name: " << playerName << endl;
        cout << "Matches Played: " << matchesPlayed << endl;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    double averageRuns;
    int bestPerformance;

public:
    void inputBatsmanData() {
        inputPlayerData(); // Call the base class method to input common data
        cout << "Enter total runs scored: ";
        cin >> totalRuns;
        cout << "Enter average runs per match: ";
        cin >> averageRuns;
        cout << "Enter best performance (runs in a single match): ";
        cin >> bestPerformance;
    }

    void calculateAverageRuns() {
        averageRuns = static_cast<double>(totalRuns) / matchesPlayed;
    }

    void displayBatsmanData() {
        displayPlayerData(); // Call the base class method to display common data
        cout << "Total Runs Scored: " << totalRuns << endl;
        cout << "Average Runs per Match: " << averageRuns << endl;
        cout << "Best Performance (Runs in a Single Match): " << bestPerformance << endl;
    }
};

int main() {
    Batsman batsman;

    cout << "Enter Batsman's Information:" << endl;
    batsman.inputBatsmanData();
    batsman.calculateAverageRuns();

    cout << "\nBatsman's Information:" << endl;
    batsman.displayBatsmanData();

    return 0;
}


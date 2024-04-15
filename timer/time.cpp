 #include <iostream>
#include <ctime>
using namespace std;
int main() {
    // Get the current time
    time_t now = time(0);

    // Convert now to tm struct for local time
    tm *localTime = localtime(&now);

    // Print local time
    cout << "Current local time and date: " << asctime(localTime) <<endl;

    return 0;
}

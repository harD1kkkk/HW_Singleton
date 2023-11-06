// zavd_90.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
#include <vector> 
using namespace std;
class Logger {
private:
    Logger() {};
    vector<string>vc;
public:
    static Logger& getInstance() {
        static Logger instance;
        return instance;
    }

    void log(string text) {
        vc.push_back(text);
    }

    vector<string> getLogs() {
        return vc;
    }

};
int main()
{
    Logger& logger = Logger::getInstance();

    logger.log("Error: Failed to read the file");
    logger.log("Information: Data Downloaded from server");

    vector<string> logEntris = logger.getLogs();
    for (string v : logEntris) {
        cout << v << " " << endl;
    }
}
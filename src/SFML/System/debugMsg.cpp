#include <SFML/System/debugMsg.hpp>

//Inlcude colors
#define GREEN "\033[92m"
#define MAGENTA "\033[95m"
#define YELLOW "\033[93m"
#define RED "\033[91m"
#define DEFAULT "\033[39;49m"

char* getTimeAndDate() {
    //Get current time
    time_t timeStamp = time(nullptr);
    //Create time struct based on local time
    tm datetime = *localtime(&timeStamp);


    static char output[50];
    //Get dd/mm/yyyy hr:min:sec
    strftime(output, 50, "[%d/%m/%Y] [%H:%M:%S] [", &datetime);
    return output;
}

void debugMessage::printWarningInfo(){
    std::cout << getTimeAndDate() << YELLOW << "WARNING"<< DEFAULT << "] ";
}
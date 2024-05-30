#include <iostream>
#include <iomanip>
#include <windows.h> 
#include <ctime> 
 


using namespace std;


struct Time {
    int hour;
    int min;
    int sec;
};



void print(Time currTime) {

    // Stole from stack Overflow..., but understand?    
    // Весьма полезно 
    // Здесь две команды - почисти экран \033[2J
    // И переведи курсор в левый верхний угол \033[1;1H
    cout << "\033[2J\033[1;1H"; 

    cout << setfill(' ')<<setw(1525)<<"Московское время"<<endl<< endl;
  
    cout <<"\t\t\t\t\t\t\t" << setfill('0') << setw(2) << currTime.hour << ":" << setw(2) << currTime.min << ":" << setw(2) << currTime.sec << endl;
    
}

void times(Time currTime) {

    while (true)
    {
        print(currTime);

        Sleep(1000);

        currTime.sec++;
        if (currTime.sec == 60) {
            currTime.sec = 0;
            currTime.min++;
            if (currTime.min == 60) {
                currTime.min = 0;
                currTime.hour++;
                if (currTime.hour == 24) {
                    currTime.hour = 0;
                }
            }
        }
    }
}


int main() {

    Time currentTime = { 0, 0, 0 };

    times(currentTime);
    return 0;
}

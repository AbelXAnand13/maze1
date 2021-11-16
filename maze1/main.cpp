#include <iostream>
#include <string>
#include <stdio.h>
#include <thread>
#include <curses.h>
using namespace std;

int main() {
    int choice;
    cout << "This is a maze, you cannot go back to the area you came from\nWould you like to go Down(1) or Right(2)\n";//1
    cin >> choice;
    switch(choice) {
        case 1:
            cout << "Do you want to go down(1) or right(2)\n";//4
            cin >> choice;
            switch(choice) {
                case 1:
                    cout << "You have to go right\n";//7
                    cout << "You have to go right again\n";//8
                    cout << "Success, you made it to the end of the maze!\n";//9
                    break;
                case 2:
                    cout << "Do you want to go up(1) or right(2)\n";//5
                    cin >> choice;
                    switch(choice) {
                        case 1:
                            cout << "You have to go right.\nYou are trapped...";//3
                            break;
                        case 2:
                            cout << "You are trapped..." ;//6
                            break;
                    }
                    break;
            }
            break;
        case 2:
            cout << "Do you want to go right(1) or down(2)\n";//2
            cin >> choice;
            switch(choice) {
                case 1:
                    cout << "You are trapped...\n";//3
                    break;
                case 2:
                    cout << "Do you want to go left(1) or right(2)\n";//5
                    cin >> choice;
                    switch (choice) {
                        case 1:
                            cout << "Do you want to go up(1) or down(2)";//4
                            cin >> choice;
                            switch(choice) {
                                case 1:
                                    cout << "You are trapped...";
                                    break;
                                case 2:
                                    cout << "You have to go right\nYou have to go right again\nSuccess, you made it to the end of the maze!";
                                    break;
                            }
                            break;
                        case 2:
                            cout << "You are trapped...\n";//6
                            break;
                    }
            }
            break;
    }
}

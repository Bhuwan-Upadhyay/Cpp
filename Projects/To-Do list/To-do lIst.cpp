#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string task;
    int choice = -1;
    string content;

    ofstream outTaskFile("ToDoList.txt");
    ifstream inTaskFile("ToDoList.txt");
    

    while(choice!=0)
    {
        cout << "1 - Add a task" << endl;
        cout << "2 - View tasks" << endl;
        cout << "0 - Quit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice)
        {
            case 1:
            cout << "Enter Your task: ";
            getline(cin, task);
            outTaskFile << task << endl;
            break;

            case 2:
            cout << "To-Do list:" << endl;
            while(inTaskFile.eof() == false)
            {
                getline(inTaskFile, content);
                cout << content << endl;
            }
            break;

            case 0:
            cout << "Exited from To Do list" << endl;
            choice = 0;
            break;

            default:
            cout << "Error! Wrong choice entered" << endl;
            choice = 0;
            break;
                
        }
    }

    outTaskFile.close();
    inTaskFile.close();
    

    return 0;
}
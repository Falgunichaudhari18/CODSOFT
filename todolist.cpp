#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() 
{
    vector<string> todoList;
    string task;

    cout << "Welcome to the To-Do List!" << endl;

    while (true) {
        cout << "\nMENU:" << endl;
        cout << "1. Add task" << endl;
        cout << "2. View tasks" << endl;
        cout << "3. Mark task as completed" << endl;
        cout << "4. Delete tasks" << endl;
        cout << "5. Quit" << endl;
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter a task: ";
                cin.ignore(); 
                getline(cin, task);
                todoList.push_back(task);
                cout << "Task added!" << endl;
                break;
            case 2:
                if (todoList.empty()) {
                    cout << "Your to-do list is empty." << endl;
                } else {
                    cout << "\nTo-Do List:" << endl;
                    for (int i = 0; i < todoList.size(); i++) {
                        cout << i + 1 << ". " << todoList[i] << endl;
                    }
                }
                break;
             case 3:
             {
                size_t taskIndex;
                    cout << "Enter the task number to mark as completed: ";
                    cin >> taskIndex;
                    if (taskIndex >= 1 && taskIndex <= todoList.size()) {
                        todoList[taskIndex - 1] = "[Completed] " + todoList[taskIndex - 1];
                        cout << "Task marked as completed!" << endl;
                    } else {
                        cout << "Invalid task number." << endl;
                    }
                    break;
             }   
            case 4: 
                {
                size_t taskIndex;
                    cout << "Enter the task number to delete: ";
                    cin >> taskIndex;
                    if (taskIndex >= 1 && taskIndex <= todoList.size()) {
                        todoList.erase(todoList.begin() + taskIndex - 1);
                        cout << "Task deleted!" << endl;
                    } else {
                        cout << "Invalid task number." << endl;
                    }
                }
                break;
            case 5:
                cout << "Thank You" << endl;
                return 0;
            default:
                cout << "Invalid Input. Please try again." << endl;
        }
    }

    return 0;
}

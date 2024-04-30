#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
struct Task {
    string description;
    bool completed;

    Task(string desc)  {
    	description=desc;
    	completed=false;
    }
};

class TodoList {
private:
    vector<Task> tasks;

public:
    void addTask(const string& description) {
        tasks.push_back(Task(description));
        cout << "Task added: " << description << endl;
    }

    void markTaskCompleted(int index) {
        if (index >= 0 && index < tasks.size()) {
            tasks[index].completed = true;
            cout << "Task marked as completed: " << tasks[index].description << endl;
        } else {
            cout << "Invalid task index!" << endl;
        }
    }

    void displayTasks() {
        cout << "Tasks:" << endl;
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". " << tasks[i].description;
            if (tasks[i].completed)
                cout << " (Completed)";
            cout << endl;
        }
    }
};

int main() {
    TodoList todoList;

    char choice;
    do {
        cout << "\nMENU:" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. Mark Task as Completed" << endl;
        cout << "3. View Tasks" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case '1': {
                string taskDescription;
                cout << "Enter task description: ";
                cin.ignore();
                getline(cin, taskDescription);
                todoList.addTask(taskDescription);
                break;
            }
            case '2': {
                int taskIndex;
                cout << "Enter index of task to mark as completed: ";
                cin >> taskIndex;
                todoList.markTaskCompleted(taskIndex - 1); // Adjust index to 0-based
                break;
            }
            case '3':
                todoList.displayTasks();
                break;
            case '4':
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != '4');

    return 0;
}


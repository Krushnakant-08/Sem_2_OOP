/*
A menu-driven To-Do List application in C++ using Object-Oriented Programming (OOP) principles. 
The program allows users to dynamically add, remove, mark tasks as complete, and view their task list.
*/

//Name : Krushnakant Patil
//PRN : 124B1B220
//Division : M
#include <iostream>
#include <vector>
using namespace std;

class Task {
public:
    string description;
    bool isCompleted;

    Task(string desc) : description(desc), isCompleted(false) {}

    void markComplete() {
        isCompleted = true;
    }

    void display() {
        cout << (isCompleted ? "[Completed] " : "[Pending] ") << description << endl;
    }
};

class ToDoList {
private:
    vector<Task> tasks;

public:
    void addTask() {
        string desc;
        cout << "Enter task description: ";
        cin.ignore();
        getline(cin, desc);
        tasks.push_back(Task(desc));
        cout << "Task added successfully!\n";
    }

    void removeTask() {
        int index;
        displayTasks();
        cout << "Enter task number to remove: ";
        cin >> index;
        if (index > 0 && index <= tasks.size()) {
            tasks.erase(tasks.begin() + index - 1);
            cout << "Task removed successfully!\n";
        } else {
            cout << "Invalid task number!\n";
        }
    }

    void markTaskComplete() {
        int index;
        displayTasks();
        cout << "Enter task number to mark as complete: ";
        cin >> index;
        if (index > 0 && index <= tasks.size()) {
            tasks[index - 1].markComplete();
            cout << "Task marked as complete!\n";
        } else {
            cout << "Invalid task number!\n";
        }
    }

    void displayTasks() {
        cout << "\n--- To-Do List ---\n";
        if (tasks.empty()) {
            cout << "No tasks available.\n";
        } else {
            for (int i = 0; i < tasks.size(); i++) {
                cout << i + 1 << ". ";
                tasks[i].display();
            }
        }
        cout << "-------------------\n";
    }
};

int main() {
    ToDoList list;
    int choice;

    while (true) {
        cout << "\nTo-Do List Menu:\n";
        cout << "1. Add Task\n2. Remove Task\n3. Mark Task Complete\n4. View Tasks\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                list.addTask();
                break;
            case 2:
                list.removeTask();
                break;
            case 3:
                list.markTaskComplete();
                break;
            case 4:
                list.displayTasks();
                break;
            case 5:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    }
}
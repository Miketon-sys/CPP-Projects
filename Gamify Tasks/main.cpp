#include <iostream>
#include <vector>     // for std::vector
#include <string>     // for std::string
#include <chrono>
#include <thread>


using namespace std;

//Data Structures
struct Task
{
    int id;
    string title;
    bool completed;
};

struct Player 
{
    int level;
    int xp;
};


void showMenu();
void addTask(vector<Task>& tasks, int& nextTaskId);
void showTasks(const vector<Task>& tasks);
void completeTask(std::vector<Task>& tasks, Player& player);
void checkLevelUp(Player& player);
void showPlayerStatus(const Player& player);
void showTree(const Player& player);
void startPomodoro(Player& player);



int main()
{
    int choice=0;

    vector<Task> tasks;
    int nextTaskId=1;

    Player player;
    player.level = 1;
    player.xp = 0;


    while(true)
    {
        cout<<"===== Gmaify Tasks =====\n";
        cout<<"1. Add task\n";
        cout<<"2. Complete task\n";
        cout<<"3. Start Pomodoro\n";
        cout<<"4. Show tasks\n";
        cout<<"5. Show player status\n";
        cout << "6. Exit\n";
        cout << "Choice: ";

        if(!(cin>>choice))
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout<<"Invalid Input. Enter a number.\n";
            continue;
        }

        //If the user wants to leave
        if(choice==6)
        {
            cout<<"Goodbye!\n";
            break;
        }

        //Choices or what will happen
        switch (choice) 
        {
            case 1:
                addTask(tasks, nextTaskId);
                break;
            case 2:
                completeTask(tasks, player);
                break;
            case 3:
                startPomodoro(player);
                break;
            case 4:
                showTasks(tasks);
                break;
            case 5:
                showPlayerStatus(player);
                break;
            case 6:
                std::cout << "Goodbye!\n";
                break;
            default:
                std::cout << "Invalid option.\n";
                break;
        }



    }

    return 0;
}

void showMenu() {
    std::cout << "\n==== GAMIFY TASK ====\n";
    std::cout << "1. Add task\n";
    std::cout << "2. Complete task\n";
    std::cout << "3. Start Pomodoro\n";
    std::cout << "4. Show tasks\n";
    std::cout << "5. Show player status\n";
    std::cout << "6. Exit\n";
    std::cout << "Choice: ";
}
void addTask(std::vector<Task>& tasks, int& nextTaskId) {
    std::cin.ignore();

    Task newTask;
    newTask.id = nextTaskId++;

    std::cout << "Enter task title: ";
    std::getline(std::cin, newTask.title);

    newTask.completed = false;
    tasks.push_back(newTask);

    std::cout << "Task added!\n";
}
void showTasks(const std::vector<Task>& tasks) {
    if (tasks.empty()) {
        std::cout << "No tasks yet.\n";
        return;
    }

    std::cout << "\n--- Task List ---\n";
    for (const auto& task : tasks) {
        std::cout << task.id << ". "
                  << task.title
                  << (task.completed ? " [Done]" : " [Pending]")
                  << "\n";
    }
}
void completeTask(std::vector<Task>& tasks, Player& player) 
{
    if (tasks.empty()) {
        std::cout << "No tasks to complete.\n";
        return;
    }

    int id;
    std::cout << "Enter task ID to complete: ";
    std::cin >> id;

    for (auto& task : tasks) {
        if (task.id == id) {
            if (task.completed) 
            {
                std::cout << "Task already completed.\n";
            } 
            else 
            {
                task.completed = true;
                player.xp += 50;
                std::cout << "Task completed! +50 XP\n";
                checkLevelUp(player);
            }
            return;
        }
    }

    std::cout << "Task ID not found.\n";
}
void checkLevelUp(Player& player) 
{
    while (player.xp >= player.level * 100) {
        player.xp -= player.level * 100;
        player.level++;
        std::cout << "🎉 Level Up! You are now level "
                  << player.level << "!\n";
    }
}
void showPlayerStatus(const Player& player) {
    std::cout << "\n--- Player Status ---\n";
    std::cout << "Level: " << player.level << "\n";
    std::cout << "XP: " << player.xp
              << " / " << player.level * 100 << "\n";
    showTree(player);
}

void showTree(const Player& player) {
    std::cout << "Your Tree: ";

    if (player.level <= 2)
        std::cout << "🌱 Seed\n";
    else if (player.level <= 4)
        std::cout << "🌿 Sprout\n";
    else if (player.level <= 6)
        std::cout << "🌳 Young Tree\n";
    else
        std::cout << "🌲 Big Tree\n";
}
void startPomodoro(Player& player) {
    const int pomodoroMinutes = 25;
    const int xpReward = 30;

    std::cout << "Pomodoro started (25 minutes).\n";
    std::cout << "Stay focused...\n";

    for (int i = pomodoroMinutes; i > 0; --i) {
        std::cout << "\rTime left: " << i << " minute(s) " << std::flush;
        std::this_thread::sleep_for(std::chrono::minutes(1));
    }

    std::cout << "\nPomodoro completed! +30 XP\n";
    player.xp += xpReward;
    checkLevelUp(player);
}


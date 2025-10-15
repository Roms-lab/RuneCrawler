#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>


module AntiCheat;
import ModAPI;
import Items;

std::string Player = "O";
std::string Chest = "L";
std::string Enemy = "E";
std::string Merchant = "M";

std::string PossibleDoors[4] = { "North", "South", "East", "West" };

bool Settings_Shown = false;
bool Inventory_Shown = false;

void Pause() {
    std::cout << "Press Enter to continue.";
    std::cin.get();
    std::cout << "\n";
}

void ClearWindows() {
    system("cls");
}

void ClearLinux() {
    system("clear");
}

void ClearMac() {
    system("clear");
}

void PlayTitle() {
    std::cout << R"(
 ______     __  __     __   __     ______     ______     ______     ______     __     __     __         ______     ______    
/\  == \   /\ \/\ \   /\ "-.\ \   /\  ___\   /\  ___\   /\  == \   /\  __ \   /\ \  _ \ \   /\ \       /\  ___\   /\  == \   
\ \  __<   \ \ \_\ \  \ \ \-.  \  \ \  __\   \ \ \____  \ \  __<   \ \  __ \  \ \ \/ ".\ \  \ \ \____  \ \  __\   \ \  __<   
 \ \_\ \_\  \ \_____\  \ \_\\"\_\  \ \_____\  \ \_____\  \ \_\ \_\  \ \_\ \_\  \ \__/".~\_\  \ \_____\  \ \_____\  \ \_\ \_\ 
  \/_/ /_/   \/_____/   \/_/ \/_/   \/_____/   \/_____/   \/_/ /_/   \/_/\/_/   \/_/   \/_/   \/_____/   \/_____/   \/_/ /_/ 
                                                                                                              
)";
}

void DrawMap() {
    std::cout << R"(
                                                      +----------------------------------+
                                                      |                                  |
                                                      |                                  |
                                                      |                                  |
                                                      |                                  |
                                                      |                                  |
                                                      |                                  |
                                                      |                 O                |
                                                      |                                  |
                                                      |                                  |
                                                      |                                  |
                                                      |                                  |
                                                      |                                  |
                                                      |                                  |
                                                      +----------------------------------+
)";
}

void Inventory() {
    std::cout << R"(
                                              .___                           __                       
                                              |   | _______  __ ____   _____/  |_  ___________ ___.__.
                                              |   |/    \  \/ // __ \ /    \   __\/  _ \_  __ <   |  |
                                              |   |   |  \   /\  ___/|   |  \  | (  <_> )  | \/\___  |
                                              |___|___|  /\_/  \___  >___|  /__|  \____/|__|   / ____|
                                                       \/          \/     \/                   \/     
                                              +------------------------------------------------------+
                                              |                                                      |
                                              |                                                      |
                                              |                                                      |
                                              |                                                      |
                                              |                                                      |
                                              +------------------------------------------------------+
)";
}

void Shop() {
    std::cout << R"(
                                                          _________.__                   
                                                         /   _____/|  |__   ____ ______  
                                                         \_____  \ |  |  \ /  _ \\____ \ 
                                                         /        \|   Y  (  <_> )  |_> >
                                                        /_______  /|___|  /\____/|   __/ 
                                                                \/      \/       |__|    
                                                     +--------------------------------------+
                                                     |                                      |
                                                     |                                      |
                                                     |                                      |
                                                     |                                      |
                                                     |                                      |
                                                     +--------------------------------------+
)";
}

void Settings() {
    std::cout << R"(
                                                _________       __    __  .__                      
                                               /   _____/ _____/  |__/  |_|__| ____    ____  ______
                                               \_____  \_/ __ \   __\   __\  |/    \  / ___\/  ___/
                                               /        \  ___/|  |  |  | |  |   |  \/ /_/  >___ \ 
                                              /_______  /\___  >__|  |__| |__|___|  /\___  /____  >
                                                      \/     \/                   \//_____/     \/ 
                                              +----------------------------------------------------+
                                              | Difficulty: Normal                                 |
                                              | Volume: 100%                                       |
                                              +----------------------------------------------------+
)";
}

void Mods() {
    std::cout << R"(
                                                           _____             .___      
                                                          /     \   ____   __| _/______
                                                         /  \ /  \ /  _ \ / __ |/  ___/
                                                        /    Y    (  <_> ) /_/ |\___ \ 
                                                        \____|__  /\____/\____ /____  >
                                                                \/            \/    \/ 
                                                    +--------------------------------------+
                                                    |                                      |
                                                    |                                      |
                                                    |                                      |
                                                    |                                      |
                                                    |                                      |
                                                    |                                      |
                                                    |                                      |
                                                    |                                      |
                                                    +--------------------------------------+

)";
}

void Printall() {
    DrawMap();
    Inventory();
    Shop();
    Settings();
    Mods();
}

void CheckKey() {
    int key;
    if (_kbhit()) { // Check if a key was pressed
        key = _getch(); // Read the key
        if (key == 27) { // Esc Key
            std::cout << "Toggle Settings\n";
            if (Settings_Shown == false) {
                ClearWindows();
                Settings();
                Mods();
                Settings_Shown = true;
            }
            else if (Settings_Shown == true) {
                ClearWindows();
                Settings_Shown = false;
            }
        }
        else if (key == 224) { // Check for special key indicator
            switch (_getch()) { // Read the actual key code
            case 72: std::cout << "Up arrow Pressed\n"; break;
            case 80: std::cout << "Down arrow Pressed\n"; break;
            case 75: std::cout << "Left arrow Pressed\n"; break;
            case 77: std::cout << "Right arrow Pressed\n"; break;
            }
        }
        else if (key == 'm' || key == 'M') { // Check for M key
            if (Inventory_Shown == false) {
                ClearWindows();
                Inventory();
                Inventory_Shown = true;
            }
            else if (Inventory_Shown == true) {
                ClearWindows();
                Inventory_Shown = false;
            }
        }
    }
}

int main() {
    PlayTitle();
    Pause();
    ClearWindows();
    RunAntiCheat();
    CheckKey();

    while (true) {
        CheckKey();
    }

    return 0;
}

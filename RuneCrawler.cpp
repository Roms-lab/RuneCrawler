#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>

std::string Player = "O";
std::string Loot = "L";
std::string Enemy = "E";
std::string Merchant = "M";

std::string PossibleDoors[4] = { "North", "South", "East", "West"};

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
                                          +-------------------------------------------------------+
                                          |                                                       |
                                          |                                                       |
                                          |                                                       |
                                          |                                                       |
                                          |                                                       |
                                          +-------------------------------------------------------+
)";
}

void checkKey() {
    int key;
    if (_kbhit()) { // Check if a key was pressed
        key = _getch(); // Read the key
        if (key == 224) { // Check for special key indicator
            switch (_getch()) { // Read the actual key code
            case 72: std::cout << "Up arrow Pressed";
            case 80: std::cout << "Down arrow Pressed";
            case 75: std::cout << "Left arrow Pressed";
            case 77: std::cout << "Right arrow Pressed";
            }
        }
    }
}

int main() {
	PlayTitle();
	Pause();
	ClearWindows();
    DrawMap();
	return 0;
}

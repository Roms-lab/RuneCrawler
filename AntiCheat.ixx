#include <iostream>
#include <cstdlib>

export module AntiCheat;

export inline int Coins = 100;
export inline int PlayerHp = 100;
export inline bool AntiCheat_Triggered = false;

export inline void AntiCheat_ShutGame() {
	abort();
}

export inline void PrintAntiCheatTriggered() {
	std::cout << R"(
                   _____          __  .__       .__                   __    ___________      .__                                       .___
                  /  _  \   _____/  |_|__| ____ |  |__   ____ _____ _/  |_  \__    ___/______|__| ____   ____   ___________   ____   __| _/
                 /  /_\  \ /    \   __\  |/ ___\|  |  \_/ __ \\__  \\   __\   |    |  \_  __ \  |/ ___\ / ___\_/ __ \_  __ \_/ __ \ / __ | 
                /    |    \   |  \  | |  \  \___|   Y  \  ___/ / __ \|  |     |    |   |  | \/  / /_/  > /_/  >  ___/|  | \/\  ___// /_/ | 
                \____|__  /___|  /__| |__|\___  >___|  /\___  >____  /__|     |____|   |__|  |__\___  /\___  / \___  >__|    \___  >____ | 
                        \/     \/             \/     \/     \/     \/                          /_____//_____/      \/            \/     \/ 
)";
}

export inline void RunAntiCheat() {
	if (AntiCheat_Triggered == true) {
		PrintAntiCheatTriggered();
		
		// Rest of AntiCheat Logic
	}
}

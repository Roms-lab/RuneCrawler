#include <iostream>
#include <cstdlib>

export module AntiCheat;

export int Coins;
export int PlayerHp;

export void AntiCheat_ShutGame() {
	abort();
}

export module ModAPI;

import <string>;

export inline std::string CustomSwords[] = {"Basic Sword"};

export inline std::string CustomBows[] = {"Basic Bow"};

export struct SwordName {
	std::string CustomSword;
	int Damage;
	int Rarity;
};

export inline SwordName CustomSwordStats[] = {
	{"Basic Sword", 5, 1}
	// {"Name", damage, rarity}
};

export struct BowName {
	std::string CustomBow;
	int Damage;
	int Rarity;
};

export inline BowName CustomBowStats[] = {
	// {"Name", damage, rarity}
	{"Basic Bow", 5, 1}
};

export struct StaffName {
	std::string CustomStaff;
	int Damage;
	int Rarity;
};

export inline StaffName CustomStaffStats[] = {
	// {"Name", damage, rarity}
	{"Basic Staff", 5, 1}
};

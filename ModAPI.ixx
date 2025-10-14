export module ModAPI;

import <string>;

export inline std::string CustomSwords[] = {};

export inline std::string CustomBows[] = {};

export struct SwordName {
  std::string CustomSword;
  int Damage;
  int Rarity;
};

export inline SwordName CustomSwordStats[] = {
// {"Name", damage, rarity}
};

export struct BowName {
  std::string CustomBow;
  int Damage;
  int Rarity;
};

export inline BowName CustomBowStats[] = {
// {"Name", damage, rarity}
};

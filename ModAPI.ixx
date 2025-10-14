export module ModAPI;

import <string>;

export inline std::string CustomSwords[] = {};

export inline std::string CustomBows[] = {};

export struct SwordName {
  std::string CustomSword;
  int Damage;
  int Rarity;
};

export struct BowName {
  std::string CustomBow;
  int Damage;
  int Rarity;
};

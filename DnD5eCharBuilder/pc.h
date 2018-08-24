#pragma once

#include "../common.h"
#include "pc_class.h"
#include "pc_race.h"
#include "../DnDObjects/dnd_objects.h"

class pc {
public:

private:
    pc_class _class;
    pc_race _race;
    std::map<std::string, int> _ability_scores;

    int _LVL;
    int _max_HP;
    int _AC;
    int _SPEED;
    int _PROFICIENCY;
    std::pair<int, dice> _hit_dice;
};


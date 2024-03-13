#include <iostream>

using namespace std;

//Classes

class plaChar {
public:
    string claName;
    int baseHP;
    int baseStr;
    int baseDex;
    int baseInt;
};


class plaRace {
public:
    string raceName;
    int bonusHP;
    int bonusStr;
    int bonusDex;
    int bonusInt;
};

class Player {
public:
    string className;
    int playerHP;
    int playerMP;
    int playerStr;
    int playerDex;
    int playerInt;
    int playerSpellNum;
};

/*class spells {
public:
    string spellName;
    int spellCost;
    int spellDamage;
};*/

class weapon {
public:
    string weaponType;
    int weaponDamage;
    int statBoost;
    int handsToHold;
    int range;
    int ammo;
};

class Inventory {
public:
    string itemName;
    int healing;
    int itemDamage;
    int itemRange;

};

//Global objects

plaChar figCla;
plaChar rogCla;
plaChar wizCla;


plaRace dwaRace;
plaRace elfRace;
plaRace humRace;

/*spells fireSpell;
spells iceSpell;
spells stunSpell;
spells shockSpell;
spells acidSpell;
*/

weapon dagger;
weapon ohSword;
weapon thSword;
weapon staff;
weapon wand;
weapon crossbow;
weapon bow;

//Arrays




//Functions

void charStats() {

    figCla.claName = "Fighter";
    rogCla.claName = "Rogue";
    wizCla.claName = "Wizard";

    figCla.baseHP = 2;
    rogCla.baseHP = 2;
    wizCla.baseHP = 2;

    figCla.baseStr = 2;
    rogCla.baseStr = 0;
    wizCla.baseStr = 0;

    figCla.baseDex = 0;
    rogCla.baseDex = 2;
    wizCla.baseDex = 1;


    figCla.baseInt = 1;
    rogCla.baseInt = 1;
    wizCla.baseInt = 2;

};


void raceStats() {

    dwaRace.raceName = "Dwarf";
    elfRace.raceName = "Elf";
    humRace.raceName = "Human";

    dwaRace.bonusHP = 2;
    elfRace.bonusHP = 1;
    humRace.bonusHP = 1;

    dwaRace.bonusStr = 2;
    elfRace.bonusStr = 0;
    humRace.bonusStr = 1;

    dwaRace.bonusDex = 0;
    elfRace.bonusDex = 2;
    humRace.bonusDex = 2;

    dwaRace.bonusInt = 1;
    elfRace.bonusInt = 2;
    humRace.bonusInt = 1;
};

/*int Spells() {
    fireSpell.spellName = "Fireball";
    iceSpell.spellName = "Freeze Ray";
    stunSpell.spellName = "Stun";
    shockSpell.spellName = "Shock";
    acidSpell.spellName = "Acid";

    fireSpell.spellCost = 1;
    iceSpell.spellCost = 1;
    stunSpell.spellCost = 1;
    shockSpell.spellCost = 1;
    acidSpell.spellCost = 1;

    fireSpell.spellDamage = 5;
    iceSpell.spellDamage = 3;
    stunSpell.spellDamage = 1;
    shockSpell.spellDamage = 2;
    acidSpell.spellDamage = 3;


    //Find bug here.
    //return spellName, spellCost, spellDamage;
    return 0;
};*/

void Weapons() {
    dagger.weaponType = "Dagger";
    ohSword.weaponType = "Short Sword";
    thSword.weaponType = "Long Sword";
    staff.weaponType = "Staff";
    wand.weaponType = "Wand";
    crossbow.weaponType = "Crossbow";
    bow.weaponType = "Bow";

    dagger.weaponDamage = 3;
    ohSword.weaponDamage = 4;
    thSword.weaponDamage = 6;
    staff.weaponDamage = 2;
    wand.weaponDamage = 1;
    crossbow.weaponDamage = 4;
    bow.weaponDamage = 3;

    dagger.statBoost = 0;
    ohSword.statBoost = 0;
    thSword.statBoost = 0;
    staff.statBoost = 0;
    wand.statBoost = 0;
    crossbow.statBoost = 0;
    bow.statBoost = 0;

    dagger.handsToHold = 1;
    ohSword.handsToHold = 1;
    thSword.handsToHold = 2;
    staff.handsToHold = 2;
    wand.handsToHold = 1;
    crossbow.handsToHold = 2;
    bow.handsToHold = 2;

    dagger.range = 3;
    ohSword.range = 1;
    thSword.range = 2;
    staff.range = 2;
    wand.range = 1;
    crossbow.range = 4;
    bow.range = 5;

    dagger.ammo = 1;
    ohSword.ammo = 0;
    thSword.ammo = 0;
    staff.ammo = 0;
    wand.ammo = 0;
    crossbow.ammo = 5;
    bow.ammo = 5;
};


Player choices() {
    charStats();
    chooseClass:
    cout << "Choose your class: Fighter, Rogue, or Wizard\n";
    string plaCla;
    cin >> plaCla;
    plaChar chosenCla;
    if (plaCla == "Fighter" || plaCla == "fighter") {
        chosenCla = figCla;
    }
    else if (plaCla == "Rogue" || plaCla == "rogue") {
        chosenCla = rogCla;
    }
    else if (plaCla == "Wizard" || plaCla == "wizard") {
        chosenCla = wizCla;
    }
    else if (plaCla == "New Game" || plaCla == "new game" || plaCla == "New game") {
        cout << endl;
        goto chooseClass;
    }
    else {
        cout << "Try again" << endl;
        goto chooseClass;
    };

    raceStats();
    chooseRace:
    cout << "Choose your race: Dwarf, Elf, or Human\n";
    string plarRace;
    cin >> plarRace;
    plaRace chosenRace;
    if (plarRace == "Dwarf" || plarRace == "dwarf") {
        chosenRace = dwaRace;
    }
    else if (plarRace == "Elf" || plarRace == "elf") {
        chosenRace = elfRace;
    }
    else if (plarRace == "Human" || plarRace == "human") {
        chosenRace = humRace;
    }
    else if (plarRace == "New Game" || plarRace == "new game" || plarRace == "New game") {
        cout << endl;
        goto chooseClass;
    }
    else {
        cout << "Try again" << endl;
        goto chooseRace;
    }


    int startingHP = 5 + chosenCla.baseHP + chosenRace.bonusHP;
    int startingMP = chosenCla.baseInt + chosenRace.bonusInt;
    if (startingMP <= 0) {
        startingMP = 0;
    }
    else {
        startingMP += 5;
    };
    int strength = chosenCla.baseStr + chosenRace.bonusStr;
    int dexterity = chosenCla.baseDex + chosenRace.bonusDex;
    int intelligence = chosenCla.baseInt + chosenRace.bonusInt;

   /*Spells();
    cout << "Choose " << intelligence << " spells from this list" << endl;
    cout << spellName;
    string spell1, spell2, spell3, spell4, spell5;
    if (intelligence == 1) {
        cin >> spell1;
    }
    else if (intelligence == 2) {
        cin >> spell1;
        cin >> spell2;
    }
    else if (intelligence == 3) {
        cin >> spell1;
        cin >> spell2;
        cin >> spell3;
    }
    else if (intelligence == 4) {
        cin >> spell1;
        cin >> spell2;
        cin >> spell3;
        cin >> spell4;
    }
    else if (intelligence == 5) {
        cin >> spell1;
        cin >> spell2;
        cin >> spell3;
        cin >> spell4;
        cin >> spell5;
    };

    int spellList() {
        if (choices.intelligence == 1) {
            cout << spell1;
        }
        else if (intelligence == 2) {
            cout << spell1;
            cout << spell2;
        }
        else if (intelligence == 3) {
            cout << spell1;
            cout << spell2;
            cout << spell3;
        }
        else if (intelligence == 4) {
            cout << spell1;
            cout << spell2;
            cout << spell3;
            cout << spell4;
        }
        else if (intelligence == 5) {
            cout << spell1;
            cout << spell2;
            cout << spell3;
            cout << spell4;
            cout << spell5;
        };
    };*/

    string playerName;
    cout << "What is your name?";
    cin >> playerName;

    cout << "Name:         " << playerName << endl;
    cout << "Class:        " << chosenCla.claName << endl;
    cout << "Race:         " << chosenRace.raceName << endl;
    cout << "HP:           " << startingHP << endl;
    cout << "Mana:         " << startingMP << endl;
    cout << "Strength:     " << strength << endl;
    cout << "Dexterity:    " << dexterity << endl;
    cout << "Intelligence: " << intelligence << endl;
    //cout << "Spell list:   " << spellList;


    Player player;
    player.className = chosenCla.claName;
    player.playerHP = startingHP;
    player.playerMP = startingMP;
    player.playerStr = strength;
    player.playerDex = dexterity;
    player.playerInt = intelligence;
    player.playerSpellNum = intelligence;

    



    return player;
};

int inventory() {
    Weapons();
    inventory Weapon;
}

//Main

int main() {
    bool restartGame = true;
    
    while (restartGame) {
        Player player = choices();

        if (player.playerHP <= 0) {
            cout << endl << "You died!";
        };

        if (player.playerMP <= 0) {
            cout << endl << "You're out of Mana!";
        };
        cout << "";
        string game;
        cin >> game;
        if (game == "New Game" || game == "New game" || game == "new game") {
            restartGame = false;
        }
        /*else if (game == "What do I see")
            something
        */
    };
    return 0;
}

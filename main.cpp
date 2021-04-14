#include <iostream>
#include <cstdlib>
#include <string>
#include <Windows.h>
#include <sstream>
#include <fstream>
#include "nlohmann/json.hpp"

using namespace std;

using json = nlohmann::json;

int hp;
int lvl;
int op1;
int op2;
int damage;
int damageOtr;
int damageVr;
int intelect;
int sila;
int zahita;
int vinos;
int coin;
string Name;
int Elf;
int Pex;
int Mag;
int otr;
int hpMax;
int hpVr;
int ataka1;
int ataka2;
int ataka3;
string at1;
string at2;
string at3;
int chislo;
string prost;
int sluch;
int damageEl;
int damagePex;
int damageMag;
char vib;

class clas {
public:
    void clvoin() {

        system("cls");

        cout << "Ваш профиль: \n";
        cout << "\n";
        cout << "Имя - " << Name << "\n";
        cout << "Класс - Воин \n";
        cout << "----------------------- \n";
        cout << "Сила - " << sila << "\n";
        cout << "Здоровье - " << hp << "/" << hpMax << "\n";
        cout << "Выносливость - " << vinos << "\n";
        cout << "Интеллект - " << intelect << "\n";
        cout << "Наносимый урон - " << damage << "\n";
        cout << "Защита - " << zahita << "\n";
        cout << "----------------------- \n";
        cout << "Уровень - " << lvl << "\n";
        cout << "Опыт - " << op1 << "/" << op2 << "\n";
        cout << "Золото - " << coin << "\n";
        ataka1 = 10;
        ataka2 = 15;
        ataka3 = 12;

        at1 = "Удар мечём";
        at2 = "Силовой удар щитом и мечём";
        at3 = "Удар копьём";

    }
    void clmag() {
        system("cls");

        cout << "Ваш профиль: \n";
        cout << "\n";
        cout << "Имя - " << Name << "\n";
        cout << "Класс - Маг \n";
        cout << "----------------------- \n";
        cout << "Сила - " << sila << "\n";
        cout << "Здоровье - " << hp << "/" << hpMax << "\n";
        cout << "Выносливость - " << vinos << "\n";
        cout << "Интеллект - " << intelect << "\n";
        cout << "Наносимый урон - " << damage << "\n";
        cout << "Защита - " << zahita << "\n";
        cout << "----------------------- \n";
        cout << "Уровень - " << lvl << "\n";
        cout << "Опыт - " << op1 << "/" << op2 << "\n";
        cout << "Золото - " << coin << "\n";

        ataka1 = 10;
        ataka2 = 15;
        ataka3 = 12;

        at1 = "Огненый шар";
        at2 = "Ледяной шип";
        at3 = "Молния";
    }
    void clluch() {
        system("cls");

        cout << "Ваш профиль: \n";
        cout << "\n";
        cout << "Имя - " << Name << "\n";
        cout << "Класс - Лучник \n";
        cout << "----------------------- \n";
        cout << "Сила - " << sila << "\n";
        cout << "Здоровье - " << hp << "/" << hpMax << "\n";
        cout << "Выносливость - " << vinos << "\n";
        cout << "Интеллект - " << intelect << "\n";
        cout << "Наносимый урон - " << damage << "\n";
        cout << "Защита - " << zahita << "\n";
        cout << "----------------------- \n";
        cout << "Уровень - " << lvl << "\n";
        cout << "Опыт - " << op1 << "/" << op2 << "\n";
        cout << "Золото - " << coin << "\n";

        ataka1 = 10;
        ataka2 = 15;
        ataka3 = 12;

        at1 = "Обычный выстрел";
        at2 = "Ряд выстрелов";
        at3 = "Огненая стрела";
    }
};


void save() {

    json sav = json{
            {"name", Name},
            {"hp", hp},
            {"hp1", hpMax},
            {"sila", sila},
            {"vinos", vinos},
            {"intelect", intelect},
            {"damage", damage},
            {"zahita", zahita},
            {"lvl", lvl},
            {"op1", op1},
            {"op2", op2},
            {"coin", coin},
            {"ataka1", ataka1},
            {"ataka2", ataka2},
            {"ataka3", ataka3},
            {"at1", at1},
            {"at2", at2},
            {"at3", at3},
            {"i", vib},
    };

    ofstream save(Name+".json");
    save << sav;
    save.close();


};

void load() {

    json loade;

    ifstream num(Name+".json");
    if (num.is_open()) {
        num >> loade;
        num.close();

        hp = loade["hp"].get<int>();
        hpMax = loade["hp1"].get<int>();
        sila = loade["sila"].get<int>();
        vinos = loade["vinos"].get<int>();
        intelect = loade["intelect"].get<int>();
        damage = loade["damage"].get<int>();
        zahita = loade["zahita"].get<int>();
        lvl = loade["lvl"].get<int>();
        op1 = loade["op1"].get<int>();
        op2 = loade["op2"].get<int>();
        coin = loade["coin"].get<int>();
        ataka1 = loade["ataka1"].get<int>();
        ataka2 = loade["ataka2"].get<int>();
        ataka3 = loade["ataka3"].get<int>();
        at1 = loade["at1"].get<string>();
        at2 = loade["at2"].get<string>();
        at3 = loade["at3"].get<string>();
        vib = loade["i"].get<char>();

    }



};


class unit {
public:
    void elfifan() {
        if (coin >= 400) {
            Elf += 3;
            otr += 3;
            coin = coin - 400;
        }
    }
    void pexun() {
        if (coin >= 500) {
            Pex += 5;
            otr += 5;
            coin = coin - 500;
        }
    }
    void magun() {

        if (coin >= 400) {
            Mag += 3;
            otr += 3;
            coin = coin - 400;
        }
    }
};


class navik {
public:
    void OgnHar() {
        ataka1 += 10;
        at1 = "Улучшенный огненный шар";
    }
    void PovHP() {
        hpMax += 30;
        hp += 30;
    }
    void OgnStrel() {
        ataka2 += 10;
        at2 = "Ряд огненный стрел";
    }
    void TajYdar() {

        at1 = "Тяжелый удар молотом";
        ataka1 += 10;

    }
};



class artef {
public:
    void Nar() {
        ataka1 += 5;
    }
    void Ponog() {
        ataka1 += 10;
    }
    void Hlem() {
        hpMax += 10;
    }
    void Nagrudnik() {
        hpMax += 20;
    }

};

class vragi {
public:
    void skelens() {
        hpVr = 10;
        damageVr = 5;
        cout << "Вы встретили маленький отряд скелетов, который угрожает вашей жизни. Ваши действия? \n";
    }
    void orki() {
        hpVr = 23;
        damageVr = 10;
        cout << "Вы встретили небольшую группу орков, которые угрожают вашей жизни. Ваши действия? \n";
    }
    void bandit() {
        hpVr = 20;
        damageVr = 5;
        cout << "Вы встретили шайку бандитов, которые угрожают вашей жизни. Ваши действия? \n";
    }
    void bos1() {
        hpVr = 300;
        damageVr = 15;
        cout << "Вы вошли в подземелье. Немного побродив по нему вы натыкаетесь на могущественного Лича, обитающее только в этих местах. Ваши действия? \n";
    }
    void bos2() {
        hpVr = 400;
        damageVr = 25;
        cout << "Вы вошли в подземелье. Немного побродив по нему вы натыкаетесь на могущественного Дракона, обитающее только в этих местах. Ваши действия? \n";
    }
    void bos3() {
        hpVr = 700;
        damageVr = 30;
        cout << "Вы вошли в подземелье. Немного побродив по нему вы натыкаетесь на могущественного Голема, обитающее только в этих местах. Ваши действия? \n";
    }
};

char input_char() {
    string l;
    cin >> l;
    return l[0];
}

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int z;
    cout << "Введите имя вашего персонажа: ";
    getline(cin, Name);

    json lop;

    ifstream num(Name+".json");
    if (num.is_open()) {
        cout << "Хотите ли загрузить сохранения?\n";
        cout << "1. Да\n";
        cout << "2. Нет\n";
        cin >> z;
        if (z == 1) {
            num >> lop;
            num.close();

            hp = lop["hp"].get<int>();
            hpMax = lop["hp1"].get<int>();
            sila = lop["sila"].get<int>();
            vinos = lop["vinos"].get<int>();
            intelect = lop["intelect"].get<int>();
            damage = lop["damage"].get<int>();
            zahita = lop["zahita"].get<int>();
            lvl = lop["lvl"].get<int>();
            op1 = lop["op1"].get<int>();
            op2 = lop["op2"].get<int>();
            coin = lop["coin"].get<int>();
            ataka1 = lop["ataka1"].get<int>();
            ataka2 = lop["ataka2"].get<int>();
            ataka3 = lop["ataka3"].get<int>();
            at1 = lop["at1"].get<string>();
            at2 = lop["at2"].get<string>();
            at3 = lop["at3"].get<string>();
            vib = lop["i"].get<char>();
        }
        else {
            system("cls");

            cout << "Выбери класс своего персонажа: \n";
            cout << "1. Маг \n";
            cout << "2. Воин \n";
            cout << "3. Лучник \n";
            cout << "Выбор: ";
            while (true) {
                vib = input_char();

                if (vib == '3' || vib == '2' || vib == '1') {


                    switch (vib) {

                        case '1': {

                            hp = 100;
                            hpMax = 100;
                            lvl = 1;
                            op1 = 0;
                            op2 = 100;
                            zahita = 8;
                            damage = 25;
                            sila = 7;
                            coin = 10000;
                            vinos = 8;
                            intelect = 15;

                            clas clasper;
                            clasper.clmag();
                            system("PAUSE");
                            break;
                        }
                        case '2': {

                            hp = 150;
                            hpMax = 150;
                            lvl = 1;
                            op1 = 0;
                            op2 = 100;
                            zahita = 10;
                            damage = 30;
                            sila = 10;
                            coin = 1000;
                            vinos = 10;
                            intelect = 7;

                            clas clasper;
                            clasper.clvoin();
                            system("PAUSE");
                            break;
                        }
                        case '3': {

                            hp = 120;
                            hpMax = 120;
                            lvl = 1;
                            op1 = 90;
                            op2 = 100;
                            zahita = 5;
                            damage = 35;
                            sila = 8;
                            coin = 1000;
                            vinos = 12;
                            intelect = 7;

                            clas clasper;
                            clasper.clluch();
                            system("PAUSE");
                            break;
                        }
                    }
                    break;
                }

            }
            save();
        }

    }
    else {
        system("cls");

        cout << "Выбери класс своего персонажа: \n";
        cout << "1. Маг \n";
        cout << "2. Воин \n";
        cout << "3. Лучник \n";
        cout << "Выбор: ";
        while (true) {
            vib = input_char();

            if (vib == '3' || vib == '2' || vib == '1') {


                switch (vib) {

                    case '1': {

                        hp = 100;
                        hpMax = 100;
                        lvl = 1;
                        op1 = 0;
                        op2 = 100;
                        zahita = 8;
                        damage = 25;
                        sila = 7;
                        coin = 10000;
                        vinos = 8;
                        intelect = 15;

                        clas clasper;
                        clasper.clmag();
                        system("PAUSE");
                        break;
                    }
                    case '2': {

                        hp = 150;
                        hpMax = 150;
                        lvl = 1;
                        op1 = 0;
                        op2 = 100;
                        zahita = 10;
                        damage = 30;
                        sila = 10;
                        coin = 1000;
                        vinos = 10;
                        intelect = 7;

                        clas clasper;
                        clasper.clvoin();
                        system("PAUSE");
                        break;
                    }
                    case '3': {

                        hp = 120;
                        hpMax = 120;
                        lvl = 1;
                        op1 = 90;
                        op2 = 100;
                        zahita = 5;
                        damage = 35;
                        sila = 8;
                        coin = 1000;
                        vinos = 12;
                        intelect = 7;

                        clas clasper;
                        clasper.clluch();
                        system("PAUSE");
                        break;
                    }
                }
                break;
            }

        }
        save();
    }




    while (true) {

        cout << "\n";
        system("cls");

        cout << "--------------------------- \n";


        cout << "ОСНОВНОЕ МЕНЮ" << "\n";

        cout << "--------------------------- \n";

        cout << "1: Пойти в таверну" << "\n";
        cout << "2: Пойти в лес" << "\n";
        cout << "3: Пойти в подземелье" << "\n";
        cout << "4: Характеристики персонажа" << "\n";
        cout << "--------------------------- \n";
        cout << "5: Сохранить игру" << "\n";

        char k;
        cout << "Выбор: ";
        k = input_char();

        switch (k) {

            case '1': {

                while (true) {
                    system("cls");


                    cout << "Золото -  " << coin << "\n";
                    cout << "----------------------- \n";
                    cout << "Число отряда -  " << otr << "\n";
                    cout << "Число эльфов в отряде -  " << Elf << "\n";
                    cout << "Число обученных пехотинцев в отряде -  " << Pex << "\n";
                    cout << "Число огненных магов в отряде -  " << Mag << "\n";

                    cout << "\n";
                    cout << "\n";
                    cout << "\n";
                    cout << "1. Отдохнуть \n";
                    cout << "2. Нанять эльфов (лучники) - 3 (400 золотых) \n";
                    cout << "3. Нанять обученных пехотинцев - 5 (500 золотых)\n";
                    cout << "4. Нанять огненных магов - 3 (400 золотых)\n";
                    cout << "5. Уйти \n";

                    char r;

                    cout << "Выбор: ";
                    r = input_char();


                    switch (r) {
                        case '1': {
                            hp = hpMax;
                            break;

                        }
                        case '2': {
                            unit units;
                            units.elfifan();
                            break;
                        }
                        case '3': {
                            unit units;
                            units.pexun();
                            break;
                        }
                        case '4': {
                            unit units;
                            units.magun();
                            break;
                        }
                        case '5': {

                        }

                    }

                    if (r == '5') {
                        break;
                    }

                }


                break;
            }
            case '2': {
                system("cls");

                if (hp > 0) {



                    cout << "Вы вошли в лес полный опасностей и приключений. Никогда не знаешь, кого здесь встретишь... \n";
                    cout << "------------------------------------------------------------------------------------------ \n";

                    chislo = rand() % 3 + 1;

                    if (chislo == 1) {
                        vragi vrag;
                        vrag.skelens();
                    }
                    else if (chislo == 2) {
                        vragi vrag;
                        vrag.orki();
                    }
                    else if (chislo == 3) {
                        vragi vrag;
                        vrag.bandit();
                    }
                    while (true) {
                        if (hpVr > 0) {

                            cout << "1. " << at1 << "\n";
                            cout << "2. " << at2 << "\n";
                            cout << "3. " << at3 << "\n";

                            cout << "Выбор: ";
                            char f;
                            f = input_char();
                            cout << "\n";

                            switch (vib) {

                                case '1': {

                                    if (f == '1') {

                                        chislo = rand() % 5 + 1;
                                        if (Elf > 0) {


                                            if (chislo == 1) {
                                                Elf -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного эльфа" << "\n";
                                            }

                                        }
                                        if (Pex > 0) {


                                            if (chislo == 2) {
                                                Pex -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного пехотинца" << "\n";
                                            }

                                        }
                                        if (Mag > 0) {
                                            if (chislo == 3) {
                                                Mag -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного мага" << "\n";
                                            }
                                        }


                                        damageEl = Elf * 3;
                                        damageMag = Mag * 4;
                                        damagePex = Pex * 2;

                                        damageOtr = ataka1 + damageEl + damageMag + damagePex;

                                        hpVr -= damageOtr;
                                        hp -= damageVr;

                                        cout << "Вы нанесли врагу - " << damageOtr << "\n";
                                        if (hpVr > 0) {

                                            cout << "У него осталось хп - " << hpVr << "\n";

                                        }

                                        cout << "У вас осталось хп - " << hp << "/" << hpMax << "\n";

                                        break;
                                    }
                                    else if (f == '2') {

                                        chislo = rand() % 5 + 1;
                                        if (Elf > 0) {

                                            if (chislo == 1) {
                                                Elf -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного эльфа" << "\n";
                                            }
                                        }
                                        if (Pex > 0) {

                                            if (chislo == 2) {
                                                Pex -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного пехотинца" << "\n";
                                            }

                                        }
                                        if (Mag > 0) {
                                            if (chislo == 3) {
                                                Mag -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного мага" << "\n";
                                            }
                                        }


                                        damageEl = Elf * 3;
                                        damageMag = Mag * 4;
                                        damagePex = Pex * 2;

                                        damageOtr = ataka2 + damageEl + damageMag + damagePex;

                                        hpVr -= damageOtr;
                                        hp -= damageVr;

                                        cout << "Вы нанесли врагу - " << damageOtr << "\n";
                                        if (hpVr > 0) {

                                            cout << "У него осталось хп - " << hpVr << "\n";

                                        }

                                        cout << "У вас осталось хп - " << hp << "/" << hpMax << "\n";

                                        break;
                                    }

                                    else if (f == '3') {

                                        chislo = rand() % 5 + 1;
                                        if (Elf > 0) {


                                            if (chislo == 1) {
                                                Elf -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного эльфа" << "\n";
                                            }

                                        }
                                        if (Pex > 0) {


                                            if (chislo == 2) {
                                                Pex -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного пехотинца" << "\n";
                                            }

                                        }
                                        if (Mag > 0) {
                                            if (chislo == 3) {
                                                Mag -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного мага" << "\n";
                                            }
                                        }


                                        damageEl = Elf * 3;
                                        damageMag = Mag * 4;
                                        damagePex = Pex * 2;

                                        damageOtr = ataka3 + damageEl + damageMag + damagePex;

                                        hpVr -= damageOtr;
                                        hp -= damageVr;

                                        cout << "Вы нанесли врагу - " << damageOtr << "\n";
                                        if (hpVr > 0) {

                                            cout << "У него осталось хп - " << hpVr << "\n";

                                        }

                                        cout << "У вас осталось хп - " << hp << "/" << hpMax << "\n";

                                        break;
                                    }


                                }
                                case '2': {
                                    if (f == '1') {

                                        chislo = rand() % 5 + 1;
                                        if (Elf > 0) {


                                            if (chislo == 1) {
                                                Elf -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного эльфа" << "\n";
                                            }

                                        }
                                        if (Pex > 0) {


                                            if (chislo == 2) {
                                                Pex -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного пехотинца" << "\n";
                                            }

                                        }
                                        if (Mag > 0) {
                                            if (chislo == 3) {
                                                Mag -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного мага" << "\n";
                                            }
                                        }


                                        damageEl = Elf * 3;
                                        damageMag = Mag * 4;
                                        damagePex = Pex * 2;

                                        damageOtr = ataka1 + damageEl + damageMag + damagePex;

                                        hpVr -= damageOtr;
                                        hp -= damageVr;

                                        cout << "Вы нанесли врагу - " << damageOtr << "\n";
                                        if (hpVr > 0) {

                                            cout << "У него осталось хп - " << hpVr << "\n";

                                        }

                                        cout << "У вас осталось хп - " << hp << "/" << hpMax << "\n";

                                        break;
                                    }
                                    else if (f == '2') {

                                        chislo = rand() % 5 + 1;
                                        if (Elf > 0) {


                                            if (chislo == 1) {
                                                Elf -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного эльфа" << "\n";
                                            }

                                        }
                                        if (Pex > 0) {


                                            if (chislo == 2) {
                                                Pex -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного пехотинца" << "\n";
                                            }

                                        }
                                        if (Mag > 0) {
                                            if (chislo == 3) {
                                                Mag -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного мага" << "\n";
                                            }
                                        }



                                        damageEl = Elf * 3;
                                        damageMag = Mag * 4;
                                        damagePex = Pex * 2;

                                        damageOtr = ataka2 + damageEl + damageMag + damagePex;

                                        hpVr -= damageOtr;
                                        hp -= damageVr;

                                        cout << "Вы нанесли врагу - " << damageOtr << "\n";
                                        if (hpVr > 0) {

                                            cout << "У него осталось хп - " << hpVr << "\n";

                                        }

                                        cout << "У вас осталось хп - " << hp << "/" << hpMax << "\n";

                                        break;
                                    }

                                    else if (f == '3') {

                                        chislo = rand() % 5 + 1;
                                        if (Elf > 0) {


                                            if (chislo == 1) {
                                                Elf -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного эльфа" << "\n";
                                            }

                                        }
                                        if (Pex > 0) {


                                            if (chislo == 2) {
                                                Pex -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного пехотинца" << "\n";
                                            }

                                        }
                                        if (Mag > 0) {
                                            if (chislo == 3) {
                                                Mag -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного мага" << "\n";
                                            }
                                        }


                                        damageEl = Elf * 3;
                                        damageMag = Mag * 4;
                                        damagePex = Pex * 2;

                                        damageOtr = ataka3 + damageEl + damageMag + damagePex;

                                        hpVr -= damageOtr;
                                        hp -= damageVr;

                                        cout << "Вы нанесли врагу - " << damageOtr << "\n";
                                        if (hpVr > 0) {

                                            cout << "У него осталось хп - " << hpVr << "\n";

                                        }

                                        cout << "У вас осталось хп - " << hp << "/" << hpMax << "\n";

                                        break;
                                    }
                                }
                                case '3': {
                                    if (f == '1') {

                                        chislo = rand() % 5 + 1;
                                        if (Elf > 0) {


                                            if (chislo == 1) {
                                                Elf -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного эльфа" << "\n";
                                            }

                                        }
                                        if (Pex > 0) {


                                            if (chislo == 2) {
                                                Pex -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного пехотинца" << "\n";
                                            }

                                        }
                                        if (Mag > 0) {
                                            if (chislo == 3) {
                                                Mag -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного мага" << "\n";
                                            }
                                        }


                                        damageEl = Elf * 3;
                                        damageMag = Mag * 4;
                                        damagePex = Pex * 2;

                                        damageOtr = ataka1 + damageEl + damageMag + damagePex;

                                        hpVr -= damageOtr;
                                        hp -= damageVr;

                                        cout << "Вы нанесли врагу - " << damageOtr << "\n";
                                        if (hpVr > 0) {

                                            cout << "У него осталось хп - " << hpVr << "\n";

                                        }

                                        cout << "У вас осталось хп - " << hp << "/" << hpMax << "\n";

                                        break;
                                    }
                                    else if (f == '2') {

                                        chislo = rand() % 5 + 1;
                                        if (Elf > 0) {


                                            if (chislo == 1) {
                                                Elf -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного эльфа" << "\n";
                                            }

                                        }
                                        if (Pex > 0) {


                                            if (chislo == 2) {
                                                Pex -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного пехотинца" << "\n";
                                            }

                                        }
                                        if (Mag > 0) {
                                            if (chislo == 3) {
                                                Mag -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного мага" << "\n";
                                            }
                                        }


                                        damageEl = Elf * 3;
                                        damageMag = Mag * 4;
                                        damagePex = Pex * 2;

                                        damageOtr = ataka2 + damageEl + damageMag + damagePex;

                                        hpVr -= damageOtr;
                                        hp -= damageVr;

                                        cout << "Вы нанесли врагу - " << damageOtr << "\n";
                                        if (hpVr > 0) {

                                            cout << "У него осталось хп - " << hpVr << "\n";

                                        }

                                        cout << "У вас осталось хп - " << hp << "/" << hpMax << "\n";

                                        break;
                                    }

                                    else if (f == '3') {

                                        chislo = rand() % 5 + 1;
                                        if (Elf > 0) {

                                            if (chislo == 1) {
                                                Elf -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного эльфа" << "\n";
                                            }

                                        }
                                        if (Pex > 0) {


                                            if (chislo == 2) {
                                                Pex -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного пехотинца" << "\n";
                                            }

                                        }
                                        if (Mag > 0) {
                                            if (chislo == 3) {
                                                Mag -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного мага" << "\n";
                                            }
                                        }

                                        damageEl = Elf * 3;
                                        damageMag = Mag * 4;
                                        damagePex = Pex * 2;

                                        damageOtr = ataka3 + damageEl + damageMag + damagePex;

                                        hpVr -= damageOtr;
                                        hp -= damageVr;

                                        cout << "Вы нанесли врагу - " << damageOtr << "\n";
                                        if (hpVr > 0) {

                                            cout << "У него осталось хп - " << hpVr << "\n";

                                        }

                                        cout << "У вас осталось хп - " << hp << "/" << hpMax << "\n";

                                        break;
                                    }
                                }

                            }
                        }
                        else if (hp <= 0) {

                            coin = 1000;
                            otr = 0;
                            Elf = 0;
                            Pex = 0;
                            Mag = 0;

                            cout << "\n";
                            cout << "Вы проиграли. Зайдите в таверну, чтобы востановить хп";
                            break;

                        }
                        else {
                            coin += 50;
                            otr = Elf + Pex + Mag;

                            if (hpVr <= 0) {

                                cout << "У него осталось хп - " << 0 << "\n";

                            }

                            if (op1 != op2) {
                                op1 += 10;
                                if (op1 >= op2) {
                                    lvl += 1;
                                    op1 = 0;
                                    op2 += 10;
                                    ataka1 += 2;
                                    ataka2 += 2;
                                    ataka3 += 2;
                                    hp += 10;

                                    cout << "НОВЫЙ ЛВЛ - " << lvl << "\n";
                                    if (lvl == 2) {
                                        navik nav;
                                        nav.PovHP();
                                        if (hp > hpMax) {
                                            hp = hpMax;
                                        }
                                        cout << "Вы получили новый навык - Повышенное ХП (+30 к хп) \n";
                                    }
                                    switch (vib)
                                    {
                                        case '1': {
                                            if (lvl == 3) {
                                                navik nav;
                                                nav.OgnHar();
                                                cout << "Вы получили новый навык - Улучшенный огненный шар \n";
                                            }
                                            break;
                                        }
                                        case '2': {
                                            if (lvl == 3) {
                                                navik nav;
                                                nav.TajYdar();
                                                cout << "Вы получили новый навык - Тяжелый удар молотом \n";
                                            }
                                            break;
                                        }
                                        case '3': {
                                            if (lvl == 3) {
                                                navik nav;
                                                nav.OgnStrel();
                                                cout << "Вы получили новый навык - Ряд огненных стрел \n";
                                            }
                                            break;
                                        }

                                    }
                                }
                            }


                            cout << "Вы победили!!!";
                            break;
                        }
                    }
                    system("PAUSE");
                }
                break;
            }
            case '3': {



                system("cls");

                if (hp > 0) {

                    cout << "Выберите уровень сложности: \n";
                    cout << "--------------------------- \n";
                    cout << "1. Легкий \n";
                    cout << "2. Средний \n";
                    cout << "3. Сложный \n";

                    char p;

                    cout << "Выбор: ";
                    p = input_char();

                    switch (p)
                    {
                        case '1': {
                            vragi vrag;
                            vrag.bos1();
                            break;
                        }
                        case '2': {
                            vragi vrag;
                            vrag.bos2();
                            break;
                        }
                        case '3': {
                            vragi vrag;
                            vrag.bos3();
                            break;
                        }
                    }


                    while (true) {
                        if (hpVr > 0) {
                            cout << "1. " << at1 << "\n";
                            cout << "2. " << at2 << "\n";
                            cout << "3. " << at3 << "\n";

                            cout << "Выбор: ";
                            char f;
                            f = input_char();
                            cout << "\n";

                            switch (vib) {

                                case '1': {
                                    if (f == '1') {

                                        chislo = rand() % 3 + 1;
                                        if (Elf > 0) {


                                            if (chislo == 1) {
                                                Elf -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного эльфа" << "\n";
                                            }

                                        }
                                        if (Pex > 0) {


                                            if (chislo == 2) {
                                                Pex -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного пехотинца" << "\n";
                                            }

                                        }
                                        if (Mag > 0) {
                                            if (chislo == 3) {
                                                Mag -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного мага" << "\n";
                                            }
                                        }


                                        damageEl = Elf * 3;
                                        damageMag = Mag * 4;
                                        damagePex = Pex * 2;

                                        damageOtr = ataka1 + damageEl + damageMag + damagePex;

                                        hpVr -= damageOtr;
                                        hp -= damageVr;

                                        cout << "Вы нанесли врагу - " << damageOtr << "\n";
                                        if (hpVr > 0) {

                                            cout << "У него осталось хп - " << hpVr << "\n";

                                        }

                                        cout << "У вас осталось хп - " << hp << "/" << hpMax << "\n";

                                        break;
                                    }
                                    else if (f == '2') {

                                        chislo = rand() % 3 + 1;
                                        if (Elf > 0) {


                                            if (chislo == 1) {
                                                Elf -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного эльфа" << "\n";
                                            }

                                        }
                                        if (Pex > 0) {


                                            if (chislo == 2) {
                                                Pex -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного пехотинца" << "\n";
                                            }

                                        }
                                        if (Mag > 0) {
                                            if (chislo == 3) {
                                                Mag -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного мага" << "\n";
                                            }
                                        }


                                        damageEl = Elf * 3;
                                        damageMag = Mag * 4;
                                        damagePex = Pex * 2;

                                        damageOtr = ataka2 + damageEl + damageMag + damagePex;

                                        hpVr -= damageOtr;
                                        hp -= damageVr;

                                        cout << "Вы нанесли врагу - " << damageOtr << "\n";
                                        if (hpVr > 0) {

                                            cout << "У него осталось хп - " << hpVr << "\n";

                                        }

                                        cout << "У вас осталось хп - " << hp << "/" << hpMax << "\n";

                                        break;
                                    }

                                    else if (f == '3') {

                                        chislo = rand() % 3 + 1;
                                        if (Elf > 0) {


                                            if (chislo == 1) {
                                                Elf -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного эльфа" << "\n";
                                            }

                                        }
                                        if (Pex > 0) {


                                            if (chislo == 2) {
                                                Pex -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного пехотинца" << "\n";
                                            }

                                        }
                                        if (Mag > 0) {
                                            if (chislo == 3) {
                                                Mag -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного мага" << "\n";
                                            }
                                        }


                                        damageEl = Elf * 3;
                                        damageMag = Mag * 4;
                                        damagePex = Pex * 2;

                                        damageOtr = ataka3 + damageEl + damageMag + damagePex;

                                        hpVr -= damageOtr;
                                        hp -= damageVr;

                                        cout << "Вы нанесли врагу - " << damageOtr << "\n";
                                        if (hpVr > 0) {

                                            cout << "У него осталось хп - " << hpVr << "\n";

                                        }

                                        cout << "У вас осталось хп - " << hp << "/" << hpMax << "\n";

                                        break;
                                    }

                                    break;
                                }
                                case '2': {
                                    if (f == '1') {

                                        chislo = rand() % 3 + 1;
                                        if (Elf > 0) {


                                            if (chislo == 1) {
                                                Elf -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного эльфа" << "\n";
                                            }

                                        }
                                        if (Pex > 0) {


                                            if (chislo == 2) {
                                                Pex -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного пехотинца" << "\n";
                                            }

                                        }
                                        if (Mag > 0) {
                                            if (chislo == 3) {
                                                Mag -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного мага" << "\n";
                                            }
                                        }


                                        damageEl = Elf * 3;
                                        damageMag = Mag * 4;
                                        damagePex = Pex * 2;

                                        damageOtr = ataka1 + damageEl + damageMag + damagePex;

                                        hpVr -= damageOtr;
                                        hp -= damageVr;

                                        cout << "Вы нанесли врагу - " << damageOtr << "\n";
                                        if (hpVr > 0) {

                                            cout << "У него осталось хп - " << hpVr << "\n";

                                        }

                                        cout << "У вас осталось хп - " << hp << "/" << hpMax << "\n";

                                        break;
                                    }
                                    else if (f == '2') {

                                        chislo = rand() % 3 + 1;
                                        if (Elf > 0) {


                                            if (chislo == 1) {
                                                Elf -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного эльфа" << "\n";
                                            }

                                        }
                                        if (Pex > 0) {


                                            if (chislo == 2) {
                                                Pex -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного пехотинца" << "\n";
                                            }

                                        }
                                        if (Mag > 0) {
                                            if (chislo == 3) {
                                                Mag -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного мага" << "\n";
                                            }
                                        }


                                        damageEl = Elf * 3;
                                        damageMag = Mag * 4;
                                        damagePex = Pex * 2;

                                        damageOtr = ataka2 + damageEl + damageMag + damagePex;

                                        hpVr -= damageOtr;
                                        hp -= damageVr;

                                        cout << "Вы нанесли врагу - " << damageOtr << "\n";
                                        if (hpVr > 0) {

                                            cout << "У него осталось хп - " << hpVr << "\n";

                                        }

                                        cout << "У вас осталось хп - " << hp << "/" << hpMax << "\n";

                                        break;
                                    }

                                    else if (f == '3') {

                                        chislo = rand() % 3 + 1;
                                        if (Elf > 0) {


                                            if (chislo == 1) {
                                                Elf -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного эльфа" << "\n";
                                            }

                                        }
                                        if (Pex > 0) {


                                            if (chislo == 2) {
                                                Pex -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного пехотинца" << "\n";
                                            }

                                        }
                                        if (Mag > 0) {
                                            if (chislo == 3) {
                                                Mag -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного мага" << "\n";
                                            }
                                        }


                                        damageEl = Elf * 3;
                                        damageMag = Mag * 4;
                                        damagePex = Pex * 2;

                                        damageOtr = ataka3 + damageEl + damageMag + damagePex;

                                        hpVr -= damageOtr;
                                        hp -= damageVr;

                                        cout << "Вы нанесли врагу - " << damageOtr << "\n";
                                        if (hpVr > 0) {

                                            cout << "У него осталось хп - " << hpVr << "\n";

                                        }

                                        cout << "У вас осталось хп - " << hp << "/" << hpMax << "\n";

                                        break;
                                    }
                                    break;
                                }
                                case '3': {
                                    if (f == '1') {

                                        chislo = rand() % 3 + 1;
                                        if (Elf > 0) {


                                            if (chislo == 1) {
                                                Elf -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного эльфа" << "\n";
                                            }

                                        }
                                        if (Pex > 0) {


                                            if (chislo == 2) {
                                                Pex -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного пехотинца" << "\n";
                                            }

                                        }
                                        if (Mag > 0) {
                                            if (chislo == 3) {
                                                Mag -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного мага" << "\n";
                                            }
                                        }


                                        damageEl = Elf * 3;
                                        damageMag = Mag * 4;
                                        damagePex = Pex * 2;

                                        damageOtr = ataka1 + damageEl + damageMag + damagePex;

                                        hpVr -= damageOtr;
                                        hp -= damageVr;

                                        cout << "Вы нанесли врагу - " << damageOtr << "\n";
                                        if (hpVr > 0) {

                                            cout << "У него осталось хп - " << hpVr << "\n";

                                        }

                                        cout << "У вас осталось хп - " << hp << "/" << hpMax << "\n";

                                        break;
                                    }
                                    else if (f == '2') {

                                        chislo = rand() % 3 + 1;
                                        if (Elf > 0) {


                                            if (chislo == 1) {
                                                Elf -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного эльфа" << "\n";
                                            }

                                        }
                                        if (Pex > 0) {


                                            if (chislo == 2) {
                                                Pex -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного пехотинца" << "\n";
                                            }

                                        }
                                        if (Mag > 0) {
                                            if (chislo == 3) {
                                                Mag -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного мага" << "\n";
                                            }
                                        }


                                        damageEl = Elf * 3;
                                        damageMag = Mag * 4;
                                        damagePex = Pex * 2;

                                        damageOtr = ataka2 + damageEl + damageMag + damagePex;

                                        hpVr -= damageOtr;
                                        hp -= damageVr;

                                        cout << "Вы нанесли врагу - " << damageOtr << "\n";
                                        if (hpVr > 0) {

                                            cout << "У него осталось хп - " << hpVr << "\n";

                                        }

                                        cout << "У вас осталось хп - " << hp << "/" << hpMax << "\n";

                                        break;
                                    }

                                    else if (f == '3') {

                                        chislo = rand() % 3 + 1;
                                        if (Elf > 0) {


                                            if (chislo == 1) {
                                                Elf -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного эльфа" << "\n";
                                            }

                                        }
                                        if (Pex > 0) {


                                            if (chislo == 2) {
                                                Pex -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного пехотинца" << "\n";
                                            }

                                        }
                                        if (Mag > 0) {
                                            if (chislo == 3) {
                                                Mag -= 1;
                                                otr -= 1;
                                                cout << "Вы потеряли одного мага" << "\n";
                                            }
                                        }


                                        damageEl = Elf * 3;
                                        damageMag = Mag * 4;
                                        damagePex = Pex * 2;

                                        damageOtr = ataka3 + damageEl + damageMag + damagePex;

                                        hpVr -= damageOtr;
                                        hp -= damageVr;

                                        cout << "Вы нанесли врагу - " << damageOtr << "\n";
                                        if (hpVr > 0) {

                                            cout << "У него осталось хп - " << hpVr << "\n";

                                        }

                                        cout << "У вас осталось хп - " << hp << "/" << hpMax << "\n";
                                    }
                                    break;
                                }
                            }
                        }


                        else{
                            if (p == '1') {
                                coin += 300;
                                otr = Elf + Pex + Mag;

                                if (hpVr <= 0) {

                                    cout << "У него осталось хп - " << 0 << "\n";
                                    cout << "\n";
                                    cout << "А вы не плохи. Наберите армию и отправляйтесь дальше покорять подземелье \n";

                                    if (op1 != op2) {
                                        op1 += 100;
                                        if (op1 >= op2) {
                                            lvl += 1;
                                            op1 = 0;
                                            op2 += 10;
                                            ataka1 += 2;
                                            ataka2 += 2;
                                            ataka3 += 2;
                                            hp += 10;

                                            cout << "НОВЫЙ ЛВЛ - " << lvl << "\n";
                                            if (lvl == 2) {
                                                navik nav;
                                                nav.PovHP();
                                                if (hp > hpMax) {
                                                    hp = hpMax;
                                                }
                                                cout << "Вы получили новый навык - Повышенное ХП (+30 к хп) \n";
                                            }
                                            switch (vib)
                                            {
                                                case '1': {
                                                    if (lvl == 3) {
                                                        navik nav;
                                                        nav.OgnHar();
                                                        cout << "Вы получили новый навык - Улучшенный огненный шар \n";
                                                    }
                                                    break;
                                                }
                                                case '2': {
                                                    if (lvl == 3) {
                                                        navik nav;
                                                        nav.TajYdar();
                                                        cout << "Вы получили новый навык - Тяжелый удар молотом \n";
                                                    }
                                                    break;
                                                }
                                                case '3': {
                                                    if (lvl == 3) {
                                                        navik nav;
                                                        nav.OgnStrel();
                                                        cout << "Вы получили новый навык - Ряд огненных стрел \n";
                                                    }
                                                    break;
                                                }

                                            }
                                        }
                                    }
                                    cout << "Вы победили!!!";
                                    break;

                                }
                            }
                            if (p == '2') {
                                coin += 700;
                                otr = Elf + Pex + Mag;
                                if (hpVr <= 0) {

                                    cout << "У него осталось хп - " << 0 << "\n";

                                    int n;
                                    n = rand() % 8 + 1;

                                    if (n == 1) {

                                        artef art;
                                        art.Nagrudnik();

                                        cout << "Вы получили Нагрудник Здоровья!!! (+20 к хп)";
                                    }
                                    if (n == 3) {
                                        artef art;
                                        art.Nar();

                                        cout << "Вы получили Наручи Силы!!! (+5 урона к первой атаке)";
                                    }
                                    if (n == 5) {
                                        artef art;
                                        art.Hlem();

                                        cout << "Вы получили Шлем Здоровья!!! (+10 к хп)";
                                    }
                                    if (n == 7) {
                                        artef art;
                                        art.Ponog();

                                        cout << "Вы получили Поножи Силы!!! (+10 урона к первой атаке)";
                                    }

                                    if (op1 != op2) {
                                        op1 += 100;
                                        if (op1 >= op2) {
                                            lvl += 1;
                                            op1 = 0;
                                            op2 += 10;
                                            ataka1 += 2;
                                            ataka2 += 2;
                                            ataka3 += 2;
                                            hp += 10;

                                            cout << "НОВЫЙ ЛВЛ - " << lvl << "\n";
                                            if (lvl == 2) {
                                                navik nav;
                                                nav.PovHP();
                                                if (hp > hpMax) {
                                                    hp = hpMax;
                                                }
                                                cout << "Вы получили новый навык - Повышенное ХП (+30 к хп) \n";
                                            }
                                            switch (vib)
                                            {
                                                case '1': {
                                                    if (lvl == 3) {
                                                        navik nav;
                                                        nav.OgnHar();
                                                        cout << "Вы получили новый навык - Улучшенный огненный шар \n";
                                                    }
                                                    break;
                                                }
                                                case '2': {
                                                    if (lvl == 3) {
                                                        navik nav;
                                                        nav.TajYdar();
                                                        cout << "Вы получили новый навык - Тяжелый удар молотом \n";
                                                    }
                                                    break;
                                                }
                                                case '3': {
                                                    if (lvl == 3) {
                                                        navik nav;
                                                        nav.OgnStrel();
                                                        cout << "Вы получили новый навык - Ряд огненных стрел \n";
                                                    }
                                                    break;
                                                }

                                            }
                                        }
                                    }
                                    cout << "Вы победили!!!";
                                    break;

                                    cout << "\n";
                                    cout << "А вы не плохи. Наберите армию и отправляйтесь дальше покорять подземелье \n";

                                }
                            }
                            if (p == '3') {
                                coin += 1500;
                                otr = Elf + Pex + Mag;

                                if (hpVr <= 0) {

                                    cout << "У него осталось хп - " << 0 << "\n";

                                    int n;
                                    n = rand() % 4 + 1;

                                    if (n == 1) {

                                        artef art;
                                        art.Nagrudnik();

                                        cout << "Вы получили Нагрудник Здоровья!!! (+20 к хп)";
                                    }
                                    if (n == 2) {
                                        artef art;
                                        art.Nar();

                                        cout << "Вы получили Наручи Силы!!! (+5 урона к первой атаке)";
                                    }
                                    if (n == 3) {
                                        artef art;
                                        art.Hlem();

                                        cout << "Вы получили Шлем Здоровья!!! (+10 к хп)";
                                    }
                                    if (n == 4) {
                                        artef art;
                                        art.Ponog();

                                        cout << "Вы получили Поножи силы!!! (+10 урона к первой атаке)";
                                    }

                                    if (op1 != op2) {
                                        op1 += 100;
                                        if (op1 >= op2) {
                                            lvl += 1;
                                            op1 = 0;
                                            op2 += 10;
                                            ataka1 += 2;
                                            ataka2 += 2;
                                            ataka3 += 2;
                                            hp += 10;

                                            cout << "НОВЫЙ ЛВЛ - " << lvl << "\n";
                                            if (lvl == 2) {
                                                navik nav;
                                                nav.PovHP();
                                                if (hp > hpMax) {
                                                    hp = hpMax;
                                                }
                                                cout << "Вы получили новый навык - Повышенное ХП (+30 к хп) \n";
                                            }
                                            switch (vib)
                                            {
                                                case '1': {
                                                    if (lvl == 3) {
                                                        navik nav;
                                                        nav.OgnHar();
                                                        cout << "Вы получили новый навык - Улучшенный огненный шар \n";
                                                    }
                                                    break;
                                                }
                                                case '2': {
                                                    if (lvl == 3) {
                                                        navik nav;
                                                        nav.TajYdar();
                                                        cout << "Вы получили новый навык - Тяжелый удар молотом \n";
                                                    }
                                                    break;
                                                }
                                                case '3': {
                                                    if (lvl == 3) {
                                                        navik nav;
                                                        nav.OgnStrel();
                                                        cout << "Вы получили новый навык - Ряд огненных стрел \n";
                                                    }
                                                    break;
                                                }

                                            }
                                        }
                                    }
                                    cout << "Вы победили!!!";
                                    break;

                                    cout << "\n";
                                    cout << "Вы истинный герой и защитник срелиземья. Народ вами гордится, барды слагают о вас песни. Вы - легенда! \n";

                                }
                            }

                        }
                        if (p > '3') {
                            break;
                        }

                    }
                    system("PAUSE");
                }
                break;
            }
            case '4': {
                system("cls");
                if (vib == '1') {
                    system("cls");
                    clas claspers;
                    claspers.clmag();
                    system("PAUSE");
                }
                if (vib == '2') {
                    system("cls");
                    clas claspers;
                    claspers.clvoin();
                    system("PAUSE");
                }
                if (vib == '3') {
                    system("cls");
                    clas claspers;
                    claspers.clluch();
                    system("PAUSE");
                }
                break;
            }
            case '5': {
                system("cls");
                save();
                cout << "Ваша игра успешно сохранена:)";
                break;

            }

        }
    }

}


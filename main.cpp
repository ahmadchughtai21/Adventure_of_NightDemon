#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

HANDLE hc = GetStdHandle(STD_OUTPUT_HANDLE);

void stage1();
void fight_robots();
void fight_giant_robot();
void backup();
void disable_power_source();
void stealth();
void reason();
void stage2();
void fight_magicians();
void heal();
void jake_help();
void stage3();
void fight_alpha_werewolf();
void cure_alpha_werewolf();
void control_evil();
void stage4();
void fight_demon();
void intelligence();
void ultimate_power();

class Entity
{
public:
    string name;
    int health;
};

class Player : public Entity
{
public:
    int control;
    int power;
    int enemies_defeated;

    Player()
    {
        name = "Player000";
        health = 100;
        control = 50;
        power = 50;
        enemies_defeated = 0;
    }

    void decrease_health(int damage)
    {
        health -= damage;
    }
    void increase_health(int heal)
    {
        health += heal;
    }
    void decrease_control(int dc)
    {
        control -= dc;
    }
    void increase_control(int ic)
    {
        control += ic;
    }
    void decrease_power(int dp)
    {
        power -= dp;
    }
    void increase_power(int ip)
    {
        power += ip;
    }

    void display_stats()
    {
        SetConsoleTextAttribute(hc, 10);
        cout << "-----------------------------------------\n";
        cout << "Player Stats:\n";
        cout << "Name: " << name << endl;
        cout << "Health: " << health << endl;
        cout << "Control: " << control << endl;
        cout << "Power: " << power << endl;
        cout << "Enemies Defeated: " << enemies_defeated << endl;
        cout << "-----------------------------------------\n";
        SetConsoleTextAttribute(hc, 15);
    }
};

Player p1;

void check_win(int st)
{
    if (p1.health <= 0)
    {
        SetConsoleTextAttribute(hc, 12);
        cout << "You have been defeated! Game Over!\n";
        cout << "You lost on Stage " << st << endl;
        cout << "Do you want to play again? (y/n): ";
        SetConsoleTextAttribute(hc, 15);
        char choice;
        cin >> choice;
        if (choice == 'y' || choice == 'Y')
        {
            stage1();
        }
        else
        {
            cout << "Goodbye!\n";
            exit(0);
        }
    }
    if (p1.control <= 0)
    {
        SetConsoleTextAttribute(hc, 12);
        cout << "You have lost control over your powers! Game Over!\n";
        cout << "You lost on Stage " << st << endl;
        cout << "Do you want to play again? (y/n): ";
        SetConsoleTextAttribute(hc, 15);
        char choice;
        cin >> choice;
        if (choice == 'y' || choice == 'Y')
        {
            stage1();
        }
        else
        {
            cout << "Goodbye!\n";
            exit(0);
        }
    }
}

void stage1()
{
    p1.display_stats();
    check_win(1);
    SetConsoleTextAttribute(hc, 14);
    cout << "One evening, after a lively band practice, I felt the familiar pull of my powers.\nAs the sun set, I donned my NightDemon suit and set out into the city.\nMy friend Jake, the only one who knows my secret, wished me luck.\nAs I patrolled the streets, I noticed smoke rising from an abandoned warehouse. \nI rushed to the scene, finding the building engulfed in flames. \nHearing cries for help, I burst into the warehouse, the heat searing my skin. \nMy anger at the situation surged, and I felt a new power unlocking within me. \nMy hands morphed into razor-sharp blades, allowing me to cut through the wreckage and free the workers.";
    cout << "\nAs I led the workers to safety, I noticed a shadowy figure lurking in the corner. \nThe figure turned to face me, revealing a sinister grin. \nIt was the villainous Dr. Vortex, a mad scientist with a grudge against me. \nHe unleashed his robotic minions, intent on destroying me. I knew this would be a tough fight" << endl;
    cout << endl;
    SetConsoleTextAttribute(hc, 12);
    cout << " [1] Fight the robots head-on\n";
    cout << " [2] Use stealth to outmaneuver them\n";
    cout << " [3] Try to reason with Dr. Vortex\n";
    SetConsoleTextAttribute(hc, 15);
    cout << "Enter your choice: ";

    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        fight_robots();
        break;
    case 2:
        stealth();
        break;
    case 3:
        reason();
        break;
    default:
        SetConsoleTextAttribute(hc, 12);
        cout << "Invalid choice! Please try again.\n";
        SetConsoleTextAttribute(hc, 15);
        stage1();
    }
}

void fight_robots()
{
    p1.decrease_health(10);
    p1.decrease_control(10);
    p1.increase_power(10);
    p1.display_stats();
    check_win(1);
    SetConsoleTextAttribute(hc, 14);
    cout << "The robots were no match for my newfound power. \nI sliced through them with ease, but Dr. Vortex was not done yet. \nHe unleashed his ultimate creation, a giant robot with the power to level the city. \nI knew this would be my toughest battle yet.\n";
    cout << endl;
    SetConsoleTextAttribute(hc, 12);
    cout << " [1] Use my powers to take down the giant robot\n";
    cout << " [2] Call for backup\n";
    cout << " [3] Try to disable the robot's power source\n";
    SetConsoleTextAttribute(hc, 15);
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        fight_giant_robot();
        break;
    case 2:
        backup();
        break;
    case 3:
        disable_power_source();
        break;
    default:
        SetConsoleTextAttribute(hc, 12);
        cout << "Invalid choice! Please try again.\n";
        SetConsoleTextAttribute(hc, 15);
        fight_robots();
    }
}

void fight_giant_robot()
{
    p1.decrease_health(20);
    p1.decrease_control(10);
    p1.increase_power(20);
    p1.display_stats();
    check_win(1);
    SetConsoleTextAttribute(hc, 14);
    cout << "The battle was fierce, but I managed to destroy the giant robot with my powers. \nDr. Vortex fled the scene, vowing revenge. As the city cheered for their hero, I felt a sense of pride and responsibility. \nThe night was over, but the adventure of NightDemon was just beginning.\n";
    cout << "Congratulations! You have completed Stage 1!\n";
    SetConsoleTextAttribute(hc, 12);
    cout << "Do you want to continue to the next stage? (y/n): ";
    SetConsoleTextAttribute(hc, 15);
    char choice;
    cin >> choice;
    if (choice == 'y' || choice == 'Y')
    {
        stage2();
    }
    else
    {
        cout << "Goodbye!\n";
        exit(0);
    }
}

void backup()
{
    p1.decrease_health(10);
    p1.increase_control(10);
    p1.increase_power(10);
    p1.display_stats();
    check_win(1);
    SetConsoleTextAttribute(hc, 14);
    cout << "I called for backup, and my fellow heroes arrived just in time to help me take down the giant robot. \nTogether, we saved the city and defeated Dr. Vortex. \nThe night was over, but the adventure of NightDemon was just beginning.\n";
    cout << "Congratulations! You have completed Stage 1!\n";
    p1.enemies_defeated++;
    SetConsoleTextAttribute(hc, 12);
    cout << "Do you want to continue to the next stage? (y/n): ";
    SetConsoleTextAttribute(hc, 15);
    char choice;
    cin >> choice;
    if (choice == 'y' || choice == 'Y')
    {
        stage2();
    }
    else
    {
        cout << "Goodbye!\n";
        exit(0);
    }
}

void disable_power_source()
{
    p1.decrease_health(10);
    p1.increase_control(10);
    p1.increase_power(10);
    p1.display_stats();
    check_win(1);
    SetConsoleTextAttribute(hc, 14);
    cout << "I managed to disable the robot's power source, causing it to shut down. \nDr. Vortex was captured, and the city was safe once again. \nThe night was over, but the adventure of NightDemon was just beginning.\n";
    p1.enemies_defeated++;
    cout << "Congratulations! You have completed Stage 1!\n";
    SetConsoleTextAttribute(hc, 12);
    cout << "Do you want to continue to the next stage? (y/n): ";
    SetConsoleTextAttribute(hc, 15);
    char choice;
    cin >> choice;
    if (choice == 'y' || choice == 'Y')
    {
        stage2();
    }
    else
    {
        cout << "Goodbye!\n";
        exit(0);
    }
}

void stealth()
{
    p1.increase_control(10);
    p1.increase_power(10);
    p1.display_stats();
    check_win(1);
    SetConsoleTextAttribute(hc, 14);
    cout << "I used my stealth to outmaneuver the robots, disabling them one by one. \nDr. Vortex was caught off guard, and I managed to defeat him without a fight. \nThe city was safe once again, and the night was over. \nThe adventure of NightDemon was just beginning.\n";
    p1.enemies_defeated++;
    cout << "Congratulations! You have completed Stage 1!\n";
    SetConsoleTextAttribute(hc, 12);
    cout << "Do you want to continue to the next stage? (y/n): ";
    SetConsoleTextAttribute(hc, 15);
    char choice;
    cin >> choice;
    if (choice == 'y' || choice == 'Y')
    {
        stage2();
    }
    else
    {
        cout << "Goodbye!\n";
        exit(0);
    }
}

void reason()
{
    p1.decrease_health(20);
    p1.increase_control(10);
    p1.increase_power(10);
    p1.display_stats();
    check_win(1);

    cout << "I tried to reason with Dr. Vortex, but he refused to listen. \nHe unleashed his robots, forcing me to fight." << endl;
    fight_robots();
}

void stage2()
{
    p1.display_stats();
    check_win(2);
    SetConsoleTextAttribute(hc, 14);
    cout << "As I patrolled the city, I sensed a dark presence lurking in the shadows. \nI followed the feeling to an abandoned warehouse, where I found a group of cultists performing a dark ritual. \nTheir leader, the sinister High Priestess, turned to face me, her eyes glowing with power. \nShe unleashed her magicians, they started to attack me with their dark magic." << endl;
    cout << endl;
    SetConsoleTextAttribute(hc, 12);
    cout << " [1] Use my powers to take down the magicians\n";
    cout << " [2] Use my new healing ability to restore my health\n";
    cout << " [3] Ask my friend Jake for help\n";
    SetConsoleTextAttribute(hc, 15);
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        fight_magicians();
        break;
    case 2:
        heal();
        break;
    case 3:
        jake_help();
        break;
    default:
        cout << "Invalid choice! Please try again.\n";
        stage2();
    }
}

void fight_magicians()
{
    p1.decrease_health(20);
    p1.decrease_control(10);
    p1.increase_power(20);
    p1.display_stats();
    check_win(2);
    SetConsoleTextAttribute(hc, 14);
    cout << "The magicians were powerful, but I managed to defeat them with my powers. \nThe High Priestess was furious, and she unleashed her dark magic on me. \nI felt my control slipping, but I managed to push through and defeat her. \nThe city was safe once again, and the night was over. \nThe adventure of NightDemon was just beginning.\n";
    p1.enemies_defeated++;
    cout << "Congratulations! You have completed Stage 2!\n";
    cout << "Do you want to continue to the next stage? (y/n): ";
    char choice;
    cin >> choice;
    if (choice == 'y' || choice == 'Y')
    {
        stage3();
    }
    else
    {
        cout << "Goodbye!\n";
        exit(0);
    }
}

void heal()
{
    p1.increase_health(20);
    p1.increase_control(10);
    p1.increase_power(10);
    p1.display_stats();
    check_win(2);
    SetConsoleTextAttribute(hc, 14);
    cout << "I used my healing ability to restore my health, giving me the strength to defeat the magicians. \nThe High Priestess was no match for me, and I defeated her with ease. \nThe city was safe once again, and the night was over. \nThe adventure of NightDemon was just beginning.\n";
    p1.enemies_defeated++;
    cout << "Congratulations! You have completed Stage 2!\n";
    SetConsoleTextAttribute(hc, 12);
    cout << "Do you want to continue to the next stage? (y/n): ";
    SetConsoleTextAttribute(hc, 15);
    char choice;
    cin >> choice;
    if (choice == 'y' || choice == 'Y')
    {
        stage3();
    }
    else
    {
        cout << "Goodbye!\n";
        exit(0);
    }
}

void jake_help()
{
    p1.decrease_health(10);
    p1.increase_power(10);
    p1.display_stats();
    check_win(2);
    SetConsoleTextAttribute(hc, 14);
    cout << "I called my friend Jake for help, and he told me that the High Priestess's power came from the amulet she was wearing. \nI used my powers to destroy the amulet, weakening her. With her power diminished, I was able to defeat her and save the city. \nThe night was over, but the adventure of NightDemon was just beginning.\n";
    p1.enemies_defeated++;
    cout << "Congratulations! You have completed Stage 2!\n";
    SetConsoleTextAttribute(hc, 12);
    cout << "Do you want to continue to the next stage? (y/n): ";
    SetConsoleTextAttribute(hc, 15);
    char choice;
    cin >> choice;
    if (choice == 'y' || choice == 'Y')
    {
        stage3();
    }
    else
    {
        cout << "Goodbye!\n";
        exit(0);
    }
}

void stage3()
{
    p1.display_stats();
    check_win(3);
    SetConsoleTextAttribute(hc, 14);
    cout << "As I patrolled the city, I sensed a dark presence in the woods. I followed the feeling to find my old friend, \nAlpha Werewolf, transformed into a monstrous beast. He had succumbed to dark magic, \nlosing control over his powers. I knew I had to stop him before he hurt anyone." << endl;
    cout << endl;
    SetConsoleTextAttribute(hc, 12);
    cout << " [1] Use my powers to take down Alpha Werewolf\n";
    cout << " [2] Try to cure him\n";
    cout << " [3] Use my new power to control my inner evil\n";
    SetConsoleTextAttribute(hc, 15);
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        fight_alpha_werewolf();
        break;
    case 2:
        cure_alpha_werewolf();
        break;
    case 3:
        control_evil();
        break;
    default:
        SetConsoleTextAttribute(hc, 12);
        cout << "Invalid choice! Please try again.\n";
        SetConsoleTextAttribute(hc, 15);
        stage3();
    }
}

void fight_alpha_werewolf()
{
    p1.decrease_health(30);
    p1.decrease_control(20);
    p1.increase_power(30);
    p1.display_stats();
    check_win(3);
    SetConsoleTextAttribute(hc, 14);
    cout << "Alpha Werewolf was a formidable opponent, but I managed to defeat him with my powers. \nAs he lay defeated, I felt a surge of power within me. \nI knew that I had to control my inner evil, or I would end up like him. \nThe night was over, but the adventure of NightDemon was just beginning.\n";
    p1.enemies_defeated++;
    cout << "Congratulations! You have completed Stage 3!\n";
    SetConsoleTextAttribute(hc, 12);
    cout << "Do you want to continue to the next stage? (y/n): ";
    SetConsoleTextAttribute(hc, 15);
    char choice;
    cin >> choice;
    if (choice == 'y' || choice == 'Y')
    {
        stage4();
    }
    else
    {
        cout << "Goodbye!\n";
        exit(0);
    }
}

void cure_alpha_werewolf()
{
    p1.decrease_health(20);
    p1.decrease_control(10);
    p1.increase_power(20);
    p1.display_stats();
    check_win(3);
    SetConsoleTextAttribute(hc, 14);
    cout << "I tried to cure Alpha Werewolf, but the dark magic had taken hold of him. \nHe fled to his hideout, vowing revenge. I knew I had to stop him before he hurt anyone. \nThe night was over, but the adventure of NightDemon was just beginning.\n";
    p1.enemies_defeated++;
    cout << "Congratulations! You have completed Stage 3!\n";
    SetConsoleTextAttribute(hc, 12);
    cout << "Do you want to continue to the next stage? (y/n): ";
    SetConsoleTextAttribute(hc, 15);
    char choice;
    cin >> choice;
    if (choice == 'y' || choice == 'Y')
    {
        stage4();
    }
    else
    {
        cout << "Goodbye!\n";
        exit(0);
    }
}

void control_evil()
{
    p1.decrease_health(20);
    p1.increase_control(20);
    p1.increase_power(20);
    p1.display_stats();
    check_win(3);
    SetConsoleTextAttribute(hc, 14);
    cout << "I used my new power to control my inner evil, giving me the strength to defeat Alpha Werewolf. \nAs he lay defeated, I felt a sense of pride and responsibility. \nI knew that I had to control my powers, or I would end up like him. \nThe night was over, but the adventure of NightDemon was just beginning.\n";
    p1.enemies_defeated++;
    cout << "Congratulations! You have completed Stage 3!\n";
    SetConsoleTextAttribute(hc, 12);
    cout << "Do you want to continue to the next stage? (y/n): ";
    SetConsoleTextAttribute(hc, 15);
    char choice;
    cin >> choice;
    if (choice == 'y' || choice == 'Y')
    {
        stage4();
    }
    else
    {
        cout << "Goodbye!\n";
        exit(0);
    }
}

void stage4()
{
    p1.display_stats();
    check_win(4);
    SetConsoleTextAttribute(hc, 14);
    cout << "I received an emergency signal from my watch, Jake was in trouble. \nFollowing the location, I discovered that my friend Jake had been kidnapped by the demon who had granted me my powers. \nThe demon revealed himself, a towering figure wreathed in darkness. \nHe taunted me, challenging me to a final battle for the fate of the city." << endl;
    cout << endl;
    SetConsoleTextAttribute(hc, 12);
    cout << " [1] Use my powers to take down the demon\n";
    cout << " [2] Use my intelligence to defeat the demon\n";
    cout << " [3] Use my ultimate power\n";
    SetConsoleTextAttribute(hc, 15);
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        fight_demon();
        break;
    case 2:
        intelligence();
        break;
    case 3:
        ultimate_power();
        break;
    default:
        SetConsoleTextAttribute(hc, 12);
        cout << "Invalid choice! Please try again.\n";
        SetConsoleTextAttribute(hc, 15);
        stage4();
    }
}

void fight_demon()
{
    p1.decrease_health(40);
    p1.decrease_control(30);
    p1.increase_power(40);
    p1.display_stats();
    check_win(4);
    SetConsoleTextAttribute(hc, 14);
    cout << "The demon was too powerful; my attacks had no effect on him. \nAs the battle raged on, I felt my control slipping away. \nHe was the one who gave me my powers, and now I couldn't defeat him. \nThe city fell into darkness, and I was powerless to help anyone. \nThe night ended in despair, marking a grim chapter in the tale of NightDemon.\n";
    SetConsoleTextAttribute(hc, 12);
    cout << "Do you want to play again? (y/n): ";
    SetConsoleTextAttribute(hc, 15);
    char choice;
    cin >> choice;
    if (choice == 'y' || choice == 'Y')
    {
        stage1();
    }
    else
    {
        cout << "Goodbye!\n";
        exit(0);
    }
}

void intelligence()
{
    p1.decrease_health(20);
    p1.increase_control(20);
    p1.increase_power(20);
    p1.display_stats();
    check_win(4);
    SetConsoleTextAttribute(hc, 14);
    cout << "I used my intelligence to defeat the demon, gathering his enemies to assist me in the battle.\nWith their help, we successfully weakened the demon and sealed him away. \nThe city was saved, and my friend Jake was rescued. Although the night had come to an end, \nonce again the city was saved!\n";
    p1.enemies_defeated++;
    cout << "Congratulations! You have completed the Adventure of NightDemon!\n";
    SetConsoleTextAttribute(hc, 12);
    cout << "Do you want to play again? (y/n): ";
    SetConsoleTextAttribute(hc, 15);
    char choice;
    cin >> choice;
    if (choice == 'y' || choice == 'Y')
    {
        stage1();
    }
    else
    {
        cout << "Goodbye!\n";
        exit(0);
    }
}

void ultimate_power()
{
    p1.increase_health(50);
    p1.decrease_control(30);
    p1.increase_power(70);
    p1.display_stats();
    check_win(4);
    SetConsoleTextAttribute(hc, 14);
    cout << "I unleashed my ultimate power, losing control over my powers. \nThe darkness consumed me, and I was unable to stop myself but I defeated the Demon. \ny friend Jake, seeing my struggle, used his new powers to chain me in another dimension, preventing me from harming anyone. \nThe city was saved, but at a great cost. He's the new NightDemon. \nThe night ended in darkness, marking the end of the tale of NightDemon.\n";
    SetConsoleTextAttribute(hc, 12);
    cout << "Do you want to play again? (y/n): ";
    SetConsoleTextAttribute(hc, 15);
    char choice;
    cin >> choice;
    if (choice == 'y' || choice == 'Y')
    {
        stage1();
    }
    else
    {
        cout << "Goodbye!\n";
        exit(0);
    }
}

int main()
{
    SetConsoleTextAttribute(hc, 10);
    cout << "---------------------------------------------------------------------------\n";
    cout << "---------------------------------------------------------------------------\n";
    cout << "------------------------ ADVENTURE OF THE NIGHT DEMON ---------------------\n";
    cout << "---------------------------------------------------------------------------\n";
    cout << "---------------------------------------------------------------------------\n";
    SetConsoleTextAttribute(hc, 15);
    cout << endl;
    cout << "Welcome to the Adventure of Night Demon!\n\n";
    cout << "Enter your name to Start the game: ";
    string name;
    getline(cin, name);
    p1.name = name;
    SetConsoleTextAttribute(hc, 14);
    cout << "By day, I'm " << p1.name << ", a teenage student trying to live a normal life. \nBut when the sun sets, I become NightDemon, a hero born of darkness. \nMy powers, granted by a demon, grow stronger with my rage, making it harder to control my darker impulses. \nEvery night is a battle not just against crime, but against the monster within me." << endl;
    cout << endl;
    SetConsoleTextAttribute(hc, 12);
    cout << "Are you ready to start the adventure? (y/n): ";
    SetConsoleTextAttribute(hc, 15);
    char choice;
    cin >> choice;
    if (choice == 'y' || choice == 'Y')
    {
        cout << "Great! Let's start the adventure!\n";
        stage1();
    }
    else
    {
        cout << "Goodbye!\n";
    }
    return 0;
}
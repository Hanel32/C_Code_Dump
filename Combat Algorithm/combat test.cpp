#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
  int gold    = 100;                              //Gold pouch
  int ski     = 10;                               //base skill for obstacles
  int job, quest, type, rid, path;                //Decisions
  int hit, dmgGiven, dmgTaken, spider, spiderDmg; //Combat
  int health = 0, attack = 0, skill = 0;          //Potion names
  int hp, maxhp, attk, acc;                       //Skill names
  int weap, arm, pot;                             //Item types
  char cont, desi, go = 'y';                      //Loop modifiers

                printf("\t       |  |   \\\\|.'    |  |    \\\\|.'   |  |     \\\\|.'  |  |");
                printf("\n\t       | ||   \\` /   _.| ||,!  \\` /   _| ||\\,!  \\` /   | ||");
                printf("\n\t       ||||`. f |_.-'.'||||\\`. f |_.-'.|||| \\`. f |_.-'||||");
                printf("\n\t       | ||\\ \\|! ,-'   | || \\ \\|! ,-'M | ||  \\ \\|! ,-' | ||");
                printf("\n\t       || |W`. ||  N   || |  `. ||   N || |   `. ||    || |");
                printf("\n\t       ||||H `. |  W   ||||  H`. |   W ||||    `. |    ||||");
                printf("\n\t       || |N  |L|  M   ");
                printf("<     Dark Hollow     >");
                printf(" N|L|    || |");
                printf("\n\t       | ||W  ||]  H   | ||  W ||]   H | ||    W||]    | ||");
                printf("\n\t       ||||M  [ I  W   ||||  M [ I   W ||||    M[ I    ||||");
                printf("\n\t       || |H  I |  M   || |  H I |   M || |    HI |    || |");
                printf("\n\t       | [|N, !l| ,H\\  | [| /N,!l|  ,H\\| [|   /N!l|    | [|");
                printf("\n\t       || |   '-`      || |    '-`     || |     '-`    || |");
                printf("\n\t      / '| \\          / '| \\          / '| \\          / '| \\\n");
                printf("________________________________________________________________________________");
                printf("\n\n     Game: Very well. The next corridor is long, and at a decline.");
                printf("\n           You decide that it would be wise to take this route slowly. As");
                printf("\n           You look around, you begin to make out web covering the walls.");
                printf("\n           Surely, it was just the spider that lay slain on the ground that");
                printf("\n           spun such a tangled web. He was quite large, and it seems belie-");
                printf("\n           veable. Suddenly, you feel your weight plummit! Your foot is ca-");
                printf("\n           ught on a tripwire of sorts. Blast! The spider got one last jib.");
                printf("\n           In your mind's eye, you believe you hear the sounds of scurrying");
                printf("\n           legs rushing towards you. A arachnid trio! Before you stands th-");
                printf("\n           ree large spiders, black eyes glistening in the dim light and");
                printf("\n           fangs teeming with hunger. The first of the three lunges at you!");
                printf("\n\n           How will you begin this encounter?");
                printf("\n           1) Drink a potion\n           2) Defend yourself\n           3) Attack!");
                printf("\n\n           Answer: ");
                scanf("%i", &quest);
                switch(quest)
                {
                  case 1:
                  {
                    printf("\n\n     These are your available potions: ");
                    printf("\n\n     1) Health = %i/4", health);
                    printf("\n     2) Attack = %i/4", attack);
                    printf("\n     3) Skill  = %i/4", skill);
                    printf("\n\n     Which will you use? : ");
                    scanf("%i", &type);
                    switch(type)
                    {
                      case 1: //Health Potion Drink
                      {
                        if(health > 0)
                        {
                          printf("\n\n     You drink a health potion!");
                          hp = hp + 10;        //Skill modifier
                          health = health - 1; //Potion count
                          printf("\n     Your health is now %i/%i!", hp, maxhp);
                          printf("\n\n     Press any key to continue!");
                          getch();
                          break;
                        }
                        if(health <= 0)
                        {
                          printf("\n\n     You cannot do that! You have no potions of that type!");
                          printf("\n\n     Press any key to continue!");
                          getch();
                          break;
                        }
                      }
                      case 2:  //Attack Potion Drink
                      {
                        if(attack > 0)
                        {
                          printf("\n\n     You drink an attack potion!");
                          attk = attk + 5;     //Skill modifier
                          attack = attack - 1; //Potion count
                          printf("\n     Your attack is now %i!", attk);
                          printf("\n\n     Press any key to continue!");
                          getch();
                          break;
                        }
                        if(attack <= 0)
                        {
                          printf("\n\n     You cannot do that! You have no potions of that type!");
                          printf("\n\n     Press any key to continue!");
                          getch();
                          break;
                        }
                      }
                      case 3:  //Skill Potion Drink
                      {
                        if(skill > 0)
                        {
                          printf("\n\n     You drink a skill potion!");
                          ski = ski + 10;    //Skill modifier
                          skill = skill - 1; //Potion count
                          printf("\n     Your skill is now %i!", ski);
                          printf("\n\n     Press any key to continue!");
                          getch();
                          break;
                        }
                        if(skill <= 0)
                        {
                          printf("\n\n     You cannot do that! You have no potions of that type!");
                          printf("\n\n     Press any key to continue!");
                          getch();
                          break;
                        }
                      }
                      default:
                      {
                        printf("Invalid entry.");
                        break;
                      }
                    }
                  break; //Ends potion drink sequence.
                  }
                  case 2:
                  {
                    printf("\n\n     You choose to start your combat with defence.");
                    printf("\n     You manage to quickly crawl into a small hole, too");
                    printf("\n     small for your arachnid attackers, and heal 5 hp.");
                    hp = hp + 5;
                    printf("\n     Your health is now %d/%d", hp, maxhp);
                    printf("\n\n     Good Luck!");
                    printf("\n\n     Press any key to fight");
                    getch();
                    break;
                  }
                  case 3:
                  {
                    printf("\n\n     You are no fool! You jump towards the spider with");
                    printf("\n     your weapon drawn. Today, these spiders dine in hell!");
                    getch();
                    break;
                  }
                  default:
                  {
                    printf("\n\n     Somehow, you manage to not make up your mind.");
                    printf("\n     While you are confused, the spiders manage to");
                    printf("\n     deal 5 damage to you. An awful start!");
                    hp = hp - 5;
                    getch();
                    break;
                  }
                spider = 30;
                while(cont == 'y' || cont == 'Y' && spider > 0)
                  switch(job)
                  {
                    case 1: //Ranger fights the Spider
                    {
                      printf("\n     You run towards the spiders and attack with your bow!");
                      hit = (rand()%20) + acc + 5;
                      printf("\n     Your roll for hit chance with accuracy is: %d", hit);
                      printf("\n     You have +5 accuracy due to the number of spiders.");
                      printf("\n     The spider's armor provides 15 points of protection.");
                      if(hit >= 15) //Hit spider
                      {
                        dmgGiven = 0;
                        dmgGiven = (rand()%attk);
                        printf("\n     You do %d damage to the spiders!", dmgGiven);
                        spider = ((spider) - dmgGiven);
                        if(spider > 20)
                        {
                          printf("\n     Your arrow lodges deep into one of the spiders!");
                          printf("\n     The spider trio's health is now: %d/30", spider);
                          spiderDmg = rand()%4;
                          hp = hp - spiderDmg;
                          printf("\n\n     The first spider deals %d damage to you!", spiderDmg);
                          printf("\n     Your health is now: %d/%d", hp, maxhp);
                          spiderDmg = rand()%4;
                          hp = hp - spiderDmg;
                          printf("\n\n     The second spider deals %d damage to you!", spiderDmg);
                          printf("\n     Your health is now: %d/%d", hp, maxhp);
                          spiderDmg = rand()%4;
                          hp = hp - spiderDmg;
                          printf("\n\n     The third spider deals %d damage to you!", spiderDmg);
                          printf("\n     Your health is now: %d/%d", hp, maxhp);
                          printf("\n\n     Continue? (Y/N): ");
                          scanf("%s", &cont);
                          break;
                        }
                        else if(spider > 10 && spider <= 20) //Spider One Dies
                        {
                          printf("\n\n     You've killed one of the spiders!");                          
                          printf("\n     Your arrow lodges deep into one of the spiders!");
                          printf("\n     The spider duo's health is now: %d/20", spider);
                          spiderDmg = rand()%4;
                          hp = hp - spiderDmg;
                          printf("\n\n     The first spider deals %d damage to you!", spiderDmg);
                          printf("\n     Your health is now: %d/%d", hp, maxhp);
                          spiderDmg = rand()%4;
                          hp = hp - spiderDmg;
                          printf("\n\n     The second spider deals %d damage to you!", spiderDmg);
                          printf("\n     Your health is now: %d/%d", hp, maxhp);
                          printf("\n\n     Continue? (Y/N): ");
                          scanf("%s", &cont);
                          break;
                        }
                        else if(spider < 10)
                        {
                          printf("\n\n     You've killed another one of the spiders!");                          
                          printf("\n     Your arrow lodges deep into the last spider!");
                          printf("\n     The spider's health is now: %d/10", spider);
                          spiderDmg = rand()%4;
                          hp = hp - spiderDmg;   
                          printf("\n\n     The lone spider deals %d damage to you!", spiderDmg);
                          printf("\n     Your health is now: %d/%d", hp, maxhp);
                      }
                      else if(hit < 15 && spider > 20) //Miss spider trio
                      {
                        printf("\n     Your arrow misses the spiders alltogether!");
                        spiderDmg = rand()%4;
                        hp = hp - spiderDmg;
                        printf("\n\n     The first spider deals %d damage to you!", spiderDmg);
                        printf("\n     Your health is now: %d/%d", hp, maxhp);
                        spiderDmg = rand()%4;
                        hp = hp - spiderDmg;
                        printf("\n\n     The second spider deals %d damage to you!", spiderDmg);
                        printf("\n     Your health is now: %d/%d", hp, maxhp);
                        spiderDmg = rand()%4;
                        hp = hp - spiderDmg;
                        printf("\n\n     The third spider deals %d damage to you!", spiderDmg);
                        printf("\n     Your health is now: %d/%d", hp, maxhp);
                        printf("\n\n     Continue? (Y/N): ");
                        scanf("%s", &cont);
                        break;
                      }
                      else if(hit < 15 && spider < 20 && spider >= 10) //miss spider duo
                      {
                        printf("\n     Your arrow misses the spiders alltogether!");
                        spiderDmg = rand()%4;
                        hp = hp - spiderDmg;
                        printf("\n\n     The first spider deals %d damage to you!", spiderDmg);
                        printf("\n     Your health is now: %d/%d", hp, maxhp);
                        spiderDmg = rand()%4;
                        hp = hp - spiderDmg;
                        printf("\n\n     The second spider deals %d damage to you!", spiderDmg);
                        printf("\n     Your health is now: %d/%d", hp, maxhp);
                        printf("\n\n     Continue? (Y/N): ");
                        scanf("%s", &cont);
                        break;
                      }
                      else if(hit < 15 && spider < 10) //miss spider singular
                      {
                        printf("\n     Your arrow misses the spider!");
                        spiderDmg = rand()%4;
                        hp = hp - spiderDmg;
                        printf("\n\n     The first spider deals %d damage to you!", spiderDmg);
                        printf("\n     Your health is now: %d/%d", hp, maxhp);
                        printf("\n\n     Continue? (Y/N): ");
                        scanf("%s", &cont);
                        break;
                      }
                    break;
                    }
                    case 2: //Warrior fights the Spider
                    {
                      printf("\n     You run towards the spiders and attack with your axe!");
                      hit = (rand()%20) + acc + 5;
                      printf("\n     Your roll for hit chance with accuracy is: %d", hit);
                      printf("\n     You have +5 accuracy due to the number of spiders.");
                      printf("\n     The spider's armor provides 15 points of protection.");
                      if(hit >= 15) //Hit spider
                      {
                        dmgGiven = 0;
                        dmgGiven = (rand()%attk);
                        printf("\n     You do %d damage to the spiders!", dmgGiven);
                        spider = ((spider) - dmgGiven);
                        if(spider > 20)
                        {
                          printf("\n     Your axe sinks into one of the spiders!");
                          printf("\n     The spider trio's health is now: %d/30", spider);
                          spiderDmg = rand()%4;
                          hp = hp - spiderDmg;
                          printf("\n\n     The first spider deals %d damage to you!", spiderDmg);
                          printf("\n     Your health is now: %d/%d", hp, maxhp);
                          spiderDmg = rand()%4;
                          hp = hp - spiderDmg;
                          printf("\n\n     The second spider deals %d damage to you!", spiderDmg);
                          printf("\n     Your health is now: %d/%d", hp, maxhp);
                          spiderDmg = rand()%4;
                          hp = hp - spiderDmg;
                          printf("\n\n     The third spider deals %d damage to you!", spiderDmg);
                          printf("\n     Your health is now: %d/%d", hp, maxhp);
                          printf("\n\n     Continue? (Y/N): ");
                          scanf("%s", &cont);
                          break;
                        }
                        else if(spider > 10 && spider <= 20) //Spider One Dies
                        {
                          printf("\n\n     You've killed one of the spiders!");                          
                          printf("\n     Your axe sinks into one of the spiders!");
                          printf("\n     The spider duo's health is now: %d/20", spider);
                          spiderDmg = rand()%4;
                          hp = hp - spiderDmg;
                          printf("\n\n     The first spider deals %d damage to you!", spiderDmg);
                          printf("\n     Your health is now: %d/%d", hp, maxhp);
                          spiderDmg = rand()%4;
                          hp = hp - spiderDmg;
                          printf("\n\n     The second spider deals %d damage to you!", spiderDmg);
                          printf("\n     Your health is now: %d/%d", hp, maxhp);
                          printf("\n\n     Continue? (Y/N): ");
                          scanf("%s", &cont);
                          break;
                        }
                        else if(spider < 10)
                        {
                          printf("\n\n     You've killed another one of the spiders!");                          
                          printf("\n     Your axe sinks into the last spider!");
                          printf("\n     The spider's health is now: %d/10", spider);
                          spiderDmg = rand()%4;
                          hp = hp - spiderDmg;   
                          printf("\n\n     The lone spider deals %d damage to you!", spiderDmg);
                          printf("\n     Your health is now: %d/%d", hp, maxhp);
                      }
                      else if(hit < 15 && spider > 20) //Miss spider trio
                      {
                        printf("\n     Your axe misses the spiders alltogether!");
                        spiderDmg = rand()%4;
                        hp = hp - spiderDmg;
                        printf("\n\n     The first spider deals %d damage to you!", spiderDmg);
                        printf("\n     Your health is now: %d/%d", hp, maxhp);
                        spiderDmg = rand()%4;
                        hp = hp - spiderDmg;
                        printf("\n\n     The second spider deals %d damage to you!", spiderDmg);
                        printf("\n     Your health is now: %d/%d", hp, maxhp);
                        spiderDmg = rand()%4;
                        hp = hp - spiderDmg;
                        printf("\n\n     The third spider deals %d damage to you!", spiderDmg);
                        printf("\n     Your health is now: %d/%d", hp, maxhp);
                        printf("\n\n     Continue? (Y/N): ");
                        scanf("%s", &cont);
                        break;
                      }
                      else if(hit < 15 && spider < 20 && spider >= 10) //miss spider duo
                      {
                        printf("\n     Your axe misses the spiders alltogether!");
                        spiderDmg = rand()%4;
                        hp = hp - spiderDmg;
                        printf("\n\n     The first spider deals %d damage to you!", spiderDmg);
                        printf("\n     Your health is now: %d/%d", hp, maxhp);
                        spiderDmg = rand()%4;
                        hp = hp - spiderDmg;
                        printf("\n\n     The second spider deals %d damage to you!", spiderDmg);
                        printf("\n     Your health is now: %d/%d", hp, maxhp);
                        printf("\n\n     Continue? (Y/N): ");
                        scanf("%s", &cont);
                        break;
                      }
                      else if(hit < 15 && spider < 10) //miss spider singular
                      {
                        printf("\n     Your axe misses the spider!");
                        spiderDmg = rand()%4;
                        hp = hp - spiderDmg;
                        printf("\n\n     The first spider deals %d damage to you!", spiderDmg);
                        printf("\n     Your health is now: %d/%d", hp, maxhp);
                        printf("\n\n     Continue? (Y/N): ");
                        scanf("%s", &cont);
                        break;
                      }
                    break;
                    }
                    case 3: //Mage fights the Spider
                    {
                      printf("\n     You run towards the spiders and attack with your staff!");
                      hit = (rand()%20) + acc + 5;
                      printf("\n     Your roll for hit chance with accuracy is: %d", hit);
                      printf("\n     You have +5 accuracy due to the number of spiders.");
                      printf("\n     The spider's armor provides 15 points of protection.");
                      if(hit >= 15) //Hit spider
                      {
                        dmgGiven = 0;
                        dmgGiven = (rand()%attk);
                        printf("\n     You do %d damage to the spiders!", dmgGiven);
                        spider = ((spider) - dmgGiven);
                        if(spider > 20)
                        {
                          printf("\n     Your spell crackles maliciously through one of the spiders!");
                          printf("\n     The spider trio's health is now: %d/30", spider);
                          spiderDmg = rand()%4;
                          hp = hp - spiderDmg;
                          printf("\n\n     The first spider deals %d damage to you!", spiderDmg);
                          printf("\n     Your health is now: %d/%d", hp, maxhp);
                          spiderDmg = rand()%4;
                          hp = hp - spiderDmg;
                          printf("\n\n     The second spider deals %d damage to you!", spiderDmg);
                          printf("\n     Your health is now: %d/%d", hp, maxhp);
                          spiderDmg = rand()%4;
                          hp = hp - spiderDmg;
                          printf("\n\n     The third spider deals %d damage to you!", spiderDmg);
                          printf("\n     Your health is now: %d/%d", hp, maxhp);
                          printf("\n\n     Continue? (Y/N): ");
                          scanf("%s", &cont);
                          break;
                        }
                        else if(spider > 10 && spider <= 20) //Spider One Dies
                        {
                          printf("\n\n     You've killed one of the spiders!");                          
                          printf("\n     Your spell crackles maliciously through one of the spiders!");
                          printf("\n     The spider duo's health is now: %d/20", spider);
                          spiderDmg = rand()%4;
                          hp = hp - spiderDmg;
                          printf("\n\n     The first spider deals %d damage to you!", spiderDmg);
                          printf("\n     Your health is now: %d/%d", hp, maxhp);
                          spiderDmg = rand()%4;
                          hp = hp - spiderDmg;
                          printf("\n\n     The second spider deals %d damage to you!", spiderDmg);
                          printf("\n     Your health is now: %d/%d", hp, maxhp);
                          printf("\n\n     Continue? (Y/N): ");
                          scanf("%s", &cont);
                          break;
                        }
                        else if(spider < 10)
                        {
                          printf("\n\n     You've killed another one of the spiders!");                          
                          printf("\n     Your spell crackles maliciously through the last spider!");
                          printf("\n     The spider's health is now: %d/10", spider);
                          spiderDmg = rand()%4;
                          hp = hp - spiderDmg;   
                          printf("\n\n     The lone spider deals %d damage to you!", spiderDmg);
                          printf("\n     Your health is now: %d/%d", hp, maxhp);
                      }
                      else if(hit < 15 && spider > 20) //Miss spider trio
                      {
                        printf("\n     Your spell misses the spiders alltogether!");
                        spiderDmg = rand()%4;
                        hp = hp - spiderDmg;
                        printf("\n\n     The first spider deals %d damage to you!", spiderDmg);
                        printf("\n     Your health is now: %d/%d", hp, maxhp);
                        spiderDmg = rand()%4;
                        hp = hp - spiderDmg;
                        printf("\n\n     The second spider deals %d damage to you!", spiderDmg);
                        printf("\n     Your health is now: %d/%d", hp, maxhp);
                        spiderDmg = rand()%4;
                        hp = hp - spiderDmg;
                        printf("\n\n     The third spider deals %d damage to you!", spiderDmg);
                        printf("\n     Your health is now: %d/%d", hp, maxhp);
                        printf("\n\n     Continue? (Y/N): ");
                        scanf("%s", &cont);
                        break;
                      }
                      else if(hit < 15 && spider < 20 && spider >= 10) //miss spider duo
                      {
                        printf("\n     Your spell misses the spiders alltogether!");
                        spiderDmg = rand()%4;
                        hp = hp - spiderDmg;
                        printf("\n\n     The first spider deals %d damage to you!", spiderDmg);
                        printf("\n     Your health is now: %d/%d", hp, maxhp);
                        spiderDmg = rand()%4;
                        hp = hp - spiderDmg;
                        printf("\n\n     The second spider deals %d damage to you!", spiderDmg);
                        printf("\n     Your health is now: %d/%d", hp, maxhp);
                        printf("\n\n     Continue? (Y/N): ");
                        scanf("%s", &cont);
                        break;
                      }
                      else if(hit < 15 && spider < 10) //miss spider singular
                      {
                        printf("\n     Your spell misses the spider!");
                        spiderDmg = rand()%4;
                        hp = hp - spiderDmg;
                        printf("\n\n     The first spider deals %d damage to you!", spiderDmg);
                        printf("\n     Your health is now: %d/%d", hp, maxhp);
                        printf("\n\n     Continue? (Y/N): ");
                        scanf("%s", &cont);
                        break;
                      }
                    }
                  }
                }



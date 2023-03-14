/*
Представете служителите
във фирма в структура с членове: пореден номер, име, презиме,
фамилия, позиция, трудов стаж в години, заплата в лева, указател към
структурата, описващ неговия началник. Напишете програма, която
въвежда 10 служителя, които се съхраняват в масив от описаните
структури. Въвеждането на служителите може да стане на два паса,
първо въвеждане на всички данни без указателя към началника и на
втори пас, указване на всеки служител кой е неговият началник.
 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
 
const char names[][20] = {
                            "Troy", "Newton", "Alfonso", "Hank", "Tracey",
                            "Carey", "Bernie", "Alex", "Loyd", "Kent", "Beau",
                            "Shawn", "Matilda", "Judy", "Geraldine", "Sonia",
                            "Rachael", "Diana", "Margie", "Mayra" ,"Lidia",
                            "Thelma", "Frances"
                        };
 
const char familyNames[][20] = {
                                "Willis", "Andersen", "Mcgrath", "Malone",
                                "Werner", "Douglas", "Nicholson", "Hardy",
                                "Schneider", "Welch", "Blackburn", "Nguyen",
                                "Benitez", "Boyd", "Flowers", "Mccullough",
                                "Miles"
                                };
 
const char jobPositions[][50] = {
    "Computer Scientist",
    "IT Professional",
    "UX Designer UI Developer",
    "SQL Developer",
    "Web Designer",
    "Web Developer",
    "Help Desk Worker",
    "Software Engineer",
    "Data Entry",
    "DevOps Engineer",
    "Computer Programmer",
    "Network Administrator",
    "Information Security Analyst",
    "Artificial Intelligence Engineer",
    "Cloud Architect",
    "IT Manager",
    "Technical Specialist",
    "Application Developer"
};
 
#define ARRAY_SIZE(x) ((sizeof x) / (sizeof *x))
 
struct boss{
    char name[20];
    char familyName[20];
};
 
struct employee{
    int id;
    char name[20];
    char familyName[20];
    char jobPosition[50];
    int workExp;
    float salary;
    struct boss *bossData;
};

typedef struct boss boss;

typedef struct employee employee;
 
void setDataEmployee(employee *, boss*, int);
 
void setDataBoss(boss *);
 
void displayData(employee *);
 
int main()
{
 
    srand(time(NULL));

    int members_count = 10;

    employee *newEmployee = (employee*) malloc(sizeof(*newEmployee) * members_count);
    boss *newBoss = (boss*) malloc(sizeof(*newBoss) * members_count);

    for (int i = 0; i < 10; i++){
        setDataBoss(&newBoss[i]);
        setDataEmployee(&newEmployee[i], &newBoss[i], i + 1);
    }
    
    for (int i = 0; i < members_count; i++){
        displayData(&newEmployee[i]);
    }

    return 0;
}
 
void setDataEmployee(employee *ptr, boss *boss_ptr, int id_num){
    ptr->id = id_num;
    strcpy(ptr->name, names[rand() % (ARRAY_SIZE(names) - 1)]);
    strcpy(ptr->familyName, familyNames[rand() % (ARRAY_SIZE(familyNames) - 1)]);
    strcpy(ptr->jobPosition, jobPositions[rand() % (ARRAY_SIZE(jobPositions) - 1)]);
    ptr->workExp = rand() % 11;
    ptr->salary = 1000 + (rand() % 3001);
    ptr->bossData = boss_ptr;
}
 
void setDataBoss(boss *ptr){
 
    strcpy(ptr->name, names[rand() % (ARRAY_SIZE(names) - 1)]);
    strcpy(ptr->familyName, familyNames[rand() % (ARRAY_SIZE(familyNames) - 1)]);
}
 
void displayData(employee *ptr){
    printf("\n------------------------------\n");
    printf("Employee ID: %d\n", ptr->id);
    printf("First Name: %s\n", ptr->name);
    printf("Family Name: %s\n", ptr->familyName);
    printf("Job Position: %s\n", ptr->jobPosition);
    printf("Work Experience: %d\n", ptr->workExp);
    printf("Salary: %.2flv\n", ptr->salary);
    printf("Boss name: %s %s\n", ptr->bossData->name, ptr->bossData->familyName);
}
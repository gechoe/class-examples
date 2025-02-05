#include <stdio.h>
#include <string.h>

/* define a new struct type (outside function bodies) */
struct studentT {
    char  name[64];
    int   age;
    float gpa;
    int   grad_yr;
};

void print(const char* prefix, struct studentT s) {
  printf("--------------------\n");
  printf("%s\n", prefix);
  printf("Name: %s\n", s.name);
  printf("Age: %d\n", s.age);
  printf("GPA: %.2f\n", s.gpa);
  printf("Grad Yr: %d\n", s.grad_yr);
  printf("--------------------\n");
}

<<<<<<< HEAD
//We need struct pointers!! Here, we need as struct pointer for studentT s.
=======
>>>>>>> bfddc82fa96b1cce003a715b39b87329845d3424
void changeName(struct studentT* s, char* newName) {
  if (newName == NULL) {
    return;
  }
<<<<<<< HEAD

  //Below the two strcpy are the smae, one is just shorthand version due to constant usage.
  strcpy((s*).name, newName);
=======
>>>>>>> bfddc82fa96b1cce003a715b39b87329845d3424
  strcpy(s->name, newName);
}

void changeGpa(struct studentT* s, float newGpa) {
  s->gpa = newGpa;
}

int main() {
    struct studentT student1;
    
    strcpy(student1.name, "Ruth");
    student1.age = 17;
    student1.gpa = 3.5;
    student1.grad_yr = 2021;

    print("ORIGINAL", student1);
    changeName(&student1, "Kwame");
    print("AFTER CHANGE NAME", student1);

    changeGpa(&student1, 3.7);
    print("AFTER CHANGE GPA", student1);

    return 0;
}

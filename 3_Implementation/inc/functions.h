#ifndef FUNCTIONS_H
#define FUNCTIONS_H

typedef struct {
  int day;
  int month;
  int year;
  char note[255];
} Note;

int isLeapYear( int year );        /* True if leap year */
int leapYears( int year );         /* The number of leap year */
int todayOf( int y, int m, int d); /* The number of days since the beginning of the year */
long days( int y, int m, int d);   /* Total number of days */
void calendar(int y, int m);       /* display calendar at m y */
int getDayNumber(int d,int m,int y);
char *getName(int day);

#endif

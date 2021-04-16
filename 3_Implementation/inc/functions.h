# ifndef WIN32_LEAN_AND_MEAN
#   define WIN32_LEAN_AND_MEAN
# endif
# ifndef VC_EXTRALEAN
#   define VC_EXTRALEAN
# endif
# ifndef NOMINMAX
#   define NOMINMAX
# endif
#include<stdio.h>
#include <windows.h>
#include <stdbool.h>
#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

struct Date{
    int dd;
    int mm;
    int yy;
};
struct Date date;

struct Remainder{
    int dd;
    int mm;
    char note[50];
};
struct Remainder R;



void gotoxy (int x, int y);
void SetColor(int ForgC);
void ClearColor();
void ClearConsoleToColors(int ForgC, int BackC);
int check_leapYear(int year);
void increase_month(int *mm,  int *yy);
void decrease_month(int *mm,  int *yy);

int getNumberOfDays(int month,int year);
char *getName(int day);
void print_date(int mm, int yy);
int getDayNumber(int day,int mon,int year);
char *getDay(int dd,int mm,int yy);
int checkNote(int dd, int mm);
void printMonth(int mon,int year,int x,int y);
void AddNote();
void showNote(int mm);

#endif

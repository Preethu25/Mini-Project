# Calendar

## Introduction
A calendar is a chart or device which displays the date and the day of the week, and often the whole of a particular year divided up into months, weeks, and days. It can be used to refer to a series or list of events and activities which take place on particular dates, and which are important for a particular organization, community, or person.

### Zeller's congruence
Zeller’s congruence is an algorithm devised by Christian Zeller to calculate the day of the week for any Julian or Gregorian calendar date. It can be considered to be based on the conversion between Julian day and the calendar date. It is used to find the day of the week for any date. 

For the Gregorian calender it is:

<img src="https://user-images.githubusercontent.com/80700297/114757124-17c01500-9d79-11eb-9b82-f4638104de7c.PNG" width="700" height="75">

For the Julian calendar it is: 

<img src="https://user-images.githubusercontent.com/80700297/114758463-9ec1bd00-9d7a-11eb-9374-231a076c4978.PNG" width="700" height="75">

where

- h is the day of the week (0 = Saturday, 1 = Sunday, 2 = Monday, ..., 6 = Friday)
- q is the day of the month
- m is the month (3 = March, 4 = April, 5 = May, ..., 14 = February)
- K the year of the century (year mod 100).
- J is the zero-based century (actually [year/100]) For example, the zero-based centuries for 1995 and 2000 are 19 and 20 respectively (not to be confused with the common ordinal century enumeration which indicates 20th for both cases).
- [...] is the floor function or integer part
- mod is the modulo operation or remainder after division

In this algorithm January and February are counted as months 13 and 14 of the previous year. E.g. if it is 2 February 2010, the algorithm counts the date as the second day of the fourteenth month of 2009 (02/14/2009 in DD/MM/YYYY format)

For an ISO week date Day-of-Week d (1 = Monday to 7 = Sunday), use

<img src="https://user-images.githubusercontent.com/80700297/114760123-a08c8000-9d7c-11eb-96e8-9cb8eb47e8e3.PNG" width="300" height="50"> 

## Objective
To implement a calendar of particular entered year, to add events and also to search events which are specified.

## 4W's and 1H
### Who:
It is a simple application which can be used by anyone.

### What:
It is used to view date, day and also special events of particular year.

### When:
It can be used as a reminder to know the special events of our personal life or to know specific task to be performed in professional life.

### Where:
It is used in many smart devices like mobile phone, digital watches etc.

### How:
This project is implemented using multiple files which consists of various files in order to obtain expected output.

## High-Level Requirements
|  ID   |                 Description                     | Category |    Status   |
| ----- | ----------------------------------------------- | -------- | ----------- |
| HR_01 |  The user gives an input to enter into calendar | Tehnical | Implemented |
| HR_02 |          To search events in calendar           | Tehnical | Implemented |
| HR_03 |           To add events to calendar             | Tehnical | Implemented |
| HR_04 |            To quit the calendar                 | Tehnical | Implemented |

## Low-Level Requirements
|  ID   |                                Description                                    |  HLR ID  | Category  |    Status   |
| ----- | ----------------------------------------------------------------------------- | -------- | --------- | ----------- |
| LR_01 | If the entered year and month by user is valid input it will lead to calendar |   HR_01  | Technical | Implemented | 
| LR_02 | To search an event gives three options : View Event, Edit Event, Delete Event |   HR_02  | Technical | Implemented |
|       | from which user can see and can modify the details filled in events and can   |          |           |             |            
|       | also remove the events from the list                                          |          |           |             |
| LR_03 | To add event into calendar user need to enter the particular date with month  |   HR_03  | Technical | Implemented |
|       | and year which pops to enter the time, location and note details for event    |          |           |             |
| LR_04 |       Press the particular key specified in order to quit the program         |   HR_04  | Technical | Implemented |

       




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

h is the day of the week (0 = Saturday, 1 = Sunday, 2 = Monday, ..., 6 = Friday)
q is the day of the month
m is the month (3 = March, 4 = April, 5 = May, ..., 14 = February)
K the year of the century ({\displaystyle year{\bmod {1}}00}{\displaystyle year{\bmod {1}}00}).
J is the zero-based century (actually {\displaystyle \lfloor year/100\rfloor }\lfloor year/100\rfloor ) For example, the zero-based centuries for 1995 and 2000 are 19 and 20 respectively (not to be confused with the common ordinal century enumeration which indicates 20th for both cases).
{\displaystyle \lfloor ...\rfloor }{\displaystyle \lfloor ...\rfloor } is the floor function or integer part
mod is the modulo operation or remainder after division
In this algorithm January and February are counted as months 13 and 14 of the previous year. E.g. if it is 2 February 2010, the algorithm counts the date as the second day of the fourteenth month of 2009 (02/14/2009 in DD/MM/YYYY format)

For an ISO week date Day-of-Week d (1 = Monday to 7 = Sunday), use


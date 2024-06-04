# Exercises 2
> Tugas ke-1 mata kuliah Struktur Data 2024<br>
> Reference: _Noel Kalicharan - Advanced Topics in C_<br>
- [**Questions**](#qs)
    - [Q7. Minute Counter I](#q7)
    - [Q8. Minute counter II](#q8)
    - [Q11. Bazaar Sales](#q11)
    - [Q12. Courses Registration](#q12)
- [**Solutions**](#ss)
    - [S7. Minute Counter I](#s7)
    - [S8. Minute counter II](#s8)
    - [S11. Bazaar Sales](#s11)
    - [S12. Courses Registration](#s12)

## Questions <a name="qs"></a>
### Q7. Minute Counter I <a name="q7"></a>
A time in 24-hour clock format is represented by two numbers; for example, `16 45` means the time 16:45, that is, 4:45 p.m. Using a structure to represent a time, write a function that, given two time structures, `t1` and `t2`, returns the number of minutes from `t1` to `t2`. For example, if the two given times are `16 45` and `23 25`, your function should return `400`.

### Q8. Minute Counter II <a name="q8"></a>
Modify the function so that it works as follows: if `t2` is less than `t1`, take it to mean a time for the next day. For example, given the times 20:30 and 6:15, take this to mean 8.30 p.m. to 6.15 a.m. of the next day. Your function should return `585`.

### Q11. Bazaar Sales <a name="q11"></a>
At a school’s bazaar, activities were divided into stalls. At the close of the bazaar, the manager of each stall submitted information to the principal consisting of the name of the stall, the income earned, and its expenses. Here’s some sample data:

    Games 2300.00 1000.00<br>
    Sweets 900.00 1000.00

Using a structure to hold a stall’s data, write a program to read the data and print a report consisting of the stall name and net income (income - expenses), **in order of decreasing net income** (that is, with the most profitable stall first and the least profitable stall last). In addition, print the number of stalls, the total profit or loss of the bazaar, and the stall(s) that made the most profit. Assume that a line containing xxxxxx only ends the data.

### Q12. Courses Registration <a name="q12"></a>
A data file contains registration information for six courses—`CS20A`, `CS21A`, `CS29A`, `CS30A`, `CS35A`, and `CS36A`. Each line of data consists of a seven-digit student registration number followed by six (ordered) values, each of which is `0` or `1`. A value of `1` indicates that the student is registered for the corresponding course; `0` means the student is not. Thus, `1 0 1 0 1 1` means that the student is registered for `CS20A`, `CS29A`, `CS35A`, and `CS36A`, but not for `CS21A` and `CS30A`. You may assume that there are no more than 100 students and a registration number 0 ends the data. Write a program to read the data and produce a class list for each course. Each list consists of the registration numbers of those students taking the course.

## Solutions <a name="ss"></a>


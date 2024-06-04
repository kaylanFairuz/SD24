### [← Tugas Struktur Data E](../../)
# Exercises 8
> Tugas ke-6 mata kuliah Struktur Data 2024<br>
> Reference: _Noel Kalicharan - Advanced Topics in C_<br>
- [**Questions**](#qs)
    - [Q3. Sort Binary File I](#q3)
    - [Q4. Sort Binary File II](#q4)
    - [Q7. File Indexing](#q7)
- [**Solutions**](#ss)
    - [S3. Sort Binary File I](#s3)
    - [S4. Sort Binary File II](#s4)
    - [Q7. File Indexing](#q7)

## Questions <a name="qs"></a>
### Q3. Sort Binary File I <a name="q3"></a>
Write a program to read a (binary) file of integers, sort the integers, and write them back to the same file. Assume that all the numbers can be stored in an array.

### Q4. Sort Binary File II <a name="q4"></a>
Repeat exercise 3, but assume that only 20 numbers can be stored in memory (in an array) at any one time. Hint: you will need to use at least two additional files for temporary output.

### Q7. File Indexing <a name="q7"></a>
What is the purpose of creating an index for a file?

The following are some records from an employee file. The fields are employee number (the key), name, job title, telephone number, monthly salary, and tax to be deducted.

```
STF425, Julie Johnson, Secretary, 623-3321, 2500, 600
COM319, Ian McLean, Programmer, 676-1319, 3200, 800
SYS777, Jean Kendall, Systems Analyst, 671-2025, 4200, 1100
JNR591, Lincoln Kadoo, Operator, 657-0266, 2800, 700
MSN815, Camille Kelly, Clerical Assistant, 652-5345, 2100, 500
STF273, Anella Bayne, Data Entry Manager, 632-5324, 3500, 850
SYS925, Riaz Ali, Senior Programmer, 636-8679, 4800, 1300
```

a. How can a record be retrieved given the record number?

b. How can a record be retrieved given the key of the record?

c. As the file is loaded, create an index in which the keys are in the order given. How is
such an index searched for a given key?

d. As the file is loaded, create an index in which the keys are sorted. Given a key, how is
the corresponding record retrieved?

Discuss what changes must be made to the index when records are added to and deleted from the file

## Solutions <a name="ss"></a>

# CPP_MiniProject

## *-Medical Store Managament System-*
This Mini Project is implemented in the C++ language with the inclusion of Linux related concepts such as Threads and Mutex to perform mutual exclusion. This project is an implementation of addition, deletion and updation of medicines and their data such as Name, concentration, price of the medicine, Expiry and Manufacturing date. One thread would handle the addition of medicines while the other thread is used to count the list of medicines inserted or currently in the database. A mutex lock is applied so that the process of counting would happen only after the first thread's instructions are executed and the lock is released. Google Testing has been implemented to perform the unit testing on the Project. STL concepts such as lists were implemented in this project to take in the medicines details into a list and to access them later for further modifications and display.


|Cppcheck|Codacy|Valgrind|UnitTesting|C/C++ CI|
|--------|------|--------|-----------|--------|
|![cppcheck-action](https://github.com/99002488/CPP_MiniProject/workflows/cppcheck-action/badge.svg)|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/b4de6f33fc094b328c5308d14c2b6a28)](https://www.codacy.com/gh/99002488/CPP_MiniProject/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=99002488/CPP_MiniProject&amp;utm_campaign=Badge_Grade)|![Valgrind](https://github.com/99002488/CPP_MiniProject/workflows/Valgrind/badge.svg)|![Unit testing](https://github.com/99002488/CPP_MiniProject/workflows/Unit%20testing/badge.svg?branch=master)|![C/C++ CI](https://github.com/99002488/CPP_MiniProject/workflows/C/C++%20CI/badge.svg?branch=master)|

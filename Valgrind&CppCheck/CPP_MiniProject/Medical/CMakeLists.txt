cmake_minimum_required(VERSION 2.6)

# Locate GTest

find_package(GTest REQUIRED)

include_directories(${GTEST_INCLUDE_DIRS})

# Link runTests with what we want to test and the GTest and pthread library

add_executable(MedicalMain medical.cpp)
target_link_libraries(MedicalMain ${GTEST_LIBRARIES} pthread)

#add_executable(MedicalTest medicalDb-test.cpp)
#target_link_libraries(sudokuTests ${GTEST_LIBRARIES} pthread)

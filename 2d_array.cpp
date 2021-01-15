// Copyright (c) 2021 Ryan Walsh All rights reserved
//
// Created by Ryan Walsh
// Created on January 14 2021
// this program generate a 2-D array and finds average of all numbers in array

#include <iostream>
#include <string>
#include <iomanip>
#include <random>
#include <array>

template <int rows, int cols>
float average_of_numbers(int (&passed_in_2d_list)[rows][cols]) {
    // this function adds up and calculates the average all the elements
    // in a 2D array
    float multiply;
    float average;
    int total = 0;

    for (size_t row_element = 0; row_element < rows; ++row_element) {
        for (size_t column_element = 0; column_element < cols; ++column_element)
            total += passed_in_2d_list[row_element][column_element];
            multiply = rows * cols;
            average = total / multiply;
    }

    return average;
}


int main() {
    // this program generate a 2-D array and finds average of all numbers in
    // array

    int random_number = 0;
    float average = 0;
    const int rows = 3;
    const int columns = 3;
    int a_2d_array[rows][columns];
    std::random_device rseed;
    std::mt19937 rgen(rseed());  //  mersenne_twister
    std::uniform_int_distribution<int> idist(1, 50);  //  [1, 50]


    // input
    for (int row_element = 0; row_element < rows; row_element++) {
        for (int column_element = 0; column_element < columns;
            column_element++ ) {
            random_number = idist(rgen);
            a_2d_array[row_element][column_element] = random_number;
            std::cout << random_number<< ", ";
        }
        std::cout << std::endl;
    }

    average = average_of_numbers(a_2d_array);
    std::cout << std::endl;
    std::cout << std::setprecision(2) << std::fixed <<
    "The average of all the numbers is: " << average << std::endl;
}

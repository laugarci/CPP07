/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 10:22:00 by laugarci          #+#    #+#             */
/*   Updated: 2024/03/01 10:07:13 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Array.hpp>

#define MAX_VAL 750

int subject_test()
{
	std::cout << BGRED "[ SUBJECT TEST ]" RESET << std::endl;
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    { 
		Array<int> tmp = numbers;
		Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
	}

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    return 0;
}

void more_tests()
{
	std::cout << BGRED "[ MORE TESTS ]" RESET << std::endl;
	Array<int>	arr;

	try
	{
		arr[0] = 0;
	}
	catch( std::logic_error& e )
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	Array<int> arr2(10);
	try
	{
		arr2[9] = 5;
		std::cout << GREEN "Value: " RESET << arr2[9] << std::endl;
		std::cout << GREEN "Size of array: " RESET << arr2.size() << std::endl;
	}
	catch (std::logic_error& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	Array<int> arr3(4);
	try
	{
		arr3[6] = 7;
	}
	catch (std::logic_error& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	Array<std::string>str(10);
	try
	{
		str[2] = "hola";
		std::cout << GREEN "Value: " RESET << str[2] << std::endl;
		std::cout << GREEN "Size: " RESET << str.size() << std::endl;	
	}
	catch (...)
	{}
	Array<int>arr4(10);
	try {
		std::cout << GREEN "Size: " RESET << arr4.size() << std::endl;
		for (int i = 0; i < 10; i++)
		{
			int val = rand() % 200;
			arr4[i] = val;
		}
		std::cout << GREEN "Random numbers: " RESET << std::endl;
		for (int i = 0; i < 10; i++)
			std::cout << arr4[i] << " ";
		std::cout << std::endl;
	} catch (...)
	{}
}

int main()
{
	subject_test();
	more_tests();
}

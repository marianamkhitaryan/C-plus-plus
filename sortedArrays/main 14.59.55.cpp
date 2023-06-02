#include <iostream>

int main(int argc, char** argv) {

    int arr1[5];
    int arr2[5];
    int arr3[10];
    int arr_elements = 5;
    int arr3_elements = 10;

    // Array 1

    std::cout << "Array1 - enter 5 digits: " << std::endl;

    for (int i = 0; i < arr_elements; ++i) {
        std::cin >> arr1[i];
        arr3[i] = arr1[i];
    }

    bool arr1IsSorted = false;
    bool arr2IsSorted = false;

    for (int i = 0; i < arr_elements - 1; ++i)
    {
        if (arr1[i] > arr1[i + 1])
        {
            arr1IsSorted = false;
            break;
        }
        else
        {
            for (int k = 0; k < arr_elements - 1; ++k)
            {
                if (arr1[k] <= arr1[k + 1])
                {
                    arr1IsSorted = true;
                    break;
                }
            }
        }
    }

    // Array 2

    if (arr1IsSorted)
    {
        std::cout << "Array2 - enter 5 digits: " << std::endl;

        for (int i = 0; i < arr_elements; ++i) {
            std::cin >> arr2[i];
            for (int k = i + 5; k < arr3_elements; ++k)
            {
                arr3[k] = arr2[i];
            }
        }
    }
    else
    {
        std::cout << "Array1 is incorrect." << std::endl;
        return 0;
    }

    for (int i = 0; i < arr_elements - 1; ++i)
    {
        if (arr2[i] > arr2[i + 1])
        {
            arr2IsSorted = false;
            break;
        }
        else
        {
            for (int k = 0; k < arr_elements - 1; ++k)
            {
                if (arr2[k] <= arr2[k + 1])
                {
                    arr2IsSorted = true;
                    break;
                }
            }
        }
    }

    // Array 3

    int temp;

    if (arr2IsSorted)
    {
        for (int i = 0; i < arr3_elements; ++i)
        {
            for (int j = i + 1; j < arr3_elements; ++j)
            {
                if (arr3[i] > arr3[j])
                {
                    temp = arr3[i];
                    arr3[i] = arr3[j];
                    arr3[j] = temp;
                }
            }
        }
    }
    else
    {
        std::cout << "Array2 is incorrect." << std::endl;
        return 1;
    }

    if (arr2IsSorted)
    {
        std::cout << "Array 3 is: " << std::endl;
        for (int i = 0; i < arr3_elements; ++i)
        {
            std::cout << arr3[i] << std::endl;
        }
    }

}
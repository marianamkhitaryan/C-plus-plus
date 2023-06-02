#include <iostream>


int display(int arr[], int arr_elements) {

    for (int i = 0; i < arr_elements; ++i)
    {
        std::cin >> arr[i];
    }

}

void calculateAndPrintCombinations(int arr[], int arr_elements) {

    for (int i = 0; i < arr_elements; ++i)
    {

        std::cout << "All possible combinations are:" << std::endl;
        std::cout << arr[i] << arr[i + 1] << arr[i + 2] << " ";
        std::cout << arr[i] << arr[i + 2] << arr[i + 1] << " ";
        i++;
        std::cout << arr[i] << arr[i - 1] << arr[i + 1] << " ";
        std::cout << arr[i] << arr[i + 1] << arr[i - 1] << " ";
        i++;
        std::cout << arr[i] << arr[i - 1] << arr[i - 2] << " ";
        std::cout << arr[i] << arr[i - 2] << arr[i - 1] << " ";

    }
}

bool validateInput(int arr[], int arr_elements) {

    int temp;
    bool isNotCorrect = false;

    for (int i = 0; i < arr_elements; ++i)
    {
        for (int j = i + 1; j < arr_elements; ++j)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < arr_elements; ++i)
    {
        if (arr[i] == arr[i + 1] || arr[i] <= 0 || arr[i] > 9)
        {
            isNotCorrect = true;
        }
    }


    if (isNotCorrect)
    {
        std::cout << "The input is not correct" << std::endl;
    }
    else
    {
        calculateAndPrintCombinations(arr, arr_elements);
    }

}

int main(int argc, char** argv) {

    int arr[3];
    int arr_elements = 3;

    std::cout << "Enter 3 digits" << std::endl;

    display(arr, arr_elements);

    validateInput(arr, arr_elements);

}
#include <iostream>

struct Employee
{
    int id;
    int age;
    float salary;
};

enum Criteria
{
    Mean,
    Mode
};

Employee arr[3];

int getInput(Employee arr[], int emp_num) {

    for (int n = 0; n < emp_num; ++n)
    {

        std::cout << "Enter the data for Employee" << " " << n + 1 << ":" << std::endl;
        std::cout << "Enter the id: ";
        std::cin >> arr[n].id;
        std::cout << "Enter the age: ";
        std::cin >> arr[n].age;
        std::cout << "Enter the salary: ";
        std::cin >> arr[n].salary;
        std::cout << std::endl;

    }

}

int findEmployees(Employee arr[], int emp_num, int c, Criteria mean)
{

    int val = 0;

    int count = 1;
    int arr2[0];
    int mode = arr2[0];
    int max_count = 1;

    std::cout << "Enter the filtering criteria (0 for mean, 1 for mode): " ;
    std::cin >> c;

    if(c != 0 && c != 1){
        std::cout << "The input is not correct." << std::endl;
    }
    else
    {
        if(c == mean)
        {
            for(int i = 0; i < 3; ++i)
            {
                val = val + arr[i].salary;
            }

            int mean = val / 3;

            std::cout << "The mean salary is: " << mean << std::endl;
        }
        else
        {
            for(int i = 0; i < emp_num; i++)
            {
                arr2[i] = arr[i].salary;
            }

            for(int i = 0; i < emp_num - 1; i++)
            {
                for(int j = i + 1 ; j < emp_num; j++)
                {
                    if(arr2[i] > arr2[j])
                    {
                        int temp = arr2[i];
                        arr2[i] = arr2[j];
                        arr2[j] = temp;
                    }
                }
            }

            for(int i = 1; i < emp_num; i++)
            {
                if(arr2[i] == arr2[i-1])
                {
                    count++;
                }
                else
                {
                    if(count > max_count)
                    {
                        max_count = count;
                        mode = arr2[i-1];
                    }
                    count = 1;
                }
            }
            if(count > max_count)
            {
                max_count = count;
                mode = arr2[2];
            }
            std::cout << "The mode salary is: " << mode << std::endl;
        }
    }

}

int main(int argc, char** argv) {

    int c;

    Criteria mean;
    mean = Mean;

    int emp_num = 3;

    getInput(arr, emp_num);
    findEmployees(arr, emp_num, c, mean);

    return 0;
}



#include <iostream>

int main() {

    int n[5];
    int n_elements = 5;

    std::cout<<"Enter 5 digits: ";

    for (int i = 0; i < 5; ++i)
    {
        std::cin >> n[i];
    }

    int maxFreq = 0;
    int mostFrequent = -1;

    for (int i = 0; i < n_elements; i++)
    {
        int countFreq = 1;
            for (int j = 0; j < n_elements; j++)
            {
                if (n[j] == n[i])
                    countFreq++;
            }
            if (maxFreq < countFreq)
            {
                maxFreq = countFreq;
                mostFrequent = n[i];
            }
            else if (maxFreq == countFreq)
                mostFrequent = std::min(mostFrequent, n[i]);
    }

    std::cout << "The most frequent digit is: " << mostFrequent << std::endl;

    int minFreq = 0;
    int leastFrequent = -1;

    for (int i = 0; i < n_elements; i++)
    {
        int countFreq = 1;
        for (int j = 0; j < n_elements; j++)
        {
            if (n[j] < n[i])
                countFreq++;
        }
        if (minFreq < countFreq)
        {
            minFreq = countFreq;
            leastFrequent = n[i];
        }
        else if (minFreq == countFreq)
            leastFrequent = std::min(leastFrequent, n[i]);
    }

    std::cout << "The least frequent digit is: " << leastFrequent << std::endl;
}

//sorting array in descending order
#include <iostream>
int main ()
{
    int n, i, j, x;
    
    std::cout << "Enter size of array : ";
    std::cin >> n;
    int a[n];
    std::cout << "Enter elements of array : ";
    for (i = 0; i < n; i++)
        std::cin >> a[i];    
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
        }
    }
  for (i = 0; i < n; i++) {
    std::cout<<"descending order:"<< a[i]<<" ";

  }
}
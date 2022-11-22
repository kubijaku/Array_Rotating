//
//  main.cpp
//  array rotarte\
//
//  Created by Jakub Kubicki on 11/06/2022.
//

#include <iostream>

void rotate( int tab[10][10], int number_of_columns)
{
    int n = number_of_columns;
    n=n-1;
    for (int i=0; i<n/2 +1; i++)
    {
        for( int j=i ; j<10-i-1;j++)
        {
            int pom = tab[i][j];
            tab[i][j] = tab[n-j][i];
            tab[n-j][i] = tab[n-i][n-j];
            tab[n-i][n-j] = tab[j][n-i];
            tab[j][n-i] = pom;
        }
    }
}


int main(int argc, const char * argv[]) {
    int tab[10][10];
    int k=0;
    for (int i=0; i<10; i++)
    {
        for( int j=0 ; j<10;j++)
        {
            tab[i][j] = k;
            k++;
        }
    }
    std::cout << "Hello, World!\n";
    for (int i=0; i<10; i++)
    {
        for( int j=0 ; j<10;j++)
        {
            std::cout << tab[i][j] << " ";
        }
        std::cout << std::endl;
    }
    rotate(tab, 10);
    std::cout << std::endl << "\nAFTER ROTATION\n";
    for (int i=0; i<10; i++)
    {
        for( int j=0 ; j<10;j++)
        {
            std::cout << tab[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}

//Mindy Chen
//11.14.24
//HW 4: Array  

#include <iostream>
#include <string>
using namespace std;

void filterEvens (int myArray [], int size);

string dna_to_rna (string dnaNucleotides);

int main()
{
    int i;
    int myArray[8];
    int cars[10] = {7, 3, 6, 0, 14, 8, 1, 2, 9, 8};
    int totalCars = 0;
    int manyCars = cars[0];
    int mostCars = 1; 
    string dnaNucleotides;

    cout << "Enter 8 numbers: " <<endl; //input 8 numbers

    for (i = 0; i < 8; i++)
        cin >> myArray[i];

    filterEvens (myArray, 8); //outputs the even numbers

    for (int i = 0; i < 10; ++i) 
        {totalCars = totalCars + cars[i]; //Adds all the cars sold
        if (cars[i] > manyCars) //Calculates the most cars sold and who sold it
            {manyCars = cars[i];         
            mostCars = i + 1;    
            }
        }

    // Output the results
    cout << "Total number of cars sold at the entire dealership: " << totalCars << endl;
    cout << "Best salesperson: Salesperson #" << mostCars << endl;
    cout << "Salesperson #" << mostCars << " sold " << manyCars << " cars" <<endl;

    cout << "Enter your DNA Nucleotides" <<endl; //Input dna
    cin >> dnaNucleotides;


    cout << "Your RNA is: " << dna_to_rna(dnaNucleotides) <<endl; //Outputs RNA   


    return 0;
}

void filterEvens (int myArray [], int size)
{
    for (int i = 0; i < size; i++) 
    {
        if ( myArray[i] % 2 == 0) //Only ouputs number divisible by 2
            cout << myArray[i] << " ";
    }
    cout <<endl;
    }

    string dna_to_rna(string dnaNucleotides) 
        {
            string rna = ""; //Starting value
            char nucleotide;

            while (cin >> nucleotide) 
            {
                if (nucleotide == 'A') //Turns A to U
                    rna += 'U';
                else if (nucleotide == 'C') //Turns C to G
                    rna += 'G';
                else if (nucleotide == 'G') //Turns G to C
                    rna += 'C';
                else if (nucleotide == 'T') //Turns T to A
                    rna += 'A';
                else
                    rna += ""; //Others are turned into empty spaces
            }

            return rna;
    }
/*
Enter 8 numbers: 
4 4 4 3 2 1 2 3 
4 4 4 2 2 
Total number of cars sold at the entire dealership: 58
Best salesperson: Salesperson #5
Salesperson #5 sold 14 cars
Enter your DNA Nucleotides
ACGTTGCA ACG TGCA GATTACA A42%
Your RNA is: UGCACGUUGCACGUCUAAUGUU
*/
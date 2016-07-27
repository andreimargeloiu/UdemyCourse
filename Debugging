# include <iostream>

using namespace std;

int Aglobal[5][5];

void addMatrix (int matrix[][5], int X)
{
    for (int i=0; i<5; ++i)
    {
        for (int j=0; j<5; ++j)
        {
            matrix[i][j]+=X;
        }
    }
}

void printingMatrix (int matrix[][5])
{
    for (int i=0; i<5; ++i)
    {
        for (int j=0; j<5; ++j)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
    int Alocal[5][5];

    for (int i=0; i<5; ++i)
    {
        for (int j=0; j<5; ++j)
        {
            Alocal[i][j]=0;
        }
    }

    addMatrix (Alocal, 1);

    addMatrix (Alocal, 10);

    addMatrix (Alocal, 100);

    printingMatrix(Alocal);


    return 0;
}

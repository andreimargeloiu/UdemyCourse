# include <iostream>

using namespace std;

int Aglobal[3][3];

// adding value X to the every element in the matrix Aglobal
void addMatrix (int X)
{
    for (int i=0; i<3; ++i)
    {
        for (int j=0; j<3; ++j)
        {
            Aglobal[i][j]+=X;
        }
    }
}

// return the sum of all elements of Aglobal
int sumMatrix ()
{
    int sumElements=0;
    for (int i=0; i<3; ++i)
    {
        for (int j=0; j<3; ++j)
            sumElements+=Aglobal[i][j];
    }
    return sumElements;
}
int main()
{
    addMatrix (1);

    addMatrix (10);

    addMatrix (100);

    int sumElements=sumMatrix();
    cout<<sumElements;

    return 0;
}

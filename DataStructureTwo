# include <bits/stdc++.h>
using namespace std;

struct car
{
    char model[20];
    int year;
    int ID;
}mycar, cars[1000];

void printingCar (car variableCar) {
    cout<<variableCar.model<<"\n";
    cout<<variableCar.ID<<"\n";
    cout<<"\n";
}

int main ()
{
    strcpy(mycar.model, "Fast and furious");
    mycar.year=2017;

    cout<<mycar.model[0]<<mycar.model[1]<<mycar.model[2];
    cout<<mycar.model[3];

    for (int i=1; i<=100; ++i) {
        cars[i].ID=i;
        strcpy(cars[i].model, "Fast and furious");
        cars[i].year=2017;
    }

    // print cars[13] and cars[37]
    printingCar(cars[13]);
    printingCar(cars[37]);



    return 0;
}

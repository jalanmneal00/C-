/*Program by Jalan Neal*/
#include <iostream>
using namespace std;


int main()
{
    int pounds_2, shillings_2, pennies_2, pounds_1, shillings_1, pennies_1;

    int total_pounds, total_shillings, total_pennies;

    string answer;

    do

    {

        pounds_2 = 0, shillings_2 = 0, pennies_2 = 0, pounds_1 = 0, shillings_1 = 0, pennies_1 = 0;

        cout << "Enter the first amount in pounds : ";

        cin >> pounds_1;

        cout << "Enter the first amount in shillings : ";

        cin >> shillings_1;

        cout << "Enter the first amount in pennies : ";

        cin >> pennies_1;

        cout << "Enter the first amount in pounds : ";

        cin >> pounds_2;

        cout << "Enter the first amount in shillings : ";

        cin >> shillings_2;

        cout << "Enter the first amount in pennies : ";

        cin >> pennies_2;

        total_pounds = pounds_1 + pounds_2;

        total_shillings = shillings_1 + shillings_2;

        total_pennies = pennies_1 + pennies_2;

        if (total_pennies >= 12)

        {

            total_shillings += total_pennies / 12;

            total_pennies = total_pennies % 12;

        }

        if (total_shillings >= 20)

        {

            total_pounds += total_shillings / 20;

            total_shillings = total_shillings % 20;

        }

        cout << "Total : " << total_pounds << "." << total_shillings << "." << total_pennies << endl;

        cout << "Do you want to continue?(yes or no) : ";

        cin >> answer;

        if (answer == "no")

        {

            return 0;

        }

    } while (1);

}
// #include <iostream>
// using namespace std;
// void calculate_rates()
// {
//     int initial = 2500, calculated = 2500;
//     cout << "rate of year 1 is " << calculated << endl;

//     for (int i = 2; i <= 6; i++)
//     {
//         calculated = (0.04 * calculated) + calculated;
//         cout << "rate of year " << i << " is " << calculated << endl;
//     }
// }
// int main()
// {
//     calculate_rates();
//     return 0;
// }

// q4=============================================
//#include <iostream>
// using namespace std;
// int main()
// {
//     int arr[9];
//     int largest = arr[0];
//     int smallest = arr[0];

//     for (int i = 0; i <= 9; i++)
//     {
//         cout << "Enter the " << (i + 1) << " Value ";
//         cin >> arr[i];
//     }

//     for (int i = 0; i <= 9; i++)
//     {
//         if (arr[i] >= largest)
//             largest = arr[i];
//     }
//     cout << "The Largest value is " << largest << endl;

//     for (int i = 0; i <= 9; i++)
//     {
//         if (arr[i] <= smallest)
//             smallest = arr[i];
//     }

//     cout << "The smallest value is " << smallest << endl;

//     return 0;
// }

// q5===============================================================
// #include <iostream>
// using namespace std;

// int main()
// {
//    double arr[11], total = 0;
//    double heighest = arr[0];
//    double lowest = arr[0];
//    for (int i = 0; i <= 11; i++)
//    {
//       cout << "Enter the rainfall for month " << (i + 1) << ": ";
//       do
//       {
//          cin >> arr[i];
//       } while (arr[i] <= 0);
//    }

//    for (int i = 0; i <= 11; i++)
//    {
//       total += arr[i];
//    }
//    cout << "\nThe total rainfall is " << total << endl;
//    cout << "The average rainfall is " << total / 12 << endl;

//    for (int i = 0; i <= 9; i++)
//    {
//       if (arr[i] >= heighest)
//          heighest = arr[i];
//    }
//    cout << "The Heighest amount is " << heighest << endl;

//    for (int i = 0; i <= 9; i++)
//    {
//       if (arr[i] <= lowest)
//          lowest = arr[i];
//    }

//    cout << "The lowest amount is " << lowest << endl;

//    return 0;
// }

// Q6================================================================
// #include <iostream>
// using namespace std;

// int main()
// {
//    int arr[3][7], ROWS, COLUMNS;
//    double columns_sum, total;

//    cout << "\nEnter the following information, " << endl
//         << "How many pounds of food eaten per day: " << endl;
//    for (int r = 0; r < 3; r++)
//    {
//       for (int c = 0; c < 7; c++)
//       {
//          cout << "Monkey no." << (r + 1) << ", on day " << (c + 1) << ": ";
//          do
//          {
//             cin >> arr[r][c];
//          } while (arr[r][c] <= 0);
//       }
//       cout << endl;
//    }

//    int t_elements = ROWS * COLUMNS;

//    for (int row = 0; row < ROWS; row++)
//    {
//       for (int column = 0; column < COLUMNS; column++)
//          columns_sum += arr[row][column];
//    }
//    total = columns_sum / t_elements;

//    double sum, temp_arr[ROWS];

//    for (int row = 0; row < ROWS; row++)
//    {
//       sum = 0;
//       for (int column = 0; column < COLUMNS; column++)
//          sum += arr[row][column];

//       temp_arr[row] = sum;
//    }

//    double least = temp_arr[0];

//    for (int number = 1; number < ROWS; number++)
//    {
//       if (temp_arr[number] <= least)
//          least = temp_arr[number];
//    }
//    cout << "The least amount of food eaten is " << least << endl;

//    for (int row = 0; row < ROWS; row++)
//    {
//       sum = 0;
//       for (int column = 0; column < COLUMNS; column++)
//          sum += arr[row][column];

//       temp_arr[row] = sum;
//    }

//    double geateat = temp_arr[0];
//    for (int number = 1; number < ROWS; number++)
//    {
//       if (temp_arr[number] >= geateat)
//          geateat = temp_arr[number];
//    }
//    cout << "The greatest amount of food eaten is " << geateat << endl;

//    return 0;
// }

// Q7==================================================
// #include <iostream>
// #include <iomanip>
// using namespace std;

// double calculateRetail(double num1, double num2)
// {
//     return (( num2/100) *num1)+num1;
// }

// int main()
// {
//     double wholesale_cost, markup_percent, retail_price;5

//     cout << "Enter wholesale cost: ";
//     do
//     {
//         cin >> wholesale_cost;
//     } while (wholesale_cost <= 1);

//     cout << "Enter it's markup perwcentage: ";
//     do
//     {
//         cin >> markup_percent;
//     } while (markup_percent <= 1);

//     retail_price = calculateRetail(wholesale_cost, markup_percent);

//     cout << "Markup percentage = %" << (markup_percent) << endl;

//     cout << setprecision(2) << fixed << "Wholesale cost    = $" << wholesale_cost << endl
//          << "Retail price      = $" << retail_price << endl;

//     return 0;

//     }

    // Q8====================================================

    // #include <iostream>
    // #include <string>
    // using namespace std;

    // double check(double nuem)//valid...
    // {
    //     while (!(cin >> nuem))
    //     {
    //         cout << "Error. An integer above 0 must be entered: ";
    //         cin.clear();
    //         cin.ignore(1200, 'n');
    //     }
    //     return nuem;
    // }

    // double get_length(double num)//return length
    // {
    //     cout << "Enter rectangle's length: ";
    //     num = check(num);
    //     return num;
    // }

    // double get_width(double num)//return width
    // {
    //     cout << "Enter rectangle's weidth: ";
    //     num = check(num);
    //     return num;
    // }

    // double get_area(double l, double width)//return area
    // {
    //     return l * width;
    // }

    // void show_alldata(double l, double w, double a)//display
    // {
    //     cout << "Length = " << l << endl;
    //     cout << "Width  = " << w << endl;
    //     cout << "Area   = " << a << endl;
    // }
    // //----------------
    // int main()
    // {
    //     double l, w, a;

    //     l = get_length(l);
    //     w = get_width(w);
    //     a = get_area(l, w);
    //     show_alldata(l, w, a);

    //     return 0;
    // }

    // Q9======================================
    //  #include <iostream>
    //  #include <string>

    // using namespace std;

    // const string NE = "North East", NW = "North West", SE = "South East", SW = "South West";

    // double inputValidate(double num)
    // {
    //     do
    //     {
    //         cin >> num;
    //     } while (num <= 1);
    // }
    // double getSales(string division)
    // {
    //     double sales;
    //     cout << "What is the quarterly sales figure "
    //          << "for " << division << "? $";
    //     sales = inputValidate(sales);
    //     cout << endl;
    //     return sales;
    // }
    // void checkIfHighest(double sales1, double sales2, double sales3, double sales4, string division)
    // {
    //     if (sales1 > sales2)
    //     {
    //         if (sales1 > sales3)
    //         {
    //             if (sales1 > sales4)
    //             {
    //                 cout << division << " of sales figure at: "<< "$" << sales1;
    //             }
    //         }
    //     }
    // }
    // void findHighest(double NE_sales, double NW_sales, double SE_sales, double SW_sales)
    // {
    //     cout << "The highest division is\n";

    //     checkIfHighest(NE_sales, NW_sales, SE_sales, SW_sales, NE);
    //     checkIfHighest(NW_sales, NE_sales, SE_sales, SW_sales, NW);
    //     checkIfHighest(SE_sales, NE_sales, NW_sales, SW_sales, SE);
    //     checkIfHighest(SW_sales, NE_sales, NW_sales, SE_sales, SW);

    //     cout << endl
    //          << endl;
    // }

    // int main()
    // {
    //     double NE_sales, NW_sales, SE_sales, SW_sales;

    //     NE_sales = getSales(NE);
    //     NW_sales = getSales(NW);
    //     SE_sales = getSales(SE);
    //     SW_sales = getSales(SW);

    //     findHighest(NE_sales, NW_sales, SE_sales, SW_sales);

    //     return 0;
    // }

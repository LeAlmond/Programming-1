#include <iostream>

using namespace std;

double f(double x);

void integralization();

int main()
{
        integralization();

        return 0;
}

double f(double x)
{
        //Function for Curve of which area should be calculated
        return (6*x*x*x*x-7*x*x*x+4*x);
}

void integralization()
{
        double A, B, H, SUM, INTEGRAL;

        int STEPS;

        bool SA;

        do {
                cout<<"Enter Starting Point: \n";
                cin>>A;
                //Enter the begining point on the Curve on the x axis as A

                cout<<"Enter Ending Point: \n";
                cin>>B;
                //Enter the Ending point of the Curve on the x axis as B

                cout<<"Enter number of iterations as N: \n";
                cin>>STEPS;
                //Enter the Accuracy/Number of rectangles to divide the Curve into

                cout<<"Would you like to view Area of Each Rectangle 1 for yes 0 for no: \n";
                cin>>SA;

                SUM = (f(A) + f(B))/2;
                //Midpoint of the function of Point A and Point B

                H = (B-A)/STEPS;
                //Width of each Rectangular iteration.
                cout<< "The width of each segment is = "<< H << endl;

                if (A<B)
                {
                        for (int i = 1; i < STEPS; i++) {
                                SUM += f(A+i*H);
                                //Accumalitive Height of each iteration.

                                if (SA) {
                                        cout<< "The Height of Current Rectangle is "<< f(A+i*H) <<endl;
                                        //Height of current rectangular iteration.

                                        cout<< "The Area of Current Rectangle is "<< f(A+i*H)*H <<endl;
                                        //Area of current rectangular iteration.
                                }
                        }

                        INTEGRAL = SUM*H;
                        //Overall approximated Area Under the curve

                        cout.precision(10);
                        //Limits amount of Decimal Places

                        cout<< "The Integral approximated to "<< STEPS <<" rectangular divisions is = "<< INTEGRAL << endl;
                }

                else

                {
                        cout<<"A must be less than B";
                }

                cout<<"Would you like to check another set 1 for yes 0 for no: \n";
                cin>>SA;

        } while(SA);
}

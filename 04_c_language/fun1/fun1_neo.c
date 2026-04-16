/*
===========================================================
📌 QUESTION 1: Bus Trip Total Cost Calculation
===========================================================

🧠 WHAT IS ASKED?
- Calculate total cost of bus trip using:
  Ticket Cost + Fuel Cost

-----------------------------------------------------------
✅ APPROACH:
1. Input all values
2. Ticket Cost = ticket price × passengers
3. Fuel Cost = fuel price × consumption × distance
4. Total = Ticket + Fuel
5. Print result
-----------------------------------------------------------
*/

#include <stdio.h>

double calculateTicketCost(double ticketprice, int passengers)
{
    return ticketprice * passengers;
}

double calculateFuelCost(double fuelprice, double fuelconsumption, double distance)
{
    return fuelprice * fuelconsumption * distance;
}

int main()
{
    double ticketprice, fuelprice, fuelconsumption, distance;
    int passengers;

    scanf("%lf", &ticketprice);
    scanf("%d", &passengers);
    scanf("%lf", &fuelprice);
    scanf("%lf", &fuelconsumption);
    scanf("%lf", &distance);

    double ticketcost = calculateTicketCost(ticketprice, passengers);
    double fuelcost = calculateFuelCost(fuelprice, fuelconsumption, distance);

    double total = ticketcost + fuelcost;

    printf("Rs. %.2lf", total);

    return 0;
}


/*
===========================================================
📌 QUESTION 2: Neon Number Check
===========================================================

🧠 WHAT IS ASKED?
- Check if number is Neon Number
(Sum of digits of square = original number)

-----------------------------------------------------------
✅ APPROACH:
1. Square the number
2. Extract digits using %10
3. Add digits
4. Compare with original number
-----------------------------------------------------------
*/

#include <stdio.h>

int neon(int n)
{
    int square = n * n;
    int sum = 0;

    while(square > 0)
    {
        sum += square % 10;
        square /= 10;
    }

    return (sum == n);
}

int main()
{
    int n;
    scanf("%d", &n);

    if(neon(n))
        printf("%d is a neon number", n);
    else
        printf("%d is not a neon number", n);

    return 0;
}


/*
===========================================================
📌 QUESTION 3: Factors + Digit Count
===========================================================

🧠 WHAT IS ASKED?
- Print factors (call-by-value)
- Count digits (call-by-reference)

-----------------------------------------------------------
✅ APPROACH:
1. Loop from 1 to N → find factors
2. Use pointer to count digits
-----------------------------------------------------------
*/

#include <stdio.h>

void factors(int n)
{
    printf("Factors: ");
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
            printf("%d ", i);
    }
}

int count_digits(int *n)
{
    int count = 0;
    int temp = *n;

    while(temp > 0)
    {
        count++;
        temp /= 10;
    }

    return count;
}

int main()
{
    int n;
    scanf("%d", &n);

    factors(n);

    int digits = count_digits(&n);

    printf("\nTotal digits: %d", digits);

    return 0;
}


/*
===========================================================
📌 QUESTION 4: Property Tax Calculation
===========================================================

🧠 WHAT IS ASKED?
- Reduce value by 8%
- Apply 1.05% tax

-----------------------------------------------------------
✅ APPROACH:
1. Taxable = value × 0.92
2. Tax = taxable × 0.0105
-----------------------------------------------------------
*/

#include <stdio.h>

void propertyTaxCalc(double assessedValue)
{
    double taxableAmount = assessedValue * 0.92;
    double propertyTax = taxableAmount * 0.0105;

    printf("Taxable Amount: %.2lf\n", taxableAmount);
    printf("Property Tax: %.2lf", propertyTax);
}

int main()
{
    double value;
    scanf("%lf", &value);

    propertyTaxCalc(value);

    return 0;
}


/*
===========================================================
📌 QUESTION 5: Parking Charge Calculator
===========================================================

🧠 WHAT IS ASKED?
- Calculate parking cost based on type

-----------------------------------------------------------
✅ APPROACH:
1. Read type + hours
2. Assign rate:
   c → 2
   b → 3
   t → 4
3. Multiply rate × hours
-----------------------------------------------------------
*/

#include <stdio.h>

float parkingCharge(char type, float hours)
{
    float rate;

    if(type == 'c')
        rate = 2;
    else if(type == 'b')
        rate = 3;
    else if(type == 't')
        rate = 4;

    return rate * hours;
}

int main()
{
    char type;
    float hours;

    scanf(" %c", &type);
    scanf("%f", &hours);

    float total = parkingCharge(type, hours);

    printf("%.2f", total);

    return 0;
}
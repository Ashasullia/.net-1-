using System;

namespace binarytriangle
{
    class Program
    {
        static void Main(string[] args)
        {
            int number, digit = 1;
            Console.Write("\n enter the number of lines;");
            number = Convert.ToInt32(Console.ReadLine());
            for (int i = 1; i <= number; i++)
            {
                for (int space = number - i; space > 0; space--)
                {
                    Console.Write("");
                }
                    for (int j = 0; j < i; j++)
                { 
                        Console.Write(digit + "");
                    digit = (digit == 1)? 0 : 1;
                }
                Console.Write("\n");
            }
        }
    }
}
using System;

namespace amicablenumber
{
    class Program
    {
        static void Main(string[] args)
        {
            int num1, num2, sum1 = 0, sum2 = 0;
            Console.WriteLine("\n.......AMICABLE NUMBER.....\n");
            Console.WriteLine("\nenter the first nuumber");
            num1 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("\nenter the second number:");
            num2 = Convert.ToInt32(Console.ReadLine());
            for (int i = 1; i < num1; i++)
            {
                if (num1 % i == 0)
                {
                    sum1 += i;
                }
            } 
            for (int i = 1; i < num2; i++)
            {
                if (num2 % i == 0)
                {
                    sum2 += i;
                }
            }
            if (sum1 == num2 && sum2 == num1)
            {
                Console.WriteLine("\nthe numbers {0} and {1} are amicable", num1, num2);
            }
            else
                {
                    Console.WriteLine("\nthe numbers {0} and {1} are not amicable", num1, num2);


                }
            


        }
    }
}

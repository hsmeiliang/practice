using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _013_delegate
{
    public delegate double MyDelegate(double num1, double num2);
    class Program
    {
        static double Multiply(double num1, double num2)
        {
            return num1 * num2;
        }
        static double Divide(double num1, double num2)
        {
            return num1 / num2;
        }
        static void Main(string[] args)
        {
            MyDelegate de;
            de = Multiply;
            Console.WriteLine(de(2, 3));
            de = Divide;
            Console.WriteLine(de(4, 2));
            Console.ReadKey();
        }
    }
}

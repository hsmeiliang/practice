using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _011_function
{
    class Program
    {
        static void Write()
        {
            Console.WriteLine("function output.");
        }
        static int Sum(int num1, int num2)
        {
            return num1 + num2;
        }
        static int Maxnum(int[] array)
        {
            int max = array[0];
            for (int i = 1; i < array.Length; i++)
                if (array[i] > max)
                    max = array[i];
            return max;
        }
        static int MaxnumPar(params int[] array)
        {
            int max = array[0];
            for (int i = 1; i < array.Length; i++)
                if (array[i] > max)
                    max = array[i];
            return max;
        }
        static int[] GetDivisor(int number)
        {
            int count = 0;
            for(int i =1; i<=number; i++)
            {
                if (number % i == 0)
                    count++;
            }
            int[] Arr = new int[count];
            int index = 0;
            for (int i = 1; i <= number; i++)
            {
                if (number % i == 0)
                {
                    Arr[index] = i;
                    index++;
                }
            }
            return Arr;
        }
        static int Fib(int num)
        {
            if(num == 0 || num ==1)
            {
                return 1;
            }
            return Fib(num - 1) + Fib(num - 2);
        }
        static void Main(string[] args)
        {
            Write();
            Console.WriteLine(Sum(3, 4));
            int[] arr = GetDivisor(15);
            foreach (int temp in arr)
                Console.WriteLine(temp + " ");
            Console.WriteLine(Maxnum(new int[] { 3, 2, 4, 5, 11, 32, 1, 5, 2 }));
            Console.WriteLine(MaxnumPar(3, 2, 4, 5, 11, 32, 1, 5, 2));
            Console.WriteLine(Fib(5));
            Console.ReadKey();
        }
    }
}

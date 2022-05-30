using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _009_array
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] scores1 = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
            int[] scores2 = new int[10];
            int[] scores3 = new int[10] { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
            //Console.WriteLine(scores1[5] + " " + scores2[5]);

            char[] charArr = new char[2] { 'a', 'b' };
            string[] strArr = new string[] { "apple", "bad", "cat", "duck" };
            //Console.WriteLine(charArr[1] + " " + strArr[1]);
            for(int i = 0; i < scores3.Length; i++)
            {
                Console.WriteLine(scores3[i]);
            }
            int j = 0;
            while(j < scores3.Length)
            {
                Console.WriteLine(scores3[j]);
                j++;
            }
            foreach(int temp in scores3)
            {
                Console.WriteLine(temp);
            }
            Console.ReadKey();
        }
    }
}

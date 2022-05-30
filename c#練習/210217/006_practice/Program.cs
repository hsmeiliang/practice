using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _006_practice
{
    class Program
    {
        static void Main(string[] args)
        {
            //int num = 0, numMax = 0,numMin = 0 ;
            //for(int i = 0; i<4; i++)
            //{
            //    num = Convert.ToInt32(Console.ReadLine());
            //    if (num > numMax)
            //        numMax = num;
            //    if (num < numMin)
            //        numMin = num;
            //}
            //Console.WriteLine("Max:{0}, Min:{1}", numMax, numMin);
            //double num = 0;
            //Random random = new Random();
            //int dice = 0;
            //for(int i = 0; i<100; i++)
            //{
            //    //num = Math.Sqrt(i);
            //    //Console.WriteLine(num);
            //    //if (i % 3 == 0 && i % 5 != 0)
            //    //    num++;
            //    dice = random.Next(1, 7);//range 1~6
            //    Console.WriteLine(dice);
            //}
            //Console.WriteLine(num);
            //int count = 0;
            //string str = Console.ReadLine();
            //for(int i = 0; i<5; i++)
            //{
            //    if (str[i] >= 'A' && str[i] <= 'Z')
            //        count++;
            //}
            //Console.WriteLine(count);
            int sum = 0;
            for(int i = 0; i<1000; i++)
            {
                string str = "1";
                sum = 1;
                for(int j =2; j<i; j++)
                {
                    if(i%j == 0)
                    {
                        sum += j;
                        str += "+"+j;
                    }
                }
                if (sum == i)
                    Console.WriteLine(i + "=" + str);
            }
            Console.ReadKey();
        }
    }
}

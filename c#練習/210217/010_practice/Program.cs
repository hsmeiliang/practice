using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _010_practice
{
    class Program
    {
        static void Main(string[] args)
        {
            string str = "sfiopjgar iopjpih";
            for(int i = str.Length-1; i >= 0; i--)
            {
                Console.Write(str[i]);
            }
            Console.WriteLine("\n");

            string upperstr = str.ToUpper();
            string lowerstr = str.ToLower();
            Console.WriteLine(upperstr);
            Console.WriteLine(lowerstr);
            Console.Write('\n');
            string str1 = "   dsafe   eef.  ";
            string str2 = str1.Trim();//去掉 前後 空白
            //TrimStart();//去掉 前 空白
            //TrimEnd();//去掉 後 空白
            Console.WriteLine(str2);
            Console.Write('\n');

            string[] strArr = str1.Split(' ');
            foreach(string temp in strArr)
            {
                Console.WriteLine("[" + temp + "]");
            }
            Console.Write('\n');

            string input = Console.ReadLine();
            string[] inputS = input.Split(' ');
            int[] inputNum = new int[inputS.Length];
            for (int i = 0; i < inputS.Length; i++)
                inputNum[i] = Convert.ToInt32(inputS[i]);
            Array.Sort(inputNum);
            foreach (int temp in inputNum)
                Console.WriteLine(temp+" ");

            Console.ReadKey();
        }
    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _002_變數
{
    class Program
    {
        static void Main(string[] args)
        {
            int age = 20;
            //char myChar = 'a';
            //bool myBool = false;
            //string name = "Milk";
            float myFloat = 0.33f;
            int myInt;
            myInt = (int)myFloat;//trans
           // Console.WriteLine(myFloat);
           // Console.WriteLine("name {0} age {1} T/F {2}",name, age, myBool);

            string str1 = "This is line1.\nThis is line2.";
            Console.WriteLine(str1);
            string str2 = @"This is line1.\n This is line2.";
            Console.WriteLine(str2);
            string str3 = str1 + str2;
            Console.WriteLine(str3);
            str3 = str1 + age;
            Console.WriteLine(str3);
        }
    }
}

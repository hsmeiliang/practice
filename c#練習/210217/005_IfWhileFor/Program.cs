using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _005_IfWhileFor
{
    class Program
    {
        static void Main(string[] args)
        {
            int myint = 100;
            //string str = (myint < 10) ? "Less then 10" : "larger than 10";
            //Console.WriteLine(str);

            //if(myint < 50)
            //{
            //    Console.WriteLine("small");
            //}
            //else if(myint == 50)
            //{
            //    Console.WriteLine("middle");
            //}
            //else
            //{
            //    Console.WriteLine("Large");
            //}
            //myint = 3;
            //switch(myint)
            //{
            //    case 0:
            //        Console.WriteLine("state0");
            //        break;
            //    case 1:
            //        Console.WriteLine("state1");
            //        break;
            //    case 2:
            //        Console.WriteLine("state2");
            //        break;
            //    case 3:
            //        Console.WriteLine("state3");
            //        break;
            //    case 4:
            //        Console.WriteLine("state4");
            //        break;
            //    default:
            //        Console.WriteLine("Overflow");
            //        break;
            //}
            myint = 0;
            while(true)
            {
                myint++;
                if (myint == 5)
                {
                    continue;
                }
                if(myint == 10)
                {
                    break;
                }
                Console.Write(myint);
            }
            Console.WriteLine("\n");
            myint = 0;
            do
            {
                Console.Write(myint);
                myint++;
            } while (myint < 10);
            Console.WriteLine("\n");
            for (myint = 0; myint < 10; myint++)
            {
                Console.Write(myint);
            }

            Console.ReadKey();
        }
    }
}

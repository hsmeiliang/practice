using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _004_ReadWrite
{
    class Program
    {
        static void Main(string[] args)
        {
            //string str = Console.ReadLine();//read
            //Console.WriteLine(str);
            string numstr = "123";
            int num = Convert.ToInt32(numstr);
            string str = Convert.ToString(num);//str = num + "";
            string ddstr = "1.34";
            double myFloat = Convert.ToDouble(ddstr);
            Console.WriteLine(num);
            Console.WriteLine(myFloat);
            Console.WriteLine(num + "" + myFloat);//number分開輸出
            goto mylabel;
            num++;
        mylabel: Console.WriteLine(num);
            Console.ReadKey();
        }
    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _003_AddSub
{
    class Program
    {
        static void Main(string[] args)
        {
            int num = 20;
            int result = num++;//t = num, num = num+1
            Console.WriteLine(result + ":" + num);
            result = ++num;//num = num+1, t = num
            Console.WriteLine(result + ":" + num);

        }
    }
}
